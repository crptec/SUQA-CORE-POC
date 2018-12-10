// Copyright (c) 2015-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <zmq/zmqnotificationinterface.h>
#include <zmq/zmqpublishnotifier.h>

#include <version.h>
#include <stdio.h>
#include <zmq.h> // for zmq_version and zmq_ctx_new
#include <util.h> // for LogPrintf define


void zmqError(const char *str)
{
	LogPrintf("ZMQ Error: %s", str);
}

CZMQNotificationInterface::CZMQNotificationInterface() : pcontext(NULL)
{
}

CZMQNotificationInterface::~CZMQNotificationInterface()
{
    Shutdown();

    for (std::list<CZMQAbstractNotifier*>::iterator i=notifiers.begin(); i!=notifiers.end(); ++i)
    {
        delete *i;
    }
}

std::list<const CZMQAbstractNotifier*> CZMQNotificationInterface::GetActiveNotifiers() const
{
    std::list<const CZMQAbstractNotifier*> result;
    for (const auto* n : notifiers) {
        result.push_back(n);
    }
    return result;
}

CZMQNotificationInterface* CZMQNotificationInterface::Create()
{
    CZMQNotificationInterface* notificationInterface = NULL;
    std::map<std::string, CZMQNotifierFactory> factories;
    std::list<CZMQAbstractNotifier*> notifiers;

    factories["pubhashblock"] = CZMQAbstractNotifier::Create<CZMQPublishHashBlockNotifier>;
    factories["pubhashtx"] = CZMQAbstractNotifier::Create<CZMQPublishHashTransactionNotifier>;
    factories["pubrawblock"] = CZMQAbstractNotifier::Create<CZMQPublishRawBlockNotifier>;
    factories["pubrawtx"] = CZMQAbstractNotifier::Create<CZMQPublishRawTransactionNotifier>;
	LogPrintf("zmq: Create interface inprogess...");
    for (const auto& entry : factories)
    {
        std::string arg("-zmq" + entry.first);
        if (mapArgs.count(arg))
        {
            CZMQNotifierFactory factory = entry.second;
            std::string address = mapArgs[arg];
            CZMQAbstractNotifier *notifier = factory();
            notifier->SetType(entry.first);
            notifier->SetAddress(address);
            notifier->SetOutboundMessageHighWaterMark(static_cast<int>(GetArg(arg + "hwm", CZMQAbstractNotifier::DEFAULT_ZMQ_SNDHWM)));
            notifiers.push_back(notifier);
        }
    }
	
    if (!notifiers.empty())
    {
        notificationInterface = new CZMQNotificationInterface();
        notificationInterface->notifiers = notifiers;

        if (!notificationInterface->Initialize())
        {
            delete notificationInterface;
            notificationInterface = NULL;
        }
    }

    return notificationInterface;
}

// Called at startup to conditionally set up ZMQ socket(s)
bool CZMQNotificationInterface::Initialize()
{
    int major = 0, minor = 0, patch = 0;
    zmq_version(&major, &minor, &patch);
    LogPrintf("zmq: version %d.%d.%d\n", major, minor, patch);

    LogPrintf("zmq: Initialize notification interface\n");
    assert(!pcontext);

    pcontext = zmq_ctx_new();

    if (!pcontext)
    {
        zmqError("Unable to initialize context");
        return false;
    }

    std::list<CZMQAbstractNotifier*>::iterator i=notifiers.begin();
    for (; i!=notifiers.end(); ++i)
    {
        CZMQAbstractNotifier *notifier = *i;
        if (notifier->Initialize(pcontext))
        {
            LogPrintf("zmq: Notifier %s ready (address = %s)\n", notifier->GetType(), notifier->GetAddress());
        }
        else
        {
            LogPrintf("zmq: Notifier %s failed (address = %s)\n", notifier->GetType(), notifier->GetAddress());
            break;
        }
    }

    if (i!=notifiers.end())
    {
        return false;
    }

    return true;
}

// Called during shutdown sequence
void CZMQNotificationInterface::Shutdown()
{
    LogPrintf("zmq: Shutdown notification interface\n");
    if (pcontext)
    {
        for (std::list<CZMQAbstractNotifier*>::iterator i=notifiers.begin(); i!=notifiers.end(); ++i)
        {
            CZMQAbstractNotifier *notifier = *i;
            LogPrintf("zmq: Shutdown notifier %s at %s\n", notifier->GetType(), notifier->GetAddress());
            notifier->Shutdown();
        }
        zmq_ctx_term(pcontext);

        pcontext = NULL;
    }
}

void CZMQNotificationInterface::UpdatedBlockTip(const CBlockIndex *pindexNew, const CBlockIndex *pindexFork, bool fInitialDownload)
{
    if (fInitialDownload || pindexNew == pindexFork) // In IBD or blocks were disconnected without any new ones
        return;

    for (std::list<CZMQAbstractNotifier*>::iterator i = notifiers.begin(); i!=notifiers.end(); )
    {
        CZMQAbstractNotifier *notifier = *i;
        if (notifier->NotifyBlock(pindexNew))
        {
            i++;
        }
        else
        {
            notifier->Shutdown();
            i = notifiers.erase(i);
        }
    }
}
//Parameter: CTransaction& is reference and the original data is not copied.
void CZMQNotificationInterface::TransactionAddedToMempool(const CTransaction& ptx)
{
    // Used by BlockConnected and BlockDisconnected as well, because they're
    // all the same external callback.
    const CTransaction& tx = ptx;

    for (std::list<CZMQAbstractNotifier*>::iterator i = notifiers.begin(); i!=notifiers.end(); )
    {
        CZMQAbstractNotifier *notifier = *i;
        if (notifier->NotifyTransaction(tx))
        {
            i++;
        }
        else
        {
            notifier->Shutdown();
            i = notifiers.erase(i);
        }
    }
}

void CZMQNotificationInterface::BlockConnected(const CBlock& pblock, const CBlockIndex* pindexConnected, const std::vector<CTransaction>& vtxConflicted)
{
    for (const CTransaction& ptx : (&pblock)->vtx) {
        // Do a normal notify for each transaction added in the block
        TransactionAddedToMempool(ptx);
    }
}

void CZMQNotificationInterface::BlockDisconnected(const CBlock& pblock)
{
    for (const CTransaction& ptx : (&pblock)->vtx) {
        // Do a normal notify for each transaction removed in block disconnection
        TransactionAddedToMempool(ptx);
    }
}

CZMQNotificationInterface* g_zmq_notification_interface = NULL;
