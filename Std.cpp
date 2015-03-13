#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include "Std.h"

using namespace std;

bool inputAvailable()  
{
  struct timeval tv;
  fd_set fds;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  FD_ZERO(&fds);
  FD_SET(STDIN_FILENO, &fds);
  select(STDIN_FILENO+1, &fds, NULL, NULL, &tv);

  return (FD_ISSET(0, &fds));
}

namespace Rhosh
{
    int Std::available()
    {
        return inputAvailable();
    }

    uint8_t Std::read()
    {
        char c;
        ::read(STDIN_FILENO, &c, 1);
        return c;
    }

    void Std::write(uint8_t ch)
    {
        cout << ch;
        fflush(stdout);
    }
}
