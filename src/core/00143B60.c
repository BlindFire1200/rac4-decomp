/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00137620 (NTSC-U func_00137620, commit 403f30a9) */
#include "common.h"

typedef struct {
    u64 buf;
    u64 pos;
    u32 x10;
    u8 *ptr;
    s32 f18;
    u8 *f1C;
    u8 *end;
} Type1;

typedef struct {
    u32 ext;
    u32 scr;
    u32 f8;
    u32 sys;
} Type2;

extern void func_00143990(Type1 *, Type2 *);

static __inline__ void var1(Type1 *bs, s32 n) {
    bs->buf <<= n;
    bs->f18 -= n;
    while (bs->f18 <= 56) {
        bs->buf |= (u64)*bs->ptr++ << (56 - bs->f18);
        if (bs->ptr >= bs->end) bs->ptr = bs->f1C;
        bs->f18 += 8;
    }
    bs->pos += n;
}

static __inline__ u32 var2(Type1 *bs, s32 n) {
    u32 v = bs->buf >> (64 - n);
    var1(bs, n);
    return v;
}

s32 func_00143B60(Type1 *bs, Type2 *ph) {
    u32 a, b, c, n, i;

    var1(bs, 34);
    a = var2(bs, 3);
    var1(bs, 1);
    b = var2(bs, 15);
    var1(bs, 1);
    c = var2(bs, 15);
    var1(bs, 1);
    ph->ext = var2(bs, 9);
    var1(bs, 30);
    n = var2(bs, 3);
    ph->scr = (a << 30) | (b << 15) | c;
    ph->f8 = a >> 2;
    for (i = 0; i < n; i++) {
        var1(bs, 8);
    }
    if ((s32)(bs->buf >> 32) == 0x1BB) {
        ph->sys = 1;
        func_00143990(bs, ph);
    } else {
        ph->sys = 0;
    }
    return 1;
}
