// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "txdb.h"
#include "base58.h"

#include "chainparams.h"
#include "hash.h"
#include "main.h"
#include "pow.h"
#include "uint256.h"

#include <stdint.h>

#include <boost/thread.hpp>

using namespace std;

static const char DB_COINS = 'c';
static const char DB_BLOCK_FILES = 'f';
static const char DB_TXINDEX = 't';
static const char DB_ADDRESSINDEX = 'a';
static const char DB_ADDRESSUNSPENTINDEX = 'u';
static const char DB_TIMESTAMPINDEX = 's';
static const char DB_BLOCKHASHINDEX = 'z';
static const char DB_SPENTINDEX = 'p';
static const char DB_BLOCK_INDEX = 'b';

static const char DB_BEST_BLOCK = 'B';
static const char DB_FLAG = 'F';
static const char DB_REINDEX_FLAG = 'R';
static const char DB_LAST_BLOCK = 'l';


void static BatchWriteCoins(CLevelDBBatch &batch, const uint256 &hash, const CCoins &coins) {
    if (coins.IsPruned())
        batch.Erase(make_pair(DB_COINS, hash));
    else
        batch.Write(make_pair(DB_COINS, hash), coins);
}

void static BatchWriteHashBestChain(CLevelDBBatch &batch, const uint256 &hash) {
    batch.Write(DB_BEST_BLOCK, hash);
}

CCoinsViewDB::CCoinsViewDB(size_t nCacheSize, bool &isObfuscated, bool fMemory, bool fWipe) : db(GetDataDir() / "chainstate", nCacheSize, isObfuscated, fMemory, fWipe) {
}

bool CCoinsViewDB::GetCoins(const uint256 &txid, CCoins &coins) const {
    return db.Read(make_pair(DB_COINS, txid), coins);
}

bool CCoinsViewDB::HaveCoins(const uint256 &txid) const {
    return db.Exists(make_pair(DB_COINS, txid));
}

uint256 CCoinsViewDB::GetBestBlock() const {
    uint256 hashBestChain;
    if (!db.Read(DB_BEST_BLOCK, hashBestChain))
        return uint256();
    return hashBestChain;
}

bool CCoinsViewDB::BatchWrite(CCoinsMap &mapCoins, const uint256 &hashBlock) {
    CLevelDBBatch batch;
    size_t count = 0;
    size_t changed = 0;
    for (CCoinsMap::iterator it = mapCoins.begin(); it != mapCoins.end();) {
        if (it->second.flags & CCoinsCacheEntry::DIRTY) {
            BatchWriteCoins(batch, it->first, it->second.coins);
            changed++;
        }
        count++;
        CCoinsMap::iterator itOld = it++;
        mapCoins.erase(itOld);
    }
    if (!hashBlock.IsNull())
        BatchWriteHashBestChain(batch, hashBlock);

    LogPrint("coindb", "Committing %u changed transactions (out of %u) to coin database...\n", (unsigned int)changed, (unsigned int)count);
    return db.WriteBatch(batch);
}

CBlockTreeDB::CBlockTreeDB(size_t nCacheSize, bool &isObfuscated, bool fMemory, bool fWipe) : CLevelDBWrapper(GetDataDir() / "blocks" / "index", nCacheSize, isObfuscated, fMemory, fWipe) {
}

bool CBlockTreeDB::ReadBlockFileInfo(int nFile, CBlockFileInfo &info) {
    return Read(make_pair(DB_BLOCK_FILES, nFile), info);
}

bool CBlockTreeDB::WriteReindexing(bool fReindexing) {
    if (fReindexing)
        return Write(DB_REINDEX_FLAG, '1');
    else
        return Erase(DB_REINDEX_FLAG);
}

bool CBlockTreeDB::ReadReindexing(bool &fReindexing) {
    fReindexing = Exists(DB_REINDEX_FLAG);
    return true;
}

bool CBlockTreeDB::ReadLastBlockFile(int &nFile) {
    return Read(DB_LAST_BLOCK, nFile);
}

