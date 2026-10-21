#include "common.h"

// Call func_L10_004D43E0(moby) when pvar+0x3B0 is set and the moby is in state 1.

typedef struct Type2 {
    char _p0[0x3B0];
    s32 f3B0;
} Type2;

typedef struct Type1 {
    char _p0[0x20];
    u8 f20;
    char _p21[0xAC - 0x21];
    Type2 *fAC;
} Type1;

extern void func_L10_004D43E0(Type1 *arg0);

void func_L10_004D4498(Type1 *arg0) {
    if (arg0->fAC->f3B0 != 0 && arg0->f20 == 1) {
        func_L10_004D43E0(arg0);
    }
}
