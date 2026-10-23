#include "common.h"

extern void func_00474368(void *, s32, s32);

// Unless arg1's state is 0, 4 or 6, calls func_00474368(arg1, 1, -1) and stores the linked word at
// +0x104 * 50.0 in the halfword at +0x114 (for kind 2, minus the halfword at +0x116; kind 5 as is).
void func_L01_004DABE0(void *arg0, u8 *arg1) {
    u8 state = arg1[0x20];
    u8 *vars = *(u8 **)(arg1 + 0xAC);

    if (state != 0 && state != 4 && state != 6) {
        s32 v;
        u8 kind;
        func_00474368(arg1, 1, -1);
        kind = arg1[0x68];
        if (kind == 2) {
            v = (s32)((f32)*(s32 *)(vars + 0x104) * 50.0f) - *(u16 *)(vars + 0x116);
        } else {
            if (kind != 5) {
                return;
            }
            v = (s32)((f32)*(s32 *)(vars + 0x104) * 50.0f);
        }
        *(s16 *)(vars + 0x114) = v;
    }
}
