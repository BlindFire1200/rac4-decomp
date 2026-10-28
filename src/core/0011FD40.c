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

extern Bigint *func_0011F3D8(s32, s32);
extern s32 func_0011FCD8(Bigint *, Bigint *);

Bigint *func_0011FD40(s32 arg0, Bigint *a, Bigint *b) {
    Bigint *c;
    s32 i;
    s32 wa;
    s32 wb;
    s32 borrow;
    s32 y;
    u32 *xa;
    u32 *xae;
    u32 *xb;
    u32 *xbe;
    u32 *xc;
    s32 z;

    i = func_0011FCD8(a, b);
    if (!i) {
        c = func_0011F3D8(arg0, 0);
        c->wds = 1;
        c->x[0] = 0;
        return c;
    }
    if (i < 0) {
        c = a;
        a = b;
        b = c;
        i = 1;
    } else {
        i = 0;
    }
    c = func_0011F3D8(arg0, a->k);
    c->sign = i;
    wa = a->wds;
    xa = a->x;
    xae = xa + wa;
    wb = b->wds;
    xb = b->x;
    xbe = xb + wb;
    xc = c->x;
    borrow = 0;
    do {
        y = (*xa & 0xFFFF) - (*xb & 0xFFFF) + borrow;
        borrow = y >> 16;
        z = (*xa++ >> 16) - (*xb++ >> 16) + borrow;
        borrow = z >> 16;
        ((u16 *)xc)[1] = (u16)z;
        ((u16 *)xc)[0] = (u16)y;
        xc++;
    } while (xb < xbe);
    while (xa < xae) {
        y = (*xa & 0xFFFF) + borrow;
        borrow = y >> 16;
        z = (*xa++ >> 16) + borrow;
        borrow = z >> 16;
        ((u16 *)xc)[1] = (u16)z;
        ((u16 *)xc)[0] = (u16)y;
        xc++;
    }
    while (!*--xc) {
        wa--;
    }
    c->wds = wa;
    return c;
}
