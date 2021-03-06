// Copyright (c) 2017 The PIVX developers
// Copyright (c) 2020 The Zel developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef ZELCASHNODES_SPORKDB_H
#define ZELCASHNODES_SPORKDB_H

#include <boost/filesystem/path.hpp>
#include "dbwrapper.h"
#include "zelnode/spork.h"

class CSporkDB : public CDBWrapper
{
public:
    CSporkDB(size_t nCacheSize, bool fMemory = false, bool fWipe = false);

private:
    CSporkDB(const CSporkDB&);
    void operator=(const CSporkDB&);

public:
    bool WriteSpork(const int nSporkId, const CSporkMessage& spork);
    bool ReadSpork(const int nSporkId, CSporkMessage& spork);
    bool SporkExists(const int nSporkId);
};




#endif //ZELCASHNODES_SPORKDB_H