bool CCoinsViewDB::GetStats(CCoinsStats &stats) const {
    /* It seems that there are no "const iterators" for LevelDB.  Since we
       only need read operations on it, use a const-cast to get around
       that restriction.  */
    boost::scoped_ptr<leveldb::Iterator> pcursor(const_cast<CLevelDBWrapper*>(&db)->NewIterator());
    pcursor->SeekToFirst();

    CHashWriter ss(SER_GETHASH, PROTOCOL_VERSION);
    stats.hashBlock = GetBestBlock();
    ss << stats.hashBlock;
    CAmount nTotalAmount = 0;
    while (pcursor->Valid()) {
        boost::this_thread::interruption_point();
        try {
            leveldb::Slice slKey = pcursor->key();
            CDataStream ssKey(slKey.data(), slKey.data()+slKey.size(), SER_DISK, CLIENT_VERSION);
            char chType;
            ssKey >> chType;
            if (chType == DB_COINS) {
                leveldb::Slice slValue = pcursor->value();
                CDataStream ssValue(slValue.data(), slValue.data()+slValue.size(), SER_DISK, CLIENT_VERSION);
                CCoins coins;
                ssValue >> coins;
                uint256 txhash;
                ssKey >> txhash;
                ss << txhash;
                ss << VARINT(coins.nVersion);
                ss << (coins.fCoinBase ? 'c' : 'n');
                ss << VARINT(coins.nHeight);
                stats.nTransactions++;
                for (unsigned int i=0; i<coins.vout.size(); i++) {
                    const CTxOut &out = coins.vout[i];
                    if (!out.IsNull()) {
                        stats.nTransactionOutputs++;
                        ss << VARINT(i+1);
                        ss << out;
                        nTotalAmount += out.nValue;
                    }
                }
                stats.nSerializedSize += 32 + slValue.size();
                ss << VARINT(0);
            }
            pcursor->Next();
        } catch (const std::exception& e) {
            return error("%s: Deserialize or I/O error - %s", __func__, e.what());
        }
    }
	
    stats.nHeight = mapBlockIndex.find(GetBestBlock())->second->nHeight;
    stats.hashSerialized = ss.GetHash();
    stats.nTotalAmount = nTotalAmount;
    return true;
}

bool CCoinsViewDB::TermDepositStats(CTermDepositStats &stats) const {
	    /* It seems that there are no "const iterators" for LevelDB.  Since we
       only need read operations on it, use a const-cast to get around
       that restriction.  */
    boost::scoped_ptr<leveldb::Iterator> pcursor(const_cast<CLevelDBWrapper*>(&db)->NewIterator());
    pcursor->SeekToFirst();

    CHashWriter ss(SER_GETHASH, PROTOCOL_VERSION);
	
	CAmount nNumberTxAmount = 0;
	CAmount nValueAmount = 0;
	std::set<uint160> addresses;
	
    while (pcursor->Valid()) {
		boost::this_thread::interruption_point();
        try {
            leveldb::Slice slKey = pcursor->key();
            CDataStream ssKey(slKey.data(), slKey.data()+slKey.size(), SER_DISK, CLIENT_VERSION);
            char chType;
            ssKey >> chType;
            if (chType == DB_COINS) {
				leveldb::Slice slValue = pcursor->value();
                CDataStream ssValue(slValue.data(), slValue.data()+slValue.size(), SER_DISK, CLIENT_VERSION);
				CCoins coins;
                ssValue >> coins;
				for (unsigned int i=0; i<coins.vout.size(); i++) {
					const CTxOut &out = coins.vout[i];
					vector<vector<unsigned char> > vSolutions;
					txnouttype whichType;
					const CScript& prevScript = out.scriptPubKey;
					if (Solver(prevScript, whichType, vSolutions)){
						//not matured TermDeposit
						if ( whichType == TX_CHECKLOCKTIMEVERIFY && out.scriptPubKey.GetTermDepositReleaseBlock()>chainActive.Height()){
							stats.nTransactions++;
							nNumberTxAmount += 1;
							nValueAmount += out.nValue;
							addresses.insert(uint160(vSolutions[0]));
							int nBlockMatured = out.scriptPubKey.GetTermDepositReleaseBlock() - chainActive.Height();
							if (nBlockMatured <= 720){
								stats.nValueAmount1day += out.nValue;
							} else if (720 < nBlockMatured && nBlockMatured <= 1440){
								stats.nValueAmount2days += out.nValue;
							} else if (1440 < nBlockMatured && nBlockMatured <= 5040){
								stats.nValueAmount7days += out.nValue;
							} else if (5040 < nBlockMatured && nBlockMatured <= 10080){
								stats.nValueAmount14days += out.nValue;
							} else if (10080 < nBlockMatured && nBlockMatured <= 21600){
								stats.nValueAmount30days += out.nValue;
							} else {
								stats.nValueAmountMore30days += out.nValue;
							}
						}
					}else{
						continue;
					}
					
				}
			}
            pcursor->Next();
        } catch (const std::exception& e) {
            return error("%s: Deserialize or I/O error - %s", __func__, e.what());
        }
	}
	stats.nAddress = addresses.size();
    stats.nTotalAmount = nValueAmount;
    return true;
}

