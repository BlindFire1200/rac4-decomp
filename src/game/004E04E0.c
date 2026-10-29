#include "common.h"

extern void func_004537D0(s32 *, s32 *, s32);
extern s32 D_00171D38[];
extern s32 D_00171FB0[];
extern s32 D_00171FC8[];
extern s32 D_1D2220[];

// Save the six current values as previous, recompute them as products of three tables >> 20, and set a changed bit per value.
void func_004E04E0(void) {
    s32 *prev = D_1D2220;
    s32 *cur = prev - 8;
    s32 i;

    func_004537D0(prev, cur, 0x20);
    cur[0] = (D_00171FB0[0] * D_00171FC8[0] * D_00171D38[4]) >> 20;
    cur[1] = (D_00171FB0[1] * D_00171FC8[1] * D_00171D38[3]) >> 20;
    cur[2] = (D_00171FB0[2] * D_00171FC8[2] * D_00171D38[5]) >> 20;
    cur[3] = (D_00171FB0[3] * D_00171FC8[3] * D_00171D38[4]) >> 20;
    cur[4] = (D_00171FB0[4] * D_00171FC8[4] * D_00171D38[4]) >> 20;
    cur[5] = (D_00171FB0[5] * D_00171FC8[5] * D_00171D38[4]) >> 20;
    {
        s32 *b = cur;
        s32 *a = prev;
        s32 *base = cur;
        i = 0;
        do {
            s32 x = *a;
            s32 y = *b;
            s32 t;
            a++;
            b++;
            t = x != y;
            base[0x748] = base[0x748] | (t << i);
            i++;
        } while (i < 6);
    }
}
