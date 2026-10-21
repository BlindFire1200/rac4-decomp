#include "common.h"

// Increment the pvar counter +0x4 while +0x8 is set.

typedef struct Type2 {
    s32 f0;
    s32 f4;
    u8 f8;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L01_004C89E0(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    if (p->f8 != 0) {
        p->f4++;
    }
}
