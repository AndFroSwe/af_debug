# Debugging header file for C++
This header can be included to have debuggin prints
that are set via a preprocessor flag.

## Usage
Include header. Set `#define AF_DEBUG 1` and debug functions are then enabled.
Debugging messages can then be turned off by setting `#define AF_DEBUG 0`.

## Example program
The following example shows the use of the debugging codes.
```
#define AF_DEBUG 1

#include <iostream>
#include "af_debug.hpp"


int main(int argc, char *argv[])
{
    std::cout << "Main class" << std::endl;

    AF_DBG_COUT("Debug print to standard out.");
    AF_DBG_CERR("Debug print to error output.");

    return 0;
}
```
