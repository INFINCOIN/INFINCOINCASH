// Copyright (c) 2020 The PIVX developers
// Copyright (c) 2021 The INFINCOIN CASH developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef INFINCOINCASH_SAPLING_TEST_FIXTURE_H
#define INFINCOINCASH_SAPLING_TEST_FIXTURE_H

#include "test/test_infincoincash.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //INFINCOINCASH_SAPLING_TEST_FIXTURE_H
