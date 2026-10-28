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

extern s32 func_0011F6F8(u32);

u64 func_0011FF98(Bigint *a, s32 *e) {
    u32 *xa;
    u32 *xa0;
    u32 w;
    u32 y;
    u32 z;
    s32 k;
    DU d;

    xa0 = a->x;
    xa = xa0 + a->wds;
    y = *--xa;
    k = func_0011F6F8(y);
    *e = 32 - k;
    if (k < 11) {
        d.w.hi = 0x3FF00000 | y >> (11 - k);
        w = xa > xa0 ? *--xa : 0;
        d.w.lo = y << (32 - 11 + k) | w >> (11 - k);
        goto ret_d;
    }
    z = xa > xa0 ? *--xa : 0;
    if ((k -= 11) != 0) {
        d.w.hi = 0x3FF00000 | y << k | z >> (32 - k);
        y = xa > xa0 ? *--xa : 0;
        d.w.lo = z << k | y >> (32 - k);
    } else {
        d.w.hi = 0x3FF00000 | y;
        d.w.lo = z;
    }
ret_d:
    return d.d;
}
