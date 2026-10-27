/* cflags: -fno-opt-stack */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdio/stdio.c
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
    u8 pad0[0xC];
    s16 flags;
    s16 file;
    u8 pad10[0x40];
    s32 offset;
    u8 *data;
} FILE_;

extern long func_0011C040(u8 *, s32, s32, s32);

long func_0011DB28(FILE_ *fp, s32 offset, s32 whence) {
    long ret;

    ret = func_0011C040(fp->data, fp->file, offset, whence);
    if (ret == -1) {
        fp->flags &= ~0x1000;
    } else {
        fp->flags |= 0x1000;
        fp->offset = ret;
    }
    return ret;
}
