// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2017 The Bitcoin developers
// Copyright (c) 2017-2020 The PIVX developers
// Copyright (c) 2021 The INFINCOIN CASH developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef INFINCOINCASH_AMOUNT_H
#define INFINCOINCASH_AMOUNT_H

#include <stdint.h>

/** Amount in ICC (Can be negative) */
typedef int64_t CAmount;

static const CAmount COIN = 1000000;
static const CAmount CENT = 10000;

#endif //  INFINCOINCASH_AMOUNT_H
