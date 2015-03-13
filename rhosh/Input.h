#ifndef _RHOSH_INPUT_H
#define _RHOSH_INPUT_H

#include <stdint.h>

namespace Rhosh
{
    class Input
    {
        public:
            virtual int available()=0;
            virtual uint8_t read()=0;
    };
}

#endif
