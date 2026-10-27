/* cflags: -fno-opt-stack -mcheck-zero-division */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdio/fwrite.c
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

extern s32 func_0011D020(s32, Uio *);

u32 func_0011D480(void *buf, u32 size, u32 count, s32 fp) {
    u32 n;
    Uio uio;
    Iov iov;

    iov.base = buf;
    uio.resid = iov.len = n = count * size;
    uio.iov = &iov;
    uio.iovcnt = 1;
    if (func_0011D020(fp, &uio) == 0) {
        return count;
    }
    return (n - uio.resid) / size;
}
