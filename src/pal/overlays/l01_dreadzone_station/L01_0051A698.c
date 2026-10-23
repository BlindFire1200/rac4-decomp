#include "common.h"

extern s32 func_00472E70(s32, s32);
extern void func_00474148(void *, s32, s32, f32);
extern void func_00474368(void *, s32, s32);

// The first time (bit 0 of +0xBE not yet set), compares the byte at +0x54 with func_00472E70(0, 2)
// and, if they differ, calls func_00474148 with a second func_00472E70(0, 2); when bit 1 of +0x55
// is set, calls func_00474368(arg0, 0, -1).
void func_L01_0051A698(u8 *arg0) {
    s32 first;
    u8 flags = arg0[0xBE];

    if ((flags ^ 1) & 1) {
        first = 1;
        arg0[0xBE] = flags | 1;
    } else {
        first = 0;
    }
    if (first != 0) {
        u8 anim = arg0[0x54];
        if (anim != func_00472E70(0, 2)) {
            func_00474148(arg0, func_00472E70(0, 2), 8, 0.0f);
        }
    }
    if (arg0[0x55] & 2) {
        func_00474368(arg0, 0, -1);
    }
}
