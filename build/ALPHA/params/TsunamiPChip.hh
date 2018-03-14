#ifndef __PARAMS__TsunamiPChip__
#define __PARAMS__TsunamiPChip__

class TsunamiPChip;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/Tsunami.hh"

#include "params/GenericPciHost.hh"

struct TsunamiPChipParams
    : public GenericPciHostParams
{
    TsunamiPChip * create();
    Addr pio_addr;
    Tick pio_latency;
    Tsunami * tsunami;
};

#endif // __PARAMS__TsunamiPChip__
