#include "common.h"

// True when pvar+0x2D0 points at an object whose +0x2B8 is set.

typedef struct Type3 {
    char _p0[0x2B8];
    s32 f2B8;
} Type3;

typedef struct Type2 {
    char _p0[0x2D0];
    Type3 *f2D0;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

s32 func_L04_0049E910(Type1 *arg0) {
    return arg0->fAC->f2D0->f2B8 != 0;
}
