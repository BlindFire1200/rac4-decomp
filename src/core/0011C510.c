/* Matching reconstruction; public algorithm reference: newlib/libc/stdio/findfp.c
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
    void *cookie;
    s32 (*read)();
    s32 (*write)();
    s32 (*seek)();
    s32 (*close)();
    u8 pad[0x24];
    s32 data;
} FILE_;

extern s32 func_0011DA40();
extern s32 func_0011DAA8();
extern s32 func_0011DB28();
extern s32 func_0011DB90();

void func_0011C510(FILE_ *ptr, s32 flags, s32 file, s32 data) {
    ptr->p = 0;
    ptr->r = 0;
    ptr->w = 0;
    ptr->flags = flags;
    ptr->file = file;
    ptr->bfbase = 0;
    ptr->lbfsize = 0;
    ptr->cookie = ptr;
    ptr->read = func_0011DA40;
    ptr->write = func_0011DAA8;
    ptr->seek = func_0011DB28;
    ptr->close = func_0011DB90;
    ptr->data = data;
}
