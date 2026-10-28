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

typedef union {
    u64 d;
    struct {
        u32 lo;
        u32 hi;
    } w;
} DU;

u64 func_0011FED0(u64 arg0) {
    DU x;
    DU a;
    s32 L;

    x.d = arg0;
    L = (x.w.hi & 0x7FF00000) - 0x3400000;
    if (L > 0) {
        a.w.hi = L;
        a.w.lo = 0;
    } else {
        L = -L >> 20;
        if (L < 20) {
            a.w.hi = 0x80000 >> L;
            a.w.lo = 0;
        } else {
            a.w.hi = 0;
            L -= 20;
            a.w.lo = L >= 31 ? 1 : 1 << (31 - L);
        }
    }
    return a.d;
}
