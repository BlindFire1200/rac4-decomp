#include "common.h"

extern u8 D_0035D0D8[];

void func_L00_006F55E8(u8 *arg0) {
    s32 index = (s32)(arg0 - D_0035D0D8) * (s32)0xCCCCCCCD >> 4;
    *(s32 *)(arg0 + 0x4C) = -1;
    *(s32 *)(arg0 + 0x1C) = 0;
    *(s32 *)(arg0 + 0x20) = 0;
    *(s32 *)(arg0 + 0x18) = index;
}
