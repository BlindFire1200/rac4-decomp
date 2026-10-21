#include "common.h"

// True when pvar+0x140 is clear and pvar+0x144 is unset or equal to arg1.

typedef struct Type2 {
    char _p0[0x140];
    s32 f140;
    s32 f144;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

s32 func_L05_004DF4D0(Type1 *arg0, s32 arg1) {
    Type2 *p = arg0->fAC;
    s32 r = 0;

    if (p->f140 == 0 && (p->f144 == 0 || p->f144 == arg1)) {
        r = 1;
    }
    return r;
}
