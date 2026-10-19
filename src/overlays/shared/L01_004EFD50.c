#include "common.h"

// True for no moby; false if pvar+0x3B is set or the moby at +0xB8 is in state 5 below 100;
// otherwise the opposite of func_L01_004EFC68.

typedef struct Type3 {
    char _p0[0x20];
    u8 f20;
    char _p21[0x6A - 0x21];
    u16 f6A;
} Type3;

typedef struct Type2 {
    char _p0[0x3B];
    u8 f3B;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
    char _pB0[0xB8 - 0xB0];
    Type3 *fB8;
} Type1;

extern s32 func_L01_004EFC68(Type1 *arg0);

s32 func_L01_004EFD50(Type1 *arg0) {
    Type3 *other;

    if (arg0 == 0) {
        return 1;
    }
    if (arg0->fAC->f3B != 0) {
        return 0;
    }
    other = arg0->fB8;
    if (other->f20 == 5 && other->f6A < 100) {
        return 0;
    }
    return func_L01_004EFC68(arg0) == 0;
}
