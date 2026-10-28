/* cflags: -fno-opt-stack */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdio/makebuf.c
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
    s32 (*read)();
    s32 (*write)();
    s32 (*seek)();
    s32 (*close)();
    u8 pad30[0x1C];
    s32 blksize;
    u8 pad50[3];
    u8 nbuf[1];
    u8 pad54[0];
} FILE_;

typedef struct {
    u8 padx[0x54];
    u8 *data;
} FILE2_;

extern s32 func_0011BFE0(u8 *, s32, s32 *);
extern s32 func_0011DB28();

void func_0011D508(FILE_ *fp) {
    s32 st[28];

    if (fp->flags & 2) {
        fp->bfbase = fp->p = (u8 *)fp + 0x43;
        fp->bfsize = 1;
        return;
    }
    if (fp->file >= 0 && func_0011BFE0(((FILE2_ *)fp)->data, fp->file, st) >= 0) {
        if ((st[1] & 0xF000) == 0x8000 && fp->seek == func_0011DB28) {
            fp->blksize = 0x400;
            fp->flags |= 0x400;
        } else {
            fp->flags |= 0x800;
        }
    } else {
        fp->flags |= 0x800;
    }
    fp->flags |= 2;
    fp->bfbase = fp->p = (u8 *)fp + 0x43;
    fp->bfsize = 1;
}
