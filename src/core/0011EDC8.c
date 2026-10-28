/* cflags: -fno-opt-stack */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdlib/getenv_r.c
 * newlib 8a0efa53e44919bcf5ccb1d3353618a82afdf8bc.
 * Original notice retained below; this is not an unchanged vendor file. */
/*
 * Copyright (c) 1987 Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that: (1) source distributions retain this entire copyright
 * notice and comment, and (2) distributions including binaries display
 * the following acknowledgement:  ``This product includes software
 * developed by the University of California, Berkeley and its contributors''
 * in the documentation or other materials provided with the distribution
 * and in all advertising materials mentioning features or use of this
 * software. Neither the name of the University nor the names of its
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "common.h"

extern void func_0011ECF0(s32);
extern void func_0011ECF8(s32);
extern s32 func_0011AE00(char *, char *, s32);
extern char **D_00163E7C_[];

char *func_0011EDC8(s32 reent_ptr, char *name, s32 *offset) {
    s32 len;
    char **p;
    char *c;

    func_0011ECF0(reent_ptr);
    if (D_00163E7C_[0] == 0) {
        return 0;
    }
    c = name;
    len = 0;
    while (*c && *c != '=') {
        c++;
        len++;
    }
    for (p = D_00163E7C_[0]; *p; ++p) {
        if (!func_0011AE00(*p, name, len)) {
            if (*(c = *p + len) == '=') {
                *offset = p - D_00163E7C_[0];
                func_0011ECF8(reent_ptr);
                return ++c;
            }
        }
    }
    func_0011ECF8(reent_ptr);
    return 0;
}
