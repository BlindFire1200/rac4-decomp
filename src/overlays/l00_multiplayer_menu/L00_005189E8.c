#include "common.h"

// Option 1: clear *arg2 and return 0; any other option returns 0x2722.

s32 func_L00_005189E8(s32 arg0, s32 arg1, s32 *arg2) {
    s32 r = 0;

    if (arg1 == 1) {
        *arg2 = 0;
    } else {
        r = 0x2722;
    }
    return r;
}
