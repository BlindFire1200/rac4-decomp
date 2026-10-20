#include "common.h"

// Option 1 reads +0x14 and option 0xB reads +0x0->+0x8 of the object at +0x1C into *arg2; others return 0x2722.

typedef struct Type3 {
    char _p0[0x8];
    s32 f8;
} Type3;

typedef struct Type2 {
    Type3 * f0;
    char _p4[0x14 - 0x4];
    s32 f14;
} Type2;

typedef struct Type1 {
    char _p0[0x1C];
    Type2 * f1C;
} Type1;

s32 func_L00_005187F8(Type1 *arg0, s32 arg1, s32 *arg2) {
    s32 r = 0;

    if (arg1 == 1) {
        *arg2 = arg0->f1C->f14;
    } else if (arg1 == 0xB) {
        *arg2 = arg0->f1C->f0->f8;
    } else {
        r = 0x2722;
    }
    return r;
}
