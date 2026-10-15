#include "common.h"

s32 func_00437CD8(s32);                             /* extern */
s32 func_0045E038(s32);                             /* extern */
void func_004A0040(s32, s32, void *);               /* extern */
extern s32 D_003D9110[];

/* Initialize global structure with function call results */
void func_004A2698(s32 arg0) {
    s32 *s0;
    s32 v0;

    func_00437CD8(arg0 & 0xFFFF);
    v0 = func_0045E038(0x150);
    s0 = D_003D9110;
    s0[1] = v0;
    s0[4] = func_0045E038(0x151);
    s0[7] = func_0045E038(0x152);
    func_004A0040(0, 3, s0);
}
