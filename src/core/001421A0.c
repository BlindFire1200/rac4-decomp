/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00135C60 (NTSC-U func_00135C60, commit 403f30a9) */
#include "common.h"

typedef struct {
    s32 x0;
    s32 x4;
    s32 x8;
    u8 pC[0x98 - 0xC];
    s32 x98;
    u8 p9C[0xC0 - 0x9C];
    s32 xC0;
    u8 pC4[0x128 - 0xC4];
    s32 x128;
    u8 p12C[0x858 - 0x12C];
    s32 x858;
    u8 p85C[0x878 - 0x85C];
    s32 x878;
} Type1;

typedef struct {
    u8 p0[8];
    s32 x8;
    u8 pC[0x40 - 0xC];
    Type1 *x40;
} Type2;

extern void func_00141820(Type1 *);

s32 func_001421A0(Type2 *a) {
    Type1 *p = a->x40;
    u32 v;

    p->x878 = 0;
    p->x0 = 0;
    p->x4 = 0;
    p->x8 = 0;
    a->x8 = 0;
    p->xC0 = 0;
    p->x98 = -1;
    func_00141820(p);
    p->x128 = 0;
    p->x858 = 0;
    v = *(u32 *)0x10002010;
    *(u32 *)0x10002010 = (v & 0xFF7FFFFF) | 0x800000;
    return 1;
}
