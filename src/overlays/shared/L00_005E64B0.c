#include "common.h"

extern s32 D_00248800[];
extern u8 D_00249350[];

// Copy the state of slot `from` into slot `to` (list and header fields; the
// +0x10 word only when copy_extra is set).
void func_L00_005E64B0(s32 to, s32 from, s32 copy_extra) {
    u8 *src;
    u8 *dst;
    s32 i;

    if (to == from) {
        return;
    }
    src = (u8 *)D_00248800[D_00249350[from]];
    dst = (u8 *)D_00248800[D_00249350[to]];
    dst[0xC] = src[0xC];
    dst[0xD] = src[0xD];
    *(s32 *)(dst + 0x18) = *(s32 *)(src + 0x18);
    *(s32 *)(dst + 0x1C) = *(s32 *)(src + 0x1C);
    *(s32 *)(dst + 0x28) = *(s32 *)(src + 0x28);
    if (copy_extra != 0) {
        *(s32 *)(dst + 0x10) = *(s32 *)(src + 0x10);
    }
    for (i = 0; i < src[0xC]; i++) {
        *(s32 *)(dst + 0x48 + i * 4) = *(s32 *)(src + 0x48 + i * 4);
    }
}