bool CBlockTreeDB::WriteBatchSync(const std::vector<std::pair<int, const CBlockFileInfo*> >& fileInfo, int nLastFile, const std::vector<const CBlockIndex*>& blockinfo) {
    CLevelDBBatch batch;
    for (std::vector<std::pair<int, const CBlockFileInfo*> >::const_iterator it=fileInfo.begin(); it != fileInfo.end(); it++) {
        batch.Write(make_pair(DB_BLOCK_FILES, it->first), *it->second);
    }
    batch.Write(DB_LAST_BLOCK, nLastFile);
    for (std::vector<const CBlockIndex*>::const_iterator it=blockinfo.begin(); it != blockinfo.end(); it++) {
        batch.Write(make_pair(DB_BLOCK_INDEX, (*it)->GetBlockHash()), CDiskBlockIndex(*it));
    }
    return WriteBatch(batch, true);
}

bool CBlockTreeDB::ReadTxIndex(const uint256 &txid, CDiskTxPos &pos) {
    return Read(make_pair(DB_TXINDEX, txid), pos);
}

bool CBlockTreeDB::WriteTxIndex(const std::vector<std::pair<uint256, CDiskTxPos> >&vect) {
    CLevelDBBatch batch;
    for (std::vector<std::pair<uint256,CDiskTxPos> >::const_iterator it=vect.begin(); it!=vect.end(); it++)
        batch.Write(make_pair(DB_TXINDEX, it->first), it->second);
    return WriteBatch(batch);
}

bool CBlockTreeDB::ReadSpentIndex(CSpentIndexKey &key, CSpentIndexValue &value) {
    return Read(make_pair(DB_SPENTINDEX, key), value);
}

bool CBlockTreeDB::UpdateSpentIndex(const std::vector<std::pair<CSpentIndexKey, CSpentIndexValue> >&vect) {
    CLevelDBBatch batch;
    for (std::vector<std::pair<CSpentIndexKey,CSpentIndexValue> >::const_iterator it=vect.begin(); it!=vect.end(); it++) {
        if (it->second.IsNull()) {
            batch.Erase(make_pair(DB_SPENTINDEX, it->first));
        } else {
            batch.Write(make_pair(DB_SPENTINDEX, it->first), it->second);
        }
    }
    return WriteBatch(batch);
}

bool CBlockTreeDB::UpdateAddressUnspentIndex(const std::vector<std::pair<CAddressUnspentKey, CAddressUnspentValue > >&vect) {
    CLevelDBBatch batch;
    for (std::vector<std::pair<CAddressUnspentKey, CAddressUnspentValue> >::const_iterator it=vect.begin(); it!=vect.end(); it++) {
        if (it->second.IsNull()) {
            batch.Erase(make_pair(DB_ADDRESSUNSPENTINDEX, it->first));
        } else {
            batch.Write(make_pair(DB_ADDRESSUNSPENTINDEX, it->first), it->second);
        }
    }
    return WriteBatch(batch);
}

