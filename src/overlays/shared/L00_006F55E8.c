#include "common.h"

extern u8 D_0035D0D8[];

// Compute the entry's table index (stride 0x50) and reset its fields.
void func_L00_006F55E8(u8 *entry) {
    s32 index = (s32)(entry - D_0035D0D8) * (s32)0xCCCCCCCD >> 4;
    *(s32 *)(entry + 0x4C) = -1;
    *(s32 *)(entry + 0x1C) = 0;
    *(s32 *)(entry + 0x20) = 0;
    *(s32 *)(entry + 0x18) = index;
}
