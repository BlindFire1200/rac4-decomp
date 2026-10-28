/* cflags: -fno-opt-stack */
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

typedef struct FILE_ {
    u8 *p;
    s32 r;
    s32 w;
    s16 flags;
    s16 file;
    u8 *bfbase;
    s32 bfsize;
    s32 lbfsize;
    u8 pad1c[0x14];
    u8 *ubbase;
    s32 ubsize;
    u8 pad38[0xC];
    u8 *lbbase;
    s32 lbsize;
    u8 pad4c[8];
    u8 *data;
} FILE_;

typedef struct Glue {
    struct Glue *next;
    s32 niobs;
    FILE_ *iobs;
} Glue;

typedef struct {
    s32 err;
    u8 pad4[0x34];
    s32 didinit;
    u8 pad3c[0x19C];
    Glue glue;
} Reent;

extern Glue *func_0011C568(Reent *, s32);
extern void func_0011C6C0(Reent *);

FILE_ *func_0011C5E0(Reent *d) {
    FILE_ *fp;
    s32 n;
    Glue *g;

    if (d->didinit == 0) {
        func_0011C6C0(d);
    }
    for (g = &d->glue;; g = g->next) {
        for (fp = g->iobs, n = g->niobs; --n >= 0; fp++) {
            if (fp->flags == 0) {
                goto found;
            }
        }
        if (g->next == 0 && (g->next = func_0011C568(d, 4)) == 0) {
            break;
        }
    }
    d->err = 12;
    return 0;
found:
    fp->flags = 1;
    fp->file = -1;
    fp->data = (u8 *)d;
    fp->p = 0;
    fp->w = 0;
    fp->r = 0;
    fp->bfbase = 0;
    fp->bfsize = 0;
    fp->lbfsize = 0;
    fp->ubbase = 0;
    fp->ubsize = 0;
    fp->lbbase = 0;
    fp->lbsize = 0;
    return fp;
}
