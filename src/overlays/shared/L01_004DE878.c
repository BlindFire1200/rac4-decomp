#include "common.h"

// True when pvar+0x70 is not negative and pvar+0x7C is not positive and +0x80 is positive.

typedef struct Type2 {
    char _p0[0x70];
    s32 f70;
    char _p74[0x7C - 0x74];
    s32 f7C;
    s32 f80;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

s32 func_L01_004DE878(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    if (p->f70 >= 0 && p->f7C <= 0 && p->f80 > 0) {
        return 1;
    }
    return 0;
}
