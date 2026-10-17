#include "common.h"
void func_0050F4EC(s32 unused, f32 *arg1, void *arg2, void *arg3, f32 unused_float, f32 threshold) {
    f32 value = *arg1;
    if (threshold <= -value) {
        if ((*(u16 *)((u8 *)arg2 + 0x40) & 0x200) != 0) {
            *arg1 = value - threshold;
            *(u8 *)(*(u8 **)((u8 *)arg3 + 0x40) + 0x51) = 3;
        } else {
            *(u16 *)((u8 *)arg2 + 0x4E) = *(u16 *)((u8 *)arg2 + 0x4C);
            *(u8 *)(*(u8 **)((u8 *)arg3 + 0x40) + 0x51) = 2;
        }
    }
    *arg1 -= *(f32 *)(*(u8 **)((u8 *)arg3 + 0x40) + 0x48);
}
