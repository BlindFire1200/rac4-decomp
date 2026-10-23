/* cflags: -fno-opt-stack */
#include "common.h"

#include "common.h"

typedef struct Type1 {
    s8 *f0;
    s32 f4;
    u32 f8;
    u16 fC;
    s16 fE;
    s8 *f10;
    u32 f14;
    u8 pad18[0x3C];
    s32 f54;
} Type1;

extern s32 D_00163E74_[];

u32 func_00122A28(Type1 *, s8 *, u8 *);

// Formats the varargs into arg0 (at most arg1 bytes); returns the length.
u32 func_0011D878(s8 *arg0, u32 arg1, s8 *arg2, ...) {
    Type1 s;
    u8 *ap;
    s32 n;

    s.fC = 0x208;
    s.f0 = arg0;
    s.f10 = arg0;
    s.f54 = D_00163E74_[0];
    s.f8 = arg1;
    s.f14 = arg1;
    /* first vararg slot: skip the five argument registers saved above it */
    ap = (u8 *)__builtin_next_arg(arg2) - 0x28;
    n = func_00122A28(&s, arg2, ap);
    if (n < arg1) {
        *s.f0 = 0;
    } else if (arg1 < n) {
        n = -1;
    }
    return n;
}
