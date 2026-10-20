#include "common.h"

// Take an entry from the pool's free list (+0xC, next index at +0x20), or return 0.

typedef struct Type2 {
    s32 f0;
    char _p4[0x20 - 0x4];
    u32 f20;
} Type2;

typedef struct Type1 {
    char _p0[0x8];
    u32 f8;
    u32 fC;
    Type2 f10[1];
} Type1;

Type2 *func_L00_00775648(Type1 *arg0) {
    Type2 *e = 0;
    u32 i = arg0->fC;

    if (i < arg0->f8) {
        e = &arg0->f10[i];
        arg0->fC = e->f20;
        e->f20 = arg0->f8;
    }
    return e;
}
