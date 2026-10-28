/* cflags: -fno-opt-stack */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdio/fopen.c
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

extern s32 func_0011C0A0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 func_0011C798(s32, s32, s32 *);
extern u8 *func_0011C5E0(s32);
extern void func_0011CB08(u8 *, s32, s32);
extern void func_0011DA40(void);
extern void func_0011DAA8(void);
extern void func_0011DB28(void);
extern void func_0011DB90(void);

u8 *func_0011C840(s32 arg0, s32 arg1, s32 arg2) {
    s32 local;
    s32 mode;
    u8 *f;
    s32 r;

    mode = func_0011C798(arg0, arg2, &local);
    if (mode == 0) {
        return 0;
    }
    f = func_0011C5E0(arg0);
    if (f == 0) {
        return 0;
    }
    r = func_0011C0A0(*(s32 **)(f + 0x54), arg1, local, 0x1B6);
    if (r < 0) {
        *(s16 *)(f + 0xC) = 0;
        return 0;
    }
    *(s16 *)(f + 0xE) = r;
    *(void **)(f + 0x20) = func_0011DA40;
    *(void **)(f + 0x24) = func_0011DAA8;
    *(void **)(f + 0x28) = func_0011DB28;
    *(void **)(f + 0x2C) = func_0011DB90;
    *(s16 *)(f + 0xC) = mode;
    *(u8 **)(f + 0x1C) = f;
    if ((mode & 0x100) != 0) {
        func_0011CB08(f, 0, 2);
    }
    return f;
}
