#include "common.h"

// True when pvar+0x14E equals 1.

typedef struct Type2 {
    char _p0[0x14E];
    s16 f14E;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

s32 func_L05_004E0018(Type1 *arg0) {
    return arg0->fAC->f14E == 1;
}
