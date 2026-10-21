#include "common.h"

extern s32 D_00390250[];
extern f32 D_00390350[];
extern u8 D_00390450[];

/* sorts the key/id/byte triples in [lo, hi) by key, descending, with an explicit stack */
void func_L01_003CCA58(s32 lo, s32 hi) {
    s32 stklo[32];
    s32 stkhi[32];
    s32 depth;
    s32 i;
    s32 j;
    f32 pivot;

    depth = 0;
    while (lo < hi) {
        pivot = D_00390350[lo];
        i = lo + 1;
        j = hi;
        while (i < j) {
            f32 k = D_00390350[i];
            if (k <= pivot) {
                i++;
            } else {
                j--;
                { s32 t = D_00390250[i]; D_00390250[i] = D_00390250[j]; D_00390250[j] = t; }
                D_00390350[i] = D_00390350[j];
                D_00390350[j] = k;
                { u8 b = D_00390450[i]; D_00390450[i] = D_00390450[j]; D_00390450[j] = b; }
            }
        }
        i--;
        { s32 t = D_00390250[lo]; D_00390250[lo] = D_00390250[i]; D_00390250[i] = t; }
        { f32 k = D_00390350[lo]; D_00390350[lo] = D_00390350[i]; D_00390350[i] = k; }
        { u8 b = D_00390450[lo]; D_00390450[lo] = D_00390450[i]; D_00390450[i] = b; }
        if (lo < i) {
            if (depth == 32) {
                func_L01_003CCA58(lo, i);
            } else {
                stklo[depth] = lo;
                stkhi[depth] = i;
                depth++;
            }
        }
        if (j < hi) {
            lo = j;
        } else {
            if (depth == 0) {
                return;
            }
            depth--;
            lo = stklo[depth];
            hi = stkhi[depth];
        }
    }
}
