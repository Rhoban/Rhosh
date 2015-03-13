#ifndef _RHOSH_INPUT_STDIN_H
#define _RHOSH_INPUT_STDIN_H

#include <string>
#include "IO.h"

namespace Rhosh
{
    class Std : public IO
    {
        public:
            int available();
            uint8_t read();
            void write(uint8_t ch);
    };
}

#endif
