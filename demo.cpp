#include <unistd.h>
#include "Std.h"
#include "terminal.h"

int main()
{
    Rhosh::Std io;
    terminal_init(&io);

    while (true) {
        terminal_tick();
        usleep(100);
    }
}
