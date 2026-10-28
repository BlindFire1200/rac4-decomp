/* cflags: -fno-opt-stack */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdlib/mprec.c
 * newlib 8a0efa53e44919bcf5ccb1d3353618a82afdf8bc.
 * Original notice retained below; this is not an unchanged vendor file. */
/****************************************************************
 *
 * The author of this software is David M. Gay.
 *
 * Copyright (c) 1991 by AT&T.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software and in all copies of the supporting
 * documentation for such software.
 *
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY.  IN PARTICULAR, NEITHER THE AUTHOR NOR AT&T MAKES ANY
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 ***************************************************************/

#include "common.h"

typedef struct Bigint {
    struct Bigint *next;
    s32 k;
    s32 maxwds;
    s32 sign;
    s32 wds;
    u32 x[1];
} Bigint;

typedef union {
    u64 d;
    struct {
        u32 lo;
        u32 hi;
    } w;
} DU;

extern Bigint *func_0011F3D8(s32, s32);
extern s32 func_0011F6F8(u32);
extern s32 func_0011F780(u32 *);

Bigint *func_00120130(s32 arg0, u64 _d, s32 *e, s32 *bits) {
    DU d;
    Bigint *b;
    s32 de;
    s32 i;
    s32 k;
    u32 *x;
    u32 y;
    u32 z;

    d.d = _d;
    b = func_0011F3D8(arg0, 1);
    x = b->x;
    z = d.w.hi & 0xFFFFF;
    d.w.hi &= 0x7FFFFFFF;
    if ((de = (s32)(d.w.hi >> 20)) != 0) {
        z |= 0x100000;
    }
    if ((y = d.w.lo) != 0) {
        if ((k = func_0011F780(&y)) != 0) {
            x[0] = y | z << (32 - k);
            z >>= k;
        } else {
            x[0] = y;
        }
        i = b->wds = (x[1] = z) ? 2 : 1;
    } else {
        k = func_0011F780(&z);
        x[0] = z;
        i = b->wds = 1;
        k += 32;
    }
    if (de) {
        *e = de - 1023 - 52 + k;
        *bits = 53 - k;
    } else {
        *e = de - 1023 - 52 + 1 + k;
        *bits = 32 * i - func_0011F6F8(x[i - 1]);
    }
    return b;
}
