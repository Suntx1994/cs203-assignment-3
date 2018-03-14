#ifndef __PARAMS__AlphaBackdoor__
#define __PARAMS__AlphaBackdoor__

class AlphaBackdoor;

#include <cstddef>
#include "params/BaseCPU.hh"
#include <cstddef>
#include "params/SimpleDisk.hh"
#include <cstddef>
#include "params/Platform.hh"
#include <cstddef>
#include "params/AlphaSystem.hh"
#include <cstddef>
#include "params/Terminal.hh"

#include "params/BasicPioDevice.hh"

struct AlphaBackdoorParams
    : public BasicPioDeviceParams
{
    AlphaBackdoor * create();
    BaseCPU * cpu;
    SimpleDisk * disk;
    Platform * platform;
    AlphaSystem * system;
    Terminal * terminal;
};

#endif // __PARAMS__AlphaBackdoor__
