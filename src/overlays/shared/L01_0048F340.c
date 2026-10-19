#include "common.h"

// True when pvar+0x100 is clear and the moby has +0x69 == 5 or is in state 6.

typedef struct Type2 {
    char _p0[0x100];
    u8 f100;
} Type2;

typedef struct Type1 {
    char _p0[0x20];
    u8 f20;
    char _p21[0x69 - 0x21];
    u8 f69;
    char _p6A[0xAC - 0x6A];
    Type2 *fAC;
} Type1;

s32 func_L01_0048F340(Type1 *arg0) {
    s32 r = 0;

    if (arg0->fAC->f100 == 0) {
        if (arg0->f69 == 5 || arg0->f20 == 6) {
            r = 1;
        }
    }
    return r;
}
