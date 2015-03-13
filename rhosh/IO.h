#ifndef _RHOSH_IO_H
#define _RHOSH_IO_H

#include "Input.h"
#include "Output.h"

namespace Rhosh
{
    class IO : public Input, public Output
    {
        public:
            virtual bool echoMode();
    };
}

#endif
