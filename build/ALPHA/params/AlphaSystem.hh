#ifndef __PARAMS__AlphaSystem__
#define __PARAMS__AlphaSystem__

class AlphaSystem;

#include <cstddef>
#include <string>
#include <cstddef>
#include <string>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/System.hh"

struct AlphaSystemParams
    : public SystemParams
{
    AlphaSystem * create();
    std::string console;
    std::string pal;
    uint64_t system_rev;
    uint64_t system_type;
};

#endif // __PARAMS__AlphaSystem__
