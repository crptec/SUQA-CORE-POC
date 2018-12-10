// Copyright (c) 2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <zmq/zmqrpc.h>
#include <zmq/zmqabstractnotifier.h>
#include <zmq/zmqnotificationinterface.h>
#include <univalue/univalue.h>

#include <rpcserver.h>

#include <json/json_spirit_utils.h>
#include <json/json_spirit_value.h>

using namespace json_spirit;
using namespace std;

Value getzmqnotifications(const Array& params, bool fHelp)
{
	Array result;
    if (fHelp || params.size() != 0) {
        throw runtime_error(
            "getzmqnotifications\n"
            "\nReturns information about the active ZeroMQ notifications.\n"
            "\nResult:\n"
            "[\n"
            "  {                        (json object)\n"
            "    \"type\": \"pubhashtx\",   (string) Type of notification\n"
            "    \"address\": \"...\",      (string) Address of the publisher\n"
            "    \"hwm\": n                 (numeric) Outbound message high water mark\n"
            "  },\n"
            "  ...\n"
            "]\n"
            "\nExamples:\n"
            + HelpExampleCli("getzmqnotifications", "")
            + HelpExampleRpc("getzmqnotifications", "")
        );
    }

    if (g_zmq_notification_interface != nullptr) {
		printf("g_zmq_notification_interface is NOT NULL");
        for (const auto* n : g_zmq_notification_interface->GetActiveNotifiers()) {
			Object obj;
            obj.push_back(Pair("type", n->GetType()));
            obj.push_back(Pair("address", n->GetAddress()));
            obj.push_back(Pair("hwm", n->GetOutboundMessageHighWaterMark()));
            result.push_back(obj);
        }
    }else{
		printf("g_zmq_notification_interface is NULL");
	}

    return result;
}
