#include "common.h"

extern void func_00499CE0(s32 arg0);
extern s32 func_00505B20(void);
extern void func_00505D30(s32 arg0);
extern s32 D_322FC8_[];
#define D_322FC8 (D_322FC8_[0])

// Cleanup function for indexed array element
void func_004DC178(void) {
    s32 s0;
    s32 a0;
    s32 *ptr;

    s0 = func_00505B20() * 0x168;
    ptr = (s32 *)((u32)&D_322FC8 + s0);
    func_00505D30(0xF);

    a0 = ptr[0x158 / 4];
    if (a0 == 0) {
        a0 = ptr[0x154 / 4];
    } else {
        func_00499CE0(a0);
        ptr[0x158 / 4] = 0;
        a0 = ptr[0x154 / 4];
    }

    if (a0 == 0) {
        a0 = ptr[0x150 / 4];
    } else {
        func_00499CE0(a0);
        ptr[0x154 / 4] = 0;
        a0 = ptr[0x150 / 4];
    }

    if (a0 != 0) {
        func_00499CE0(a0);
        ptr[0x150 / 4] = 0;
    }
}
