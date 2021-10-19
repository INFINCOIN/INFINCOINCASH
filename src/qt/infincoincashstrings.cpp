

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED* infincoincash_strings[] = {
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "(1 = keep tx meta data e.g. payment request information, 2 = drop tx meta "
                                                 "data)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Accept connections from outside (default: %u if no -proxy or -connect/-"
                                                 "noconnect)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Allow JSON-RPC connections from specified source. Valid for <ip> are a "
                                                 "single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
                                                 "a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Bind to given address and always listen on it. Use [host]:port notation for "
                                                 "IPv6"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Bind to given address and whitelist peers connecting to it. Use [host]:port "
                                                 "notation for IPv6"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Bind to given address to listen for JSON-RPC connections. Use [host]:port "
                                                 "notation for IPv6. This option can be specified multiple times (default: "
                                                 "bind to all interfaces)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Cannot find the Sapling parameters in the following directory:\n"
                                                 "%s\n"
                                                 "Please run 'sapling-fetch-params' or './util/fetch-params.sh' and then "
                                                 "restart."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Cannot obtain a lock on data directory %s. %s is probably already running."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Cannot upgrade to Sapling wallet (already running Sapling support). Version: "
                                                 "%d"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Change automatic finalized budget voting behavior. mode=auto: Vote for only "
                                                 "exact finalized budget match to my generated budget. (string, default: auto)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Connect only to the specified node(s); -noconnect or -connect=0 alone to "
                                                 "disable automatic connections"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Continuously rate-limit free transactions to <n>*1000 bytes per minute "
                                                 "(default:%u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Create new files with system default permissions, instead of umask 077 (only "
                                                 "effective with disabled wallet functionality)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Delete all wallet transactions and only recover those parts of the "
                                                 "blockchain through -rescan on startup"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Disable all INFINCOIN CASH specific functionality (Masternodes, Budgeting) (0-1, "
                                                 "default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Distributed under the MIT software license, see the accompanying file "
                                                 "COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Do not accept transactions if any ancestor would have <n> or more in-mempool "
                                                 "descendants (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Do not accept transactions if any ancestor would have more than <n> "
                                                 "kilobytes of in-mempool descendants (default: %u)."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Do not accept transactions if number of in-mempool ancestors is <n> or more "
                                                 "(default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Do not accept transactions whose size with all in-mempool ancestors exceeds "
                                                 "<n> kilobytes (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Do not keep transactions in the mempool longer than <n> hours (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Enable cold staking functionality (0-1, default: %u). Disabled if staking=0"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Enable spork administration functionality with the appropriate private key."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Error: Listening for incoming connections failed (listen returned error %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Error: Unsupported argument -socks found. Setting SOCKS version isn't "
                                                 "possible anymore, only SOCKS5 proxies are supported."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Exclude debugging information for a category. Can be used in conjunction "
                                                 "with -debug=1 to output debug logs for all categories except one or more "
                                                 "specified categories."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Execute command when a relevant alert is received or we see a really long "
                                                 "fork (%s in cmd is replaced by message)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Execute command when a wallet transaction changes (%s in cmd is replaced by "
                                                 "TxID)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Execute command when the best block changes (%s in cmd is replaced by block "
                                                 "hash)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Fees (in %s/Kb) smaller than this are considered zero fee for relaying, "
                                                 "mining and transaction creation (default: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Fees (in %s/Kb) smaller than this are considered zero fee for transaction "
                                                 "creation (default: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Flush database activity from memory pool to disk log every <n> megabytes "
                                                 "(default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "If paytxfee is not set, include enough fee so transactions begin "
                                                 "confirmation on average within n blocks (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
                                                 "fee of %s to prevent stuck transactions)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Log transaction priority and fee per kB when mining blocks (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Maintain a full transaction index, used by the getrawtransaction rpc call "
                                                 "(default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Maximum average size of an index occurrence in the block spam filter "
                                                 "(default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Maximum size of data in data carrier transactions we relay and mine "
                                                 "(default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Maximum size of the list of indexes in the block spam filter (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Maximum total fees to use in a single wallet transaction, setting too low "
                                                 "may abort large transactions (default: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Minimum positive amount (in ICC) allowed by GUI and RPC for the stake split "
                                                 "threshold (default: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Output debugging information (default: %u, supplying <category> is optional)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Please check that your computer's date and time are correct! If your clock "
                                                 "is wrong INFINCOIN CASH will not work properly."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
                                                 "unless -connect/-noconnect)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Randomize credentials for every proxy connection. This enables Tor stream "
                                                 "isolation (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Require high priority for relaying free or low-fee transactions (default:%u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Send trace/debug info to console instead of debug.log file (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
                                                 "leave that many cores free, default: %d)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Set the number of threads for coin generation if enabled (-1 = all cores, "
                                                 "default: %d)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Specify custom backup path to add a copy of any wallet backup. If set as "
                                                 "dir, every backup generates a timestamped file. If set as file, will rewrite "
                                                 "to that file every backup."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Specify location of debug log file: this can be an absolute path or a path "
                                                 "relative to the data directory (default: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Support filtering of blocks and transaction with bloom filters (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "System error while flushing the chainstate after pruning invalid entries. "
                                                 "Possible corrupt database."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "The block database contains a block which appears to be from the future. "
                                                 "This may be due to your computer's date and time being set incorrectly. Only "
                                                 "rebuild the block database if you are sure that your computer's date and "
                                                 "time are correct"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "This file contains all of your private keys in plain text. DO NOT send this "
                                                 "file to anyone!"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "This is a pre-release test build - use at your own risk - do not use for "
                                                 "staking or merchant applications!"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "This product includes software developed by the OpenSSL Project for use in "
                                                 "the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
                                                 "written by Eric Young and UPnP software written by Thomas Bernard."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Total length of network version string (%i) exceeds maximum length (%i). "
                                                 "Reduce the number or size of uacomments."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Unable to bind to %s on this computer. INFINCOIN CASH is probably already running."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Unable to replay blocks. You will need to rebuild the database using -"
                                                 "reindex."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
                                                 "%s)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "WARNING: The transaction has been signed and recorded, so the wallet will "
                                                 "try to re-send it. Use 'abandontransaction' to cancel it. (txid: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Warning: -maxtxfee is set very high! Fees this large could be paid on a "
                                                 "single transaction."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Warning: -paytxfee is set very high! This is the transaction fee you will "
                                                 "pay if you send a transaction."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Warning: Please check that your computer's date and time are correct! If "
                                                 "your clock is wrong INFINCOIN CASH will not work properly."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Warning: The network does not appear to fully agree! Some miners appear to "
                                                 "be experiencing issues."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Warning: We do not appear to fully agree with our peers! You may need to "
                                                 "upgrade, or other nodes may need to upgrade."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Warning: error reading %s! All keys read correctly, but transaction data or "
                                                 "address book entries might be missing or incorrect."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Whether to save the mempool on shutdown and load on restart (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Whitelist peers connecting from the given netmask or IP address. Can be "
                                                 "specified multiple times."),
    QT_TRANSLATE_NOOP("infincoin cash", ""
                                                 "Whitelisted peers cannot be DoS banned and their transactions are always "
                                                 "relayed, even if they are already in the mempool, useful e.g. for a gateway"),
    QT_TRANSLATE_NOOP("infincoin cash", "(default: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", "(must be %d for %s-net)"),
    QT_TRANSLATE_NOOP("infincoin cash", "<category> can be:"),
    QT_TRANSLATE_NOOP("infincoin cash", "A fatal internal error occurred, see debug.log for details"),
    QT_TRANSLATE_NOOP("infincoin cash", "Accept command line and JSON-RPC commands"),
    QT_TRANSLATE_NOOP("infincoin cash", "Accept public REST requests (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Active Masternode not initialized."),
    QT_TRANSLATE_NOOP("infincoin cash", "Add a node to connect to and attempt to keep the connection open"),
    QT_TRANSLATE_NOOP("infincoin cash", "Allow DNS lookups for -addnode, -seednode and -connect (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Allows deprecated RPC method(s) to be used"),
    QT_TRANSLATE_NOOP("infincoin cash", "Always query for peer addresses via DNS lookup (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Append comment to the user agent string"),
    QT_TRANSLATE_NOOP("infincoin cash", "Attempt to force blockchain corruption recovery"),
    QT_TRANSLATE_NOOP("infincoin cash", "Attempt to recover private keys from a corrupt wallet file"),
    QT_TRANSLATE_NOOP("infincoin cash", "Automatically create Tor hidden service (default: %d)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Block creation options:"),
    QT_TRANSLATE_NOOP("infincoin cash", "Calculating money supply..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Can't generate a change-address key. Please call keypoolrefill first."),
    QT_TRANSLATE_NOOP("infincoin cash", "Cannot resolve -%s address: '%s'"),
    QT_TRANSLATE_NOOP("infincoin cash", "Cannot set -bind or -whitebind together with -listen=0"),
    QT_TRANSLATE_NOOP("infincoin cash", "Chain selection options:"),
    QT_TRANSLATE_NOOP("infincoin cash", "Change index out of range"),
    QT_TRANSLATE_NOOP("infincoin cash", "Connect through SOCKS5 proxy"),
    QT_TRANSLATE_NOOP("infincoin cash", "Connect to a node to retrieve peer addresses, and disconnect"),
    QT_TRANSLATE_NOOP("infincoin cash", "Connection options:"),
    QT_TRANSLATE_NOOP("infincoin cash", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
    QT_TRANSLATE_NOOP("infincoin cash", "Copyright (C) 2014-%i The Dash Core Developers"),
    QT_TRANSLATE_NOOP("infincoin cash", "Copyright (C) 2015-%i The PIVX Developers"),
    QT_TRANSLATE_NOOP("infincoin cash", "Copyright (C) %i The INFINCOIN CASH Developers"),
    QT_TRANSLATE_NOOP("infincoin cash", "Corrupted block database detected"),
    QT_TRANSLATE_NOOP("infincoin cash", "Could not parse masternode.conf"),
    QT_TRANSLATE_NOOP("infincoin cash", "Debugging/Testing options:"),
    QT_TRANSLATE_NOOP("infincoin cash", "Delete blockchain folders and resync from scratch"),
    QT_TRANSLATE_NOOP("infincoin cash", "Disable OS notifications for incoming transactions (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Discover own IP address (default: 1 when listening and no -externalip)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Display the stake modifier calculations in the debug.log file."),
    QT_TRANSLATE_NOOP("infincoin cash", "Display verbose coin stake messages in the debug.log file."),
    QT_TRANSLATE_NOOP("infincoin cash", "Do not load the wallet and disable wallet RPC calls"),
    QT_TRANSLATE_NOOP("infincoin cash", "Do you want to rebuild the block database now?"),
    QT_TRANSLATE_NOOP("infincoin cash", "Done loading"),
    QT_TRANSLATE_NOOP("infincoin cash", "Enable publish hash block in <address>"),
    QT_TRANSLATE_NOOP("infincoin cash", "Enable publish hash transaction in <address>"),
    QT_TRANSLATE_NOOP("infincoin cash", "Enable publish raw block in <address>"),
    QT_TRANSLATE_NOOP("infincoin cash", "Enable publish raw transaction in <address>"),
    QT_TRANSLATE_NOOP("infincoin cash", "Enable staking functionality (0-1, default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Enable the client to act as a masternode (0-1, default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error initializing block database"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error loading %s: Wallet corrupted"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error loading %s: Wallet requires newer version of INFINCOIN CASH"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error loading %s\n"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error loading block database"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error opening block database"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error reading from database, shutting down."),
    QT_TRANSLATE_NOOP("infincoin cash", "Error upgrading chainstate database"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error: -listen must be true if -masternode is set."),
    QT_TRANSLATE_NOOP("infincoin cash", "Error: -maxmempool must be at least %d MB"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error: A fatal internal error occured, see debug.log for details"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error: A fatal internal error occurred, see debug.log for details"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error: Disk space is low!"),
    QT_TRANSLATE_NOOP("infincoin cash", "Error: Unsupported argument -tor found, use -onion."),
    QT_TRANSLATE_NOOP("infincoin cash", "Failed to accept tx in the memory pool (reason: %s)\n"),
    QT_TRANSLATE_NOOP("infincoin cash", "Failed to listen on any port. Use -listen=0 if you want this."),
    QT_TRANSLATE_NOOP("infincoin cash", "Failed to parse host:port string"),
    QT_TRANSLATE_NOOP("infincoin cash", "Fee (in %s/kB) to add to transactions you send (default: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Force safe mode (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Generate coins (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "How many blocks to check at startup (default: %u, 0 = all)"),
    QT_TRANSLATE_NOOP("infincoin cash", "If <category> is not supplied, output all debugging information."),
    QT_TRANSLATE_NOOP("infincoin cash", "Importing..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Imports blocks from external blk000??.dat file"),
    QT_TRANSLATE_NOOP("infincoin cash", "Include IP addresses in debug output (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Incorrect or no genesis block found. Wrong datadir for network?"),
    QT_TRANSLATE_NOOP("infincoin cash", "Information"),
    QT_TRANSLATE_NOOP("infincoin cash", "Initialization sanity check failed. %s is shutting down."),
    QT_TRANSLATE_NOOP("infincoin cash", "Insufficient funds."),
    QT_TRANSLATE_NOOP("infincoin cash", "Invalid -masternodeaddr address: %s"),
    QT_TRANSLATE_NOOP("infincoin cash", "Invalid -masternodeaddr port %d, isn't the same as the peer port %d"),
    QT_TRANSLATE_NOOP("infincoin cash", "Invalid -masternodeaddr port %d, only %d is supported on %s-net."),
    QT_TRANSLATE_NOOP("infincoin cash", "Invalid -onion address or hostname: '%s'"),
    QT_TRANSLATE_NOOP("infincoin cash", "Invalid amount for -%s=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("infincoin cash", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Invalid masternodeprivkey. Please see the documentation."),
    QT_TRANSLATE_NOOP("infincoin cash", "Invalid netmask specified in -whitelist: '%s'"),
    QT_TRANSLATE_NOOP("infincoin cash", "Invalid port %d detected in masternode.conf"),
    QT_TRANSLATE_NOOP("infincoin cash", "Invalid status error."),
    QT_TRANSLATE_NOOP("infincoin cash", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Keep the transaction memory pool below <n> megabytes (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Keypool ran out, please call keypoolrefill first, or unlock the wallet."),
    QT_TRANSLATE_NOOP("infincoin cash", "Limit size of signature cache to <n> MiB (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Line: %d"),
    QT_TRANSLATE_NOOP("infincoin cash", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Listen for connections on <port> (default: %u or testnet: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Loading addresses..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Loading banlist..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Loading block index..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Loading budget cache..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Loading masternode cache..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Loading masternode payment cache..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Loading sporks..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Loading wallet..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Loading/Pruning invalid outputs..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Location of the auth cookie (default: data dir)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Lock masternodes from masternode configuration file (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Lookup(): Invalid -proxy address or hostname: '%s'"),
    QT_TRANSLATE_NOOP("infincoin cash", "MNs synchronization pending..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Maintain at most <n> connections to peers (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Masternode options:"),
    QT_TRANSLATE_NOOP("infincoin cash", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Mining/Staking options:"),
    QT_TRANSLATE_NOOP("infincoin cash", "Need to specify a port with -whitebind: '%s'"),
    QT_TRANSLATE_NOOP("infincoin cash", "No error"),
    QT_TRANSLATE_NOOP("infincoin cash", "Node relay options:"),
    QT_TRANSLATE_NOOP("infincoin cash", "Not enough file descriptors available."),
    QT_TRANSLATE_NOOP("infincoin cash", "Number of automatic wallet backups (default: %d)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Number of custom location backups to retain (default: %d)"),
    QT_TRANSLATE_NOOP("infincoin cash", "On first run, create a legacy wallet instead of a HD wallet"),
    QT_TRANSLATE_NOOP("infincoin cash", "Only accept block chain matching built-in checkpoints (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Options:"),
    QT_TRANSLATE_NOOP("infincoin cash", "Password for JSON-RPC connections"),
    QT_TRANSLATE_NOOP("infincoin cash", "Peers are being disconnected due time differences."),
    QT_TRANSLATE_NOOP("infincoin cash", "Preparing for resync..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Prepend debug output with timestamp (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Print version and exit"),
    QT_TRANSLATE_NOOP("infincoin cash", "RPC server options:"),
    QT_TRANSLATE_NOOP("infincoin cash", "Randomly drop 1 of every <n> network messages"),
    QT_TRANSLATE_NOOP("infincoin cash", "Randomly fuzz 1 of every <n> network messages"),
    QT_TRANSLATE_NOOP("infincoin cash", "Reaccepting wallet transactions..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Rebuild block chain index from current blk000??.dat files"),
    QT_TRANSLATE_NOOP("infincoin cash", "Relay and mine data carrier transactions (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Relay non-P2SH multisig (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Replaying blocks..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Rescan the block chain for missing wallet transactions"),
    QT_TRANSLATE_NOOP("infincoin cash", "Rescanning..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Run a thread to flush wallet periodically (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Run in the background as a daemon and accept commands"),
    QT_TRANSLATE_NOOP("infincoin cash", "Set database cache size in megabytes (%d to %d, default: %d)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Set external address:port to get to this masternode (example: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Set key pool size to <n> (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Set maximum block size in bytes (default: %d)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Set minimum block size in bytes (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Set the Maximum reorg depth (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Set the masternode private key"),
    QT_TRANSLATE_NOOP("infincoin cash", "Set the number of threads to service RPC calls (default: %d)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Show all debugging options (usage: --help -help-debug)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Shutdown requested over the txs scan. Exiting."),
    QT_TRANSLATE_NOOP("infincoin cash", "Signing transaction failed"),
    QT_TRANSLATE_NOOP("infincoin cash", "Specify configuration file (default: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Specify data directory"),
    QT_TRANSLATE_NOOP("infincoin cash", "Specify masternode configuration file (default: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Specify pid file (default: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Specify wallet file (within data directory)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Specify your own public address"),
    QT_TRANSLATE_NOOP("infincoin cash", "Specify zk params directory (default: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Spend unconfirmed change when sending transactions (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Stop running after importing blocks from disk (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Synchronization failed"),
    QT_TRANSLATE_NOOP("infincoin cash", "Synchronization finished"),
    QT_TRANSLATE_NOOP("infincoin cash", "Synchronizing budgets..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Synchronizing masternode winners..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Synchronizing masternodes..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Synchronizing sporks..."),
    QT_TRANSLATE_NOOP("infincoin cash", "The threshold value cannot be less than %s"),
    QT_TRANSLATE_NOOP("infincoin cash", "This help message"),
    QT_TRANSLATE_NOOP("infincoin cash", "This is experimental software."),
    QT_TRANSLATE_NOOP("infincoin cash", "This is not a masternode. 'local' option disabled."),
    QT_TRANSLATE_NOOP("infincoin cash", "This is not a masternode."),
    QT_TRANSLATE_NOOP("infincoin cash", "Threshold for disconnecting misbehaving peers (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Tor control port password (default: empty)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Tor control port to use if onion listening enabled (default: %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Transaction amount too small"),
    QT_TRANSLATE_NOOP("infincoin cash", "Transaction amounts must be positive"),
    QT_TRANSLATE_NOOP("infincoin cash", "Transaction canceled."),
    QT_TRANSLATE_NOOP("infincoin cash", "Transaction too large for fee policy"),
    QT_TRANSLATE_NOOP("infincoin cash", "Transaction too large"),
    QT_TRANSLATE_NOOP("infincoin cash", "Unable to bind to %s on this computer (bind returned error %s)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Unable to generate keys"),
    QT_TRANSLATE_NOOP("infincoin cash", "Unable to sign spork message, wrong key?"),
    QT_TRANSLATE_NOOP("infincoin cash", "Unable to start HTTP server. See debug log for details."),
    QT_TRANSLATE_NOOP("infincoin cash", "Unknown network specified in -onlynet: '%s'"),
    QT_TRANSLATE_NOOP("infincoin cash", "Unsupported logging category %s=%s."),
    QT_TRANSLATE_NOOP("infincoin cash", "Upgrade wallet to latest format"),
    QT_TRANSLATE_NOOP("infincoin cash", "Upgrading coins database if needed..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Use UPnP to map the listening port (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Use block spam filter (default: %u)"),
    QT_TRANSLATE_NOOP("infincoin cash", "Use the test chain"),
    QT_TRANSLATE_NOOP("infincoin cash", "User Agent comment (%s) contains unsafe characters."),
    QT_TRANSLATE_NOOP("infincoin cash", "Username for JSON-RPC connections"),
    QT_TRANSLATE_NOOP("infincoin cash", "Verifying blocks..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Verifying wallet..."),
    QT_TRANSLATE_NOOP("infincoin cash", "Wallet debugging/testing options:"),
    QT_TRANSLATE_NOOP("infincoin cash", "Wallet needed to be rewritten: restart INFINCOIN CASH to complete"),
    QT_TRANSLATE_NOOP("infincoin cash", "Wallet options:"),
    QT_TRANSLATE_NOOP("infincoin cash", "Wallet window title"),
    QT_TRANSLATE_NOOP("infincoin cash", "Warning"),
    QT_TRANSLATE_NOOP("infincoin cash", "Warning: This version is obsolete, upgrade required!"),
    QT_TRANSLATE_NOOP("infincoin cash", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
    QT_TRANSLATE_NOOP("infincoin cash", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
    QT_TRANSLATE_NOOP("infincoin cash", "You need to rebuild the database using -reindex to change -txindex"),
    QT_TRANSLATE_NOOP("infincoin cash", "Zapping all transactions from wallet..."),
    QT_TRANSLATE_NOOP("infincoin cash", "ZeroMQ notification options:"),
    QT_TRANSLATE_NOOP("infincoin cash", "isValid(): Invalid -proxy address or hostname: '%s'"),
    QT_TRANSLATE_NOOP("infincoin cash", "on startup"),
};
