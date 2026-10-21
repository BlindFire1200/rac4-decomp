#include "common.h"

s32 func_004381D8(s32);                             /* extern */
s32 func_0045E850(s32);                             /* extern */
void func_004A0D78(s32, s32, void *);               /* extern */
extern s32 D_003D9170[];

/* PAL version of func_004A2698: the same menu with five entries (text ids 0x150, 0x151,
   0x153, 0x154 and 0x152) instead of three */
void func_004A3388(s32 arg0) {
    s32 *s0;
    s32 v0;

    func_004381D8(arg0 & 0xFFFF);
    v0 = func_0045E850(0x150);
    s0 = D_003D9170;
    s0[1] = v0;
    s0[4] = func_0045E850(0x151);
    s0[7] = func_0045E850(0x153);
    s0[10] = func_0045E850(0x154);
    s0[13] = func_0045E850(0x152);
    func_004A0D78(0, 5, s0);
}
