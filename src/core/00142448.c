/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00135F08 (NTSC-U func_00135F08, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 pad[0x28];
    s32 x28;
} Type1;

typedef struct {
    u8 pad[0x130];
    s32 x130;
    u8 pad134[0x50];
    s32 x184;
    u8 pad188[0x48];
    Type1 *x1D0;
    u8 pad1D4[0xC];
    Type1 *x1E0;
    u8 pad1E4[0xC];
    Type1 *x1F0;
} Type2;

extern char D_00195648[];
extern char D_00195668[];
extern s32 func_00146638();
extern s32 func_0013D8D8(Type2 *);

s32 func_00142448(Type2 *d) {
    Type1 *p;
    s32 r;

    if (d->x184 == 3 && d->x130 != 0) {
        func_00146638(d, D_00195648);
        d->x130 = 0;
    }
    switch (d->x184) {
    case 3:
        p = d->x1D0;
        break;
    case 1:
        p = d->x1E0;
        break;
    case 2:
        p = d->x1F0;
        break;
    default:
        p = d->x1D0;
        func_00146638(d, D_00195668);
        break;
    }
    r = func_0013D8D8(d);
    if (r != 0) {
        p->x28 = 1;
    }
    return r;
}
