/* cflags: -fno-opt-stack */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdio/fgets.c
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

extern u8 *func_0011A1F0(u8 *, s32, s32);
extern void func_0011A370(u8 *, u8 *, s32);
extern s32 func_0011D710(FILE_ *);

u8 *func_0011C3E8(u8 *buf, s32 n, FILE_ *fp) {
    u32 len;
    u8 *s;
    u8 *p;
    u8 *t;

    if (n < 2) {
        return 0;
    }
    s = buf;
    n--;
    do {
        if ((len = fp->r) <= 0) {
            if (func_0011D710(fp)) {
                if (s == buf) {
                    return 0;
                }
                break;
            }
            len = fp->r;
        }
        p = fp->p;
        if (len > n) {
            len = n;
        }
        t = func_0011A1F0(p, '\n', len);
        if (t != 0) {
            len = ++t - p;
            fp->r -= len;
            fp->p = t;
            func_0011A370(s, p, len);
            s[len] = 0;
            return buf;
        }
        fp->r -= len;
        fp->p += len;
        func_0011A370(s, p, len);
        s += len;
    } while ((n -= len) != 0);
    *s = 0;
    return buf;
}
