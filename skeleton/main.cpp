#include <math.h>
#include <unistd.h>
#include "rhosh/terminal.h"
#include "rhosh/std.h"

TERMINAL_PARAMETER_FLOAT(t, "The time", 0);
TERMINAL_PARAMETER_FLOAT(s, "The sinus", 0);

int main()
{
    terminal_std_init();

    while (true) {
        terminal_tick();
        usleep(100);
        t += 0.01;
        if (t > 1) t -= 1;
        s = sin(t);
    }
}
