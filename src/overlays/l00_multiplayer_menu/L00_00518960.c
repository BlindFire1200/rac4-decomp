#include "common.h"

// Options 1 and 5-8 clear *arg2 and return 0; others return 0x2722.

s32 func_L00_00518960(s32 arg0, s32 arg1, s32 *arg2) {
    s32 r = 0;

    if (arg1 == 1 || arg1 == 5 || arg1 == 6 || arg1 == 8 || arg1 == 7) {
        *arg2 = 0;
    } else {
        r = 0x2722;
    }
    return r;
}
