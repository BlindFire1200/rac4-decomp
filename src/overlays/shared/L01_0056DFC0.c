#include "common.h"

f32 func_L01_0056DF50(void *);
extern u8 *D_00222D14;
extern s32 D_00222D60;
extern s16 *D_0028BFE0[];

// Count the entries of list idx whose object value reaches thresh, those below it, and all of them.
void func_L01_0056DFC0(s32 idx, s32 *above, s32 *below, s32 *total, f32 thresh) {
    s16 *p;
    s32 na = 0;
    s32 nb = 0;
    s32 nt = 0;
    u8 *obj;

    p = D_0028BFE0[idx];
    if ((u8)idx != 0xFF && D_00222D60 >= idx && p != 0) {
        do {
            obj = D_00222D14 + ((*p & 0x7FFF) << 8);
            if (obj == 0) break;
            nt++;
            if (thresh <= func_L01_0056DF50(obj)) na++;
            else nb++;
            p++;
            if ((u8)idx == 0xFF || D_00222D60 < idx || p == 0) break;
        } while (p[-1] >= 0 || p == D_0028BFE0[idx]);
    }
    if (above != 0) *above = na;
    if (below != 0) *below = nb;
    if (total != 0) *total = nt;
}
