#include "common.h"

// True when pvar+0x6C and +0x70 are valid (not negative) and +0x84 is not positive.

typedef struct Type2 {
    char _p0[0x6C];
    s32 f6C;
    s32 f70;
    char _p74[0x84 - 0x74];
    s32 f84;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

s32 func_L01_00490988(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    if (p->f6C >= 0 && p->f70 >= 0 && p->f84 <= 0) {
        return 1;
    }
    return 0;
}
