#pragma once

#include "../application/ports/IPixelsSender.h"

class RMTAdapter : public IPixelsSender {
    public:
        RMTAdapter(int GpioNumber, int ledStripCount);
    
    private:
        int _GpioNumber;
        int _ledStripCount;
};