#include "common.h"

extern void func_00474368(void *, s32, s32);

// When the linked word at +0x10 is positive, calls func_00474368(arg0, 2, -1), sets bit 0 of +0xBE
// and stores that word * 50.0 in the halfword at +0xC; otherwise calls func_00474368(arg0, 1, -1).
void func_L01_004B1818(u8 *arg0) {
    u8 *vars = *(u8 **)(arg0 + 0xAC);

    if (*(s32 *)(vars + 0x10) > 0) {
        u8 flags;
        func_00474368(arg0, 2, -1);
        flags = arg0[0xBE];
        if ((flags ^ 1) & 1) {
            arg0[0xBE] = flags | 1;
        }
        *(s16 *)(vars + 0xC) = (f32)*(s32 *)(vars + 0x10) * 50.0f;
    } else {
        func_00474368(arg0, 1, -1);
    }
}