bool CBlockTreeDB::ReadAddressUnspentIndex(uint160 addressHash, int type,
        std::vector<std::pair<CAddressUnspentKey, CAddressUnspentValue> > &unspentOutputs) {

    boost::scoped_ptr<leveldb::Iterator> pcursor(NewIterator());

	CDataStream ssKeySet(SER_DISK, CLIENT_VERSION);
	ssKeySet << make_pair(DB_ADDRESSUNSPENTINDEX, CAddressIndexIteratorKey(type, addressHash));
    pcursor->Seek(ssKeySet.str());

    while (pcursor->Valid()) {
        boost::this_thread::interruption_point();
		try {
            leveldb::Slice slKey = pcursor->key();
            CDataStream ssKey(slKey.data(), slKey.data()+slKey.size(), SER_DISK, CLIENT_VERSION);

            char chType;
            CAddressUnspentKey indexKey;
            ssKey >> chType;
            ssKey >> indexKey;

			if (chType == DB_ADDRESSUNSPENTINDEX && indexKey.hashBytes == addressHash) {
				try {
                    leveldb::Slice slValue = pcursor->value();
                    CDataStream ssValue(slValue.data(), slValue.data()+slValue.size(), SER_DISK, CLIENT_VERSION);
                    CAddressUnspentValue nValue;
                    ssValue >> nValue;
                    unspentOutputs.push_back(make_pair(indexKey, nValue));
                    pcursor->Next();
                } catch (const std::exception& e) {
                    return error("failed to get address unspent value");
                }

			} else {
				break;
			}
		} catch (const std::exception& e) {
            return error("%s: Deserialize or I/O error - %s", __func__, e.what());
        }
    }

    return true;
}

bool CBlockTreeDB::WriteAddressIndex(const std::vector<std::pair<CAddressIndexKey, CAmount > >&vect) {
    CLevelDBBatch batch;
    for (std::vector<std::pair<CAddressIndexKey, CAmount> >::const_iterator it=vect.begin(); it!=vect.end(); it++)
        batch.Write(make_pair(DB_ADDRESSINDEX, it->first), it->second);
    return WriteBatch(batch);
}

bool CBlockTreeDB::EraseAddressIndex(const std::vector<std::pair<CAddressIndexKey, CAmount > >&vect) {
    CLevelDBBatch batch;
    for (std::vector<std::pair<CAddressIndexKey, CAmount> >::const_iterator it=vect.begin(); it!=vect.end(); it++)
        batch.Erase(make_pair(DB_ADDRESSINDEX, it->first));
    return WriteBatch(batch);
}

