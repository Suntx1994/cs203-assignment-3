#ifndef __PARAMS__TsunamiIO__
#define __PARAMS__TsunamiIO__

class TsunamiIO;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <time.h>
#include <cstddef>
#include "params/Tsunami.hh"
#include <cstddef>

#include "params/BasicPioDevice.hh"

struct TsunamiIOParams
    : public BasicPioDeviceParams
{
    TsunamiIO * create();
    Tick frequency;
    tm time;
    Tsunami * tsunami;
    bool year_is_bcd;
};

#endif // __PARAMS__TsunamiIO__
