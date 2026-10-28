#include "common.h"

// Clears two words at +0x1864 and +0x1868, then zeroes two words per 0x10-byte step over four steps.
void func_00514A58(u8 *arg0) {
    s32 i;
    u8 *p;

    *(s32 *)(arg0 + 0x1864) = 0;
    i = 3;
    *(s32 *)(arg0 + 0x1868) = 0;
    p = arg0;
    do {
        *(s32 *)(p + 0x1884) = 0;
        i -= 1;
        *(s32 *)(p + 0x1888) = 0;
        p += 0x10;
    } while (i >= 0);
}
