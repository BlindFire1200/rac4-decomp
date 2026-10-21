#include "common.h"

// Options 1 and 5-8 return 0; any other option returns 0x2722.

s32 func_L00_005189A0(s32 arg0, s32 arg1) {
    s32 r = 0;

    if (arg1 != 1 && arg1 != 5 && arg1 != 6 && arg1 != 8 && arg1 != 7) {
        r = 0x2722;
    }
    return r;
}
