/* cflags: -fno-opt-stack */
/* Matching reconstruction; public algorithm reference: newlib/libc/stdlib/strtoul.c
 * newlib 8a0efa53e44919bcf5ccb1d3353618a82afdf8bc.
 * Original notice retained below; this is not an unchanged vendor file. */
/*
 * Copyright (c) 1990 Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include "common.h"

extern u64 func_00130480(u64, u64);
extern u64 func_0012FEB0(u64, u64);
extern u64 func_0012FE48(u64, u64);
extern u8 D_00191F01[];

u64 func_00121D30(s32 *rptr, u8 *nptr, u8 **endptr, s32 base) {
    u8 *s = nptr;
    u64 acc;
    s32 c;
    u64 cutoff;
    s32 neg = 0;
    s32 any;
    s32 cutlim;

    do {
        c = *(s8 *)s++;
    } while (D_00191F01[c] & 8);
    if (c == '-') {
        neg = 1;
        c = *(s8 *)s++;
    } else if (c == '+') {
        c = *(s8 *)s++;
    }
    if ((base == 0 || base == 16) && c == '0' && (*(s8 *)s == 'x' || *(s8 *)s == 'X')) {
        c = ((s8 *)s)[1];
        s += 2;
        base = 16;
    }
    if (base == 0) {
        base = c == '0' ? 8 : 10;
    }
    cutoff = func_0012FEB0(0xFFFFFFFFFFFFFFFFULL, base);
    cutlim = func_00130480(0xFFFFFFFFFFFFFFFFULL, base);
    for (acc = 0, any = 0;; c = *(s8 *)s++) {
        if (D_00191F01[c] & 4) {
            c -= '0';
        } else if (D_00191F01[c] & 3) {
            c -= (D_00191F01[c] & 1) ? 'A' - 10 : 'a' - 10;
        } else {
            break;
        }
        if (c >= base) {
            break;
        }
        if (any < 0 || acc > cutoff || (acc == cutoff && c > cutlim)) {
            any = -1;
        } else {
            any = 1;
            acc = c + func_0012FE48(acc, base);
        }
    }
    if (any < 0) {
        acc = 0xFFFFFFFFFFFFFFFFULL;
        *rptr = 34;
    } else if (neg) {
        acc = -acc;
    }
    if (endptr != 0) {
        *endptr = any ? s - 1 : nptr;
    }
    return acc;
}
