#include "common.h"
extern s32 D_00248800[];
extern u8 D_00249350[];
void func_L00_005E64B0(s32 arg0, s32 arg1, s32 arg2) {
    u8 *src;
    u8 *dst;
    s32 i;
    if (arg0 == arg1) return;
    src = (u8 *)D_00248800[D_00249350[arg1]];
    dst = (u8 *)D_00248800[D_00249350[arg0]];
    dst[0xC] = src[0xC]; dst[0xD] = src[0xD];
    *(s32 *)(dst + 0x18) = *(s32 *)(src + 0x18);
    *(s32 *)(dst + 0x1C) = *(s32 *)(src + 0x1C);
    *(s32 *)(dst + 0x28) = *(s32 *)(src + 0x28);
    if (arg2 != 0) *(s32 *)(dst + 0x10) = *(s32 *)(src + 0x10);
    for (i = 0; i < src[0xC]; i++) *(s32 *)(dst + 0x48 + i * 4) = *(s32 *)(src + 0x48 + i * 4);
}
