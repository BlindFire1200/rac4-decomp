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

extern u64 func_0011FF98(Bigint *, s32 *);
extern u64 func_00131138(u64, u64);

u64 func_001202B0(Bigint *a, Bigint *b) {
    DU da;
    DU db;
    s32 k;
    s32 ka;
    s32 kb;

    da.d = func_0011FF98(a, &ka);
    db.d = func_0011FF98(b, &kb);
    k = ka - kb + 32 * (a->wds - b->wds);
    if (k > 0) {
        da.w.hi += k * 0x100000;
    } else {
        k = -k;
        db.w.hi += k * 0x100000;
    }
    return func_00131138(da.d, db.d);
}
