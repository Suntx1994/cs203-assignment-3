#ifndef __PARAMS__FIFO__
#define __PARAMS__FIFO__

//cs203A, this file is added for CS203 lab assignment 3

class FIFO;


#include "params/BaseSetAssoc.hh"

struct FIFOParams
    : public BaseSetAssocParams
{
    FIFO * create();
};

#endif // __PARAMS__FIFO__
