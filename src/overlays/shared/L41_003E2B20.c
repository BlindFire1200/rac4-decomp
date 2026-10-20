#include "common.h"

// Return the byte at pvar+0x0, or 10 when the moby has no pvar.

typedef struct Type2 {
    u8 f0;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

s32 func_L41_003E2B20(Type1 *arg0) {
    Type2 *p = arg0->fAC;
    s32 r = 10;

    if (p != 0) {
        r = p->f0;
    }
    return r;
}
