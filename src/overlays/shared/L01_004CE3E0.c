#include "common.h"

// Calls the handler at pvar+0x10 with pvar+0xC and returns its value, or 0 if there is none.

typedef struct Type3 {
    f32 (*f0)(s32);
} Type3;

typedef struct Type2 {
    char _p0[0xC];
    s32 fC;
    Type3 *f10;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

f32 func_L01_004CE3E0(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    if (p->f10 != 0) {
        return p->f10->f0(p->fC);
    }
    return 0.0f;
}