bool CBlockTreeDB::ReadAddressIndex(uint160 addressHash, int type,
                                    std::vector<std::pair<CAddressIndexKey, CAmount> > &addressIndex,
                                    int start, int end) {

    //boost::scoped_ptr<leveldb::Iterator> pcursor(NewIterator());
	//LogPrintf("txdb : addr from param %d %s\n", type, CBitcoinAddress(CKeyID(uint160(addressHash))).ToString());
/*
	CDataStream ssKeySet(SER_DISK, CLIENT_VERSION);

    if (start > 0 && end > 0) {
		ssKeySet << make_pair(DB_ADDRESSINDEX, CAddressIndexIteratorHeightKey(type, addressHash, start));
    } else {
		ssKeySet << make_pair(DB_ADDRESSINDEX, CAddressIndexIteratorKey(type, addressHash));
    }


	pcursor->Seek(ssKeySet.str());
*/
	boost::scoped_ptr<CLevelDBIterator> pcursor(NewIteratorDB());
	
    if (start > 0 && end > 0) {
        pcursor->Seek(make_pair(DB_ADDRESSINDEX, CAddressIndexIteratorHeightKey(type, addressHash, start)));
    } else {
        pcursor->Seek(make_pair(DB_ADDRESSINDEX, CAddressIndexIteratorKey(type, addressHash)));
    }
	
    while (pcursor->Valid()) {
        boost::this_thread::interruption_point();
		/*
		try {
            leveldb::Slice slKey = pcursor->key();
            CDataStream ssKey(slKey.data(), slKey.data()+slKey.size(), SER_DISK, CLIENT_VERSION);

            char chType;
            CAddressIndexKey indexKey;
            ssKey >> chType;
            ssKey >> indexKey;
	    string btcaddr = CBitcoinAddress(CScriptID(uint160(indexKey.hashBytes))).ToString();
	    string rpcaddr = CBitcoinAddress(CScriptID(uint160(addressHash))).ToString();
	    LogPrintf("txdb : index addr %s VS  rpc addr: %s\n", btcaddr, rpcaddr);
	    string btcaddr = CBitcoinAddress(CKeyID(uint160(indexKey.hashBytes))).ToString();
        string rpcaddr = CBitcoinAddress(CKeyID(uint160(addressHash))).ToString();
	    LogPrintf("txdb : index addr %s VS  rpc addr: %s\n", btcaddr, rpcaddr);
			if ( chType == DB_ADDRESSINDEX && indexKey.hashBytes == addressHash){ 
				if (end > 0 && indexKey.blockHeight > end) {
					break;
				}
				try{
					leveldb::Slice slValue = pcursor->value();
					CDataStream ssValue(slValue.data(), slValue.data()+slValue.size(), SER_DISK, CLIENT_VERSION);
					CAmount nValue;
					ssValue >> nValue;
					addressIndex.push_back(make_pair(indexKey, nValue));
					pcursor->Next();
				} catch (const std::exception& e) {
                    return error("failed to get address index value");
                }
			} else { //do nothing if condition is false
				LogPrintf("txdb : False in condition: \n");
				break;
			}
		} catch (const std::exception& e) {
            return error("%s: Deserialize or I/O error - %s", __func__, e.what());
        }
		*/
	    
		std::pair<char,CAddressIndexKey> key;
        if (pcursor->GetKey(key) && key.first == DB_ADDRESSINDEX && key.second.hashBytes == addressHash) {
            if (end > 0 && key.second.blockHeight > end) {
                break;
            }
            CAmount nValue;
            if (pcursor->GetValue(nValue)) {
                addressIndex.push_back(make_pair(key.second, nValue));
				string btcaddr = CBitcoinAddress(CKeyID(uint160(key.second.hashBytes))).ToString();
				string rpcaddr = CBitcoinAddress(CKeyID(uint160(addressHash))).ToString();
				LogPrintf("txdb : index addr %s VS  rpc addr: %s %d\n", btcaddr, rpcaddr, nValue);
                pcursor->Next();
            } else {
                return error("failed to get address index value");
            }
        } else {
            break;
        }
    }
    return true;
}

/*
bool CBlockTreeDB::WriteTimestampIndex(const CTimestampIndexKey &timestampIndex) {
    CLevelDBBatch batch;
    batch.Write(make_pair(DB_TIMESTAMPINDEX, timestampIndex), 0);
    return WriteBatch(batch);
}

bool CBlockTreeDB::ReadTimestampIndex(const unsigned int &high, const unsigned int &low, const bool fActiveOnly, std::vector<std::pair<uint256, unsigned int> > &hashes) {

    boost::scoped_ptr<leveldb::Iterator> pcursor(NewIterator());

    ssKeySet << make_pair(DB_TIMESTAMPINDEX, CTimestampIndexIteratorKey(low));
	pcursor->Seek(ssKeySet.str());

    while (pcursor->Valid()) {
        boost::this_thread::interruption_point();
		try {
            leveldb::Slice slKey = pcursor->key();
            CDataStream ssKey(slKey.data(), slKey.data()+slKey.size(), SER_DISK, CLIENT_VERSION);
            char chType;
            ssKey >> chType;
            if (chType == DB_BLOCK_INDEX) {
                leveldb::Slice slValue = pcursor->value();
                CDataStream ssValue(slValue.data(), slValue.data()+slValue.size(), SER_DISK, CLIENT_VERSION);
                CDiskBlockIndex diskindex;
                ssValue >> diskindex;

				if (fActiveOnly) {
					if (HashOnchainActive(key.second.blockHash)) {
						hashes.push_back(std::make_pair(key.second.blockHash, key.second.timestamp));
					}
				} else {
					hashes.push_back(std::make_pair(key.second.blockHash, key.second.timestamp));
				}

                pcursor->Next();
            } else {
                break; // if shutdown requested or finished loading block index
            }
        } catch (const std::exception& e) {
            return error("%s: Deserialize or I/O error - %s", __func__, e.what());
        }
        
    }

    return true;
}

bool CBlockTreeDB::WriteTimestampBlockIndex(const CTimestampBlockIndexKey &blockhashIndex, const CTimestampBlockIndexValue &logicalts) {
    CLevelDBBatch batch;
    batch.Write(make_pair(DB_BLOCKHASHINDEX, blockhashIndex), logicalts);
    return WriteBatch(batch);
}

bool CBlockTreeDB::ReadTimestampBlockIndex(const uint256 &hash, unsigned int &ltimestamp) {

    CTimestampBlockIndexValue(lts);
    if (!Read(std::make_pair(DB_BLOCKHASHINDEX, hash), lts))
	return false;

    ltimestamp = lts.ltimestamp;
    return true;
}
*/
bool CBlockTreeDB::WriteFlag(const std::string &name, bool fValue) {
    return Write(std::make_pair(DB_FLAG, name), fValue ? '1' : '0');
}

