#include "common.h"

extern s32 D_2217E0;
extern s32 D_30A490[];
extern void func_00499CE0(s32);
extern void func_0049B0D8(s32);
extern void func_0049C4B0(s32, s32, s32, s32);
extern void func_004BAC70(void);
extern s32 func_00505B20(void);

void func_004B9DF8(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v0 = func_00505B20();
    u8 *temp_s0 = (u8 *)D_30A490 + (temp_v0 * 0x14);
    func_0049C4B0(temp_v0, 0, D_2217E0, 0);
    func_004BAC70();
    temp_a0 = *(s32 *)(temp_s0 + 0xC);
    if (temp_a0 != 0) {
        func_00499CE0(temp_a0);
        *(s32 *)(temp_s0 + 0xC) = 0;
    }
    temp_a0_2 = *(s32 *)(temp_s0 + 0x8);
    if (temp_a0_2 != 0) {
        func_00499CE0(temp_a0_2);
        *(s32 *)(temp_s0 + 0x8) = 0;
    }
    temp_a0_3 = *(s32 *)(temp_s0 + 0x10);
    if (temp_a0_3 != 0) {
        func_00499CE0(temp_a0_3);
        *(s32 *)(temp_s0 + 0x10) = 0;
    }
    func_0049B0D8(temp_v0);
}
