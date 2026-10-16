#include "common.h"

extern void func_L01_00591BD8(void *, s32, s32);

s32 func_L01_004E4AB8(void *object) {
    u8 *linked;
    s32 value;
    s32 mode;
    if (*(u8 *)((u8 *)object + 0x20) != 0) return 0;
    linked = *(u8 **)((u8 *)object + 0xAC);
    value = *(s32 *)(linked + 0x54);
    value = value >= 2 ? value : 0x14;
    mode = *(u8 *)(linked + 0xF4) != 0 ? 2 : 1;
    *(s32 *)(linked + 0x64) = 0;
    *(s32 *)(linked + 0x54) = value;
    *(f32 *)(linked + 0x50) = (f32)value;
    func_L01_00591BD8(object, mode, -1);
    return 1;
}
