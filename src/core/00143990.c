/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00137450 (NTSC-U func_00137450, commit 403f30a9) */
#include "common.h"

/* libmpeg: skip a PS system header (then its stream entries); 2.9-ee-991111 */
typedef struct {
    u64 buf;
    u64 pos;
    u32 x10;
    u8 *ptr;
    s32 f18;
    u8 *f1C;
    u8 *end;
} Type1;

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
    return bs->buf >> (64 - n);
}

s32 func_00143990(Type1 *bs) {
    var1(bs, 56);
    var1(bs, 40);
    while (var2(bs, 1) == 1) {
        var1(bs, 24);
    }
    return 1;
}
