// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VALIDATION_H
#define BITCOIN_VALIDATION_H

#if defined(HAVE_CONFIG_H)
#include <config/bitcoin-config.h>
#endif

#include <fs.h>
#include <main.h>
#include <chain.h>
#include <chainparams.h>
#include <streams.h>

const fs::path &GetBlocksDir(bool fNetSpecific = true);
bool CheckDiskSpace(uint64_t nAdditionalBytes = 0, bool blocks_dir = false);
/** Functions for disk access for blocks */
bool ReadBlockFromDisk(CBlock& block, const CDiskBlockPos& pos, const Consensus::Params& consensusParams);
bool ReadBlockFromDisk(CBlock& block, const CBlockIndex* pindex, const Consensus::Params& consensusParams);

#endif // BITCOIN_VALIDATION_H
