/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00132AD8 (NTSC-U func_00132AD8, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad[0x1C];
    s32 x1C;
    u8 pad20[0x120];
} Type1;

typedef struct {
    u8 pad[0x160];
    s32 x160;
    u8 pad164[0x20];
    s32 x184;
    u8 pad188[0x38];
    s32 x1C0;
    u8 pad1C4[0x4FC];
    Type1 f6C0[1];
} Type2;

typedef struct {
    s32 x0;
    s32 x4;
    u8 pad8[8];
    s32 x10;
    s32 x14;
} Type3;

extern char D_00195288[];
extern s32 func_00146638();

s32 func_0013F018(Type2 *d, Type3 *r, s32 *a, s32 *b, s32 *arg0) {
    s32 ret;
    s32 t;

    ret = 1;
    d->f6C0[*(s32 *)((u8 *)d + 0x820)].x1C = 1;
    d->x1C0 = 1;
    if (d->x160 == 2) {
        r->x14 = 0;
        r->x10 = 0;
        r->x4 = 0;
        r->x0 = 0;
    }
    if (d->x184 == 3) {
        *a = 2;
    } else {
        *a = 1;
        t = d->x184 == 2;
        b[1] = t;
        b[0] = t;
    }
    if (d->x160 == 1) {
        func_00146638(d, D_00195288);
        ret = 0;
    }
    *arg0 &= ~1;
    return ret;
}
