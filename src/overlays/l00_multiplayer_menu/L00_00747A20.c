#include "common.h"

// Counts how many of the 4 s32 values stored at offset 0x264 of arg0 are not -1.
s32 func_L00_00747A20(s32 arg0) {
    s32 *p = (s32 *)(arg0 + 0x264);
    s32 count = 0;
    s32 i = 3;
    do {
        s32 v = *p;
        s32 inc = count + 1;
        p++;
        i--;
        count = (~v != 0) ? inc : count;
    } while (i >= 0);
    return count;
}
