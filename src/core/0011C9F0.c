/* cflags: -fno-opt-stack -mcheck-zero-division */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdio/fread.c
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
    u8 *p;
    s32 r;
} FILE_;

extern void func_0011C9C0(u8 *, u8 *, s32);
extern s32 func_0011D710(FILE_ *);

u32 func_0011C9F0(u8 *buf, u32 size, u32 count, FILE_ *fp) {
    u32 resid;
    u8 *p;
    s32 r;
    u32 total;

    if ((resid = count * size) == 0) {
        return 0;
    }
    if (fp->r < 0) {
        fp->r = 0;
    }
    total = resid;
    p = buf;
    while (resid > (r = fp->r)) {
        func_0011C9C0(p, fp->p, r);
        fp->p += r;
        p += r;
        resid -= r;
        if (func_0011D710(fp)) {
            return (total - resid) / size;
        }
    }
    func_0011C9C0(p, fp->p, resid);
    fp->r -= resid;
    fp->p += resid;
    return count;
}