bool CBlockTreeDB::ReadFlag(const std::string &name, bool &fValue) {
    char ch;
    if (!Read(std::make_pair(DB_FLAG, name), ch))
        return false;
    fValue = ch == '1';
    return true;
}

bool CBlockTreeDB::LoadBlockIndexGuts()
{
    boost::scoped_ptr<leveldb::Iterator> pcursor(NewIterator());

    CDataStream ssKeySet(SER_DISK, CLIENT_VERSION);
    ssKeySet << make_pair(DB_BLOCK_INDEX, uint256());
    pcursor->Seek(ssKeySet.str());

    // Load mapBlockIndex
    while (pcursor->Valid()) {
        boost::this_thread::interruption_point();
        try {
            leveldb::Slice slKey = pcursor->key();
            CDataStream ssKey(slKey.data(), slKey.data()+slKey.size(), SER_DISK, CLIENT_VERSION);
            char chType;
            ssKey >> chType;
            if (chType == DB_BLOCK_INDEX) {
                leveldb::Slice slValue = pcursor->value();
                CDataStream ssValue(slValue.data(), slValue.data()+slValue.size(), SER_DISK, CLIENT_VERSION);
                CDiskBlockIndex diskindex;
                ssValue >> diskindex;

                // Construct block index object
                CBlockIndex* pindexNew          = InsertBlockIndex(diskindex.GetBlockHash());
                pindexNew->pprev                = InsertBlockIndex(diskindex.hashPrev);
                pindexNew->nHeight              = diskindex.nHeight;
                pindexNew->nFile                = diskindex.nFile;
                pindexNew->nDataPos             = diskindex.nDataPos;
                pindexNew->nUndoPos             = diskindex.nUndoPos;
                pindexNew->nVersion             = diskindex.nVersion;
                pindexNew->hashMerkleRoot       = diskindex.hashMerkleRoot;
                pindexNew->nTime                = diskindex.nTime;
                pindexNew->nBits                = diskindex.nBits;
                pindexNew->nNonce               = diskindex.nNonce;
                pindexNew->nStatus              = diskindex.nStatus;
                pindexNew->nTx                  = diskindex.nTx;
                //pindexNew->nStartLocation       = diskindex.nStartLocation;
                //pindexNew->nFinalCalculation    = diskindex.nFinalCalculation;

                if (!CheckProofOfWork(pindexNew->GetBlockHash(), pindexNew->nBits, Params().GetConsensus()))
                    return error("LoadBlockIndex(): CheckProofOfWork failed: %s", pindexNew->ToString());

                pcursor->Next();
            } else {
                break; // if shutdown requested or finished loading block index
            }
        } catch (const std::exception& e) {
            return error("%s: Deserialize or I/O error - %s", __func__, e.what());
        }
    }

    return true;
}
