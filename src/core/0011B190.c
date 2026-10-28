/* cflags: -fno-opt-stack */
/* Matching reconstruction; public algorithm reference: newlib/libm/math/s_floor.c
 * newlib 8a0efa53e44919bcf5ccb1d3353618a82afdf8bc.
 * Original notice retained below; this is not an unchanged vendor file. */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */

#include "common.h"

typedef union {
    double value;
    struct {
        u32 lsw;
        u32 msw;
    } parts;
} IDS;

extern double func_00130DD0(double, double);
extern s32 func_001313B8(double, double);
extern double D_00192070[];

#define EXTRACT_WORDS(ix0, ix1, d) \
    do { \
        IDS ew_u; \
        ew_u.value = (d); \
        (ix0) = ew_u.parts.msw; \
        (ix1) = ew_u.parts.lsw; \
    } while (0)
#define INSERT_WORDS(d, ix0, ix1) \
    do { \
        IDS iw_u; \
        iw_u.parts.msw = (ix0); \
        iw_u.parts.lsw = (ix1); \
        (d) = iw_u.value; \
    } while (0)

double func_0011B190(double x) {
    s32 i0;
    s32 i1;
    s32 j0;
    u32 i;
    u32 j;

    EXTRACT_WORDS(i0, i1, x);
    j0 = ((i0 >> 20) & 0x7FF) - 0x3FF;
    if (j0 < 20) {
        if (j0 < 0) {
            if (func_001313B8(func_00130DD0(x, D_00192070[0]), 0.0) > 0) {
                if (i0 >= 0) {
                    i0 = i1 = 0;
                } else if (((i0 & 0x7FFFFFFF) | i1) != 0) {
                    i0 = 0xBFF00000;
                    i1 = 0;
                }
            }
        } else {
            i = (0x000FFFFF) >> j0;
            if (((i0 & i) | i1) == 0) {
                return x;
            }
            if (func_001313B8(func_00130DD0(x, D_00192070[0]), 0.0) > 0) {
                if (i0 < 0) {
                    i0 += (0x00100000) >> j0;
                }
                i0 &= (~i);
                i1 = 0;
            }
        }
    } else if (j0 > 51) {
        if (j0 == 0x400) {
            return func_00130DD0(x, x);
        } else {
            return x;
        }
    } else {
        i = ((u32)(0xFFFFFFFF)) >> (j0 - 20);
        if ((i1 & i) == 0) {
            return x;
        }
        if (func_001313B8(func_00130DD0(x, D_00192070[0]), 0.0) > 0) {
            if (i0 < 0) {
                if (j0 == 20) {
                    i0 += 1;
                } else {
                    j = i1 + (1 << (52 - j0));
                    if (j < i1) {
                        i0 += 1;
                    }
                    i1 = j;
                }
            }
            i1 &= (~i);
        }
    }
    INSERT_WORDS(x, i0, i1);
    return x;
}
