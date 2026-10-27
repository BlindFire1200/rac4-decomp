/* cflags: -fno-opt-stack */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdio/ungetc.c
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
    s32 lbfsize;
    s32 cookie;
    s32 (*read)(s32, u8 *, s32);
    s32 (*write)();
    long (*seek)(s32, long, s32);
    s32 (*close)();
    u8 *ubbase;
    s32 ubsize;
    u8 *up;
    s32 ur;
    u8 ubuf[3];
    u8 nbuf[1];
    u8 pad[0x8];
    s32 blksize;
    s32 offset;
    u8 *data;
} FILE_;

extern void func_0011D508(FILE_ *);
extern void func_0011C6C0(u8 *);
extern s32 D_00163E74_[];

s32 func_0011E9A8(FILE_ *fp) {
    if (fp->data == 0) {
        fp->data = (u8 *)D_00163E74_[0];
    }
    do {
        if (*(s32 *)(fp->data + 0x38) == 0) {
            func_0011C6C0(fp->data);
        }
    } while (0);
    if ((fp->flags & 8) == 0) {
        if ((fp->flags & 0x10) == 0) {
            return -1;
        }
        if (fp->flags & 4) {
            fp->flags &= ~0x24;
            fp->p = fp->bfbase;
            fp->r = 0;
        }
        fp->flags |= 8;
    }
    if (fp->bfbase == 0) {
        func_0011D508(fp);
    }
    if (fp->flags & 1) {
        fp->w = 0;
        fp->lbfsize = -fp->bfsize;
    } else {
        fp->w = (fp->flags & 2) ? 0 : fp->bfsize;
    }
    return 0;
}
