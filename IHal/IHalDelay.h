#ifndef I_HAL_DELAY_H
#define I_HAL_DELAY_H

#include "stdint.h"

// proba 2

class IHalDelay
{
  public:
    virtual void DelayMs(uint32_t ms) = 0;
    virtual ~IHalDelay(){};
};

#endif