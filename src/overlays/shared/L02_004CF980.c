#include "common.h"

// True when pvar+0x78 >= +0x74 and either +0x6C is not positive or +0x70 is positive.

typedef struct Type2 {
    char _p0[0x6C];
    s32 f6C;
    s32 f70;
    s32 f74;
    s32 f78;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

s32 func_L02_004CF980(Type1 *arg0) {
    Type2 *p = arg0->fAC;
    s32 r = 0;

    if (p->f78 >= p->f74) {
        if (p->f6C <= 0 || p->f70 > 0) {
            r = 1;
        }
    }
    return r;
}
