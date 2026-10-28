/* cflags: -fno-opt-stack */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdio/vsprintf.c
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
    s32 w;
    s16 flags;
    s16 file;
    u8 *bfbase;
    s32 bfsize;
    u8 pad[0x3C];
    s32 data;
} FILE_;

extern s32 func_00122A28(FILE_ *, s32, s32);
extern s32 D_00163E74_[];

s32 func_0011E948(u8 *str, s32 fmt, s32 ap) {
    s32 ret;
    FILE_ f;

    f.flags = 0x208;
    f.bfbase = f.p = str;
    f.bfsize = f.w = 0x7FFFFFFF;
    f.data = D_00163E74_[0];
    ret = func_00122A28(&f, fmt, ap);
    *f.p = 0;
    return ret;
}
