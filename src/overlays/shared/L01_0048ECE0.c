#include "common.h"
void func_L00_0066D220(s32, s32, s32);
void func_L01_0048ECE0(s32 a0, u8 *a1) {
    s32 state = *(s32 *)(a1 + 0x180);
    u8 *entry;
    s32 value;
    if ((u32)(state - 1) >= 2) return;
    *(s32 *)(a1 + 0x180) = 3;
    entry = *(u8 **)(a1 + 0x174);
    value = *(s32 *)(entry + 0x44);
    if (value >= 0) func_L00_0066D220(value, 0, *(s32 *)(a1 + 0x170));
}
