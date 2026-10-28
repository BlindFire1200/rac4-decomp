/* cflags: -fno-opt-stack */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdio/puts.c
 * newlib 8a0efa53e44919bcf5ccb1d3353618a82afdf8bc.
 * Original notice retained below; this is not an unchanged vendor file. */
/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "common.h"

typedef struct {
    void *base;
    u32 len;
} Iov;

typedef struct {
    Iov *iov;
    s32 iovcnt;
    u32 resid;
} Uio;

extern s32 func_0011AB04(u8 *);
extern s32 func_0011D020(s32, Uio *);
extern u8 D_00192120[];

s32 func_0011D640(u8 *ptr, u8 *s) {
    u32 c = func_0011AB04(s);
    Uio uio;
    Iov iov[2];

    iov[0].base = s;
    iov[0].len = c;
    iov[1].base = D_00192120;
    iov[1].len = 1;
    uio.resid = c + 1;
    uio.iov = &iov[0];
    uio.iovcnt = 2;
    return func_0011D020(*(s32 *)(ptr + 8), &uio) ? -1 : 10;
}
