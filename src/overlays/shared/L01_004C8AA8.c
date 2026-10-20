#include "common.h"

// True when the pvar counter +0x4 has reached its limit +0x0.

typedef struct Type2 {
    s32 f0;
    s32 f4;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

s32 func_L01_004C8AA8(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    return p->f0 <= p->f4;
}
