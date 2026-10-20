#include "common.h"

// Option 0xC: read +0x14 of the object at +0x0 into *arg2; any other option returns 0x2722.

typedef struct Type2 {
    char _p0[0x14];
    s32 f14;
} Type2;

typedef struct Type1 {
    Type2 * f0;
} Type1;

s32 func_L00_00518A48(Type1 *arg0, s32 arg1, s32 *arg2) {
    s32 r = 0;

    if (arg1 == 0xC) {
        *arg2 = arg0->f0->f14;
    } else {
        r = 0x2722;
    }
    return r;
}
