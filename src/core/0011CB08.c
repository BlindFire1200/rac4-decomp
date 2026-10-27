/* cflags: -fno-opt-stack */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdio/fseek.c
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

extern s32 func_0011BFE0(u8 *, s32, void *);
extern s32 func_0011C2D8(void *);
extern void func_0011C6C0(u8 *);
extern void func_0011D508(FILE_ *);
extern s32 func_0011D710(FILE_ *);
extern s32 func_0011DB28();
extern s32 D_00163E74_[];

typedef struct {
    s32 dev;
    s32 mode;
    s32 pad[2];
    long size;
    s32 rest[20];
} Stat;

s32 func_0011CB08(FILE_ *fp, long offset, s32 whence) {
    long (*seekfn)(s32, long, s32);
    long target;
    long curoff;
    u32 n;
    Stat st;
    s32 havepos;
    u8 *ptr;

    if (fp->data == 0) {
        fp->data = (u8 *)D_00163E74_[0];
    }
    if (*(s32 *)(fp->data + 0x38) == 0) {
        func_0011C6C0(fp->data);
    }
    ptr = fp->data;
    if ((*(s32 *)&fp->flags & 0x108) == 0x108) {
        func_0011C2D8(fp);
    }
    if ((seekfn = fp->seek) == 0) {
        *(s32 *)ptr = 29;
        return -1;
    }
    switch (whence) {
    case 1:
        func_0011C2D8(fp);
        if (fp->flags & 0x1000) {
            curoff = fp->offset;
        } else {
            curoff = seekfn(fp->cookie, 0, 1);
            if (curoff == -1) {
                return -1;
            }
        }
        if (fp->flags & 4) {
            curoff -= fp->r;
            if (fp->ubbase) {
                curoff -= fp->ur;
            }
        } else if ((fp->flags & 8) && fp->p != 0) {
            curoff += fp->p - fp->bfbase;
        }
        offset += curoff;
        whence = 0;
        havepos = 1;
        break;
    case 0:
    case 2:
        havepos = 0;
        break;
    default:
        *(s32 *)ptr = 22;
        return -1;
    }
    if (fp->bfbase == 0) {
        func_0011D508(fp);
    }
    if (fp->flags & 0x81A) {
        goto dumb;
    }
    if ((fp->flags & 0x400) == 0) {
        if (seekfn != (long (*)(s32, long, s32))func_0011DB28 || fp->file < 0 || func_0011BFE0(ptr, fp->file, &st) || (st.mode & 0xF000) != 0x8000) {
            fp->flags |= 0x800;
            goto dumb;
        }
        fp->blksize = 0x400;
        fp->flags |= 0x400;
    }
    if (whence == 0) {
        target = offset;
    } else {
        if (func_0011BFE0(ptr, fp->file, &st)) {
            goto dumb;
        }
        target = st.size + offset;
    }
    if (!havepos) {
        if (fp->flags & 0x1000) {
            curoff = fp->offset;
        } else {
            curoff = seekfn(fp->cookie, 0, 1);
            if (curoff == -1) {
                goto dumb;
            }
        }
        curoff -= fp->r;
        if (fp->ubbase) {
            curoff -= fp->ur;
        }
    }
    if (fp->ubbase) {
        curoff += fp->r;
        n = fp->up - fp->bfbase;
        curoff -= n;
        n += fp->ur;
    } else {
        n = fp->p - fp->bfbase;
        curoff -= n;
        n += fp->r;
    }
    if ((fp->flags & 0x2000) == 0 && target >= curoff && target < curoff + n) {
        s32 o = target - curoff;
        fp->p = fp->bfbase + o;
        fp->r = n - o;
        fp->flags &= ~0x20;
        return 0;
    }
    curoff = target & -fp->blksize;
    if (seekfn(fp->cookie, curoff, 0) == -1) {
        goto dumb;
    }
    fp->r = 0;
    fp->flags &= ~0x20;
    n = target - curoff;
    if (n) {
        if (func_0011D710(fp) || fp->r < n) {
            goto dumb;
        }
        fp->p += n;
        fp->r -= n;
    }
    return 0;
dumb:
    if (func_0011C2D8(fp) || seekfn(fp->cookie, offset, whence) == -1) {
        return -1;
    }
    fp->p = fp->bfbase;
    fp->r = 0;
    fp->flags &= ~0x20;
    return 0;
}
