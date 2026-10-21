#include "common.h"

void func_L00_0066D220(s32, s32, s32);

// When the state word at +0x180 of a1 is 1 or 2, set it to 3 and, when the
// +0x44 word of the +0x174 entry is not negative, run func_L00_0066D220 on it
// with 0 and the +0x170 word.
void func_L01_0048ECE0(s32 unused0, u8 *record) {
    s32 state = *(s32 *)(record + 0x180);
    u8 *entry;
    s32 value;
    if ((u32)(state - 1) >= 2) return;
    *(s32 *)(record + 0x180) = 3;
    entry = *(u8 **)(record + 0x174);
    value = *(s32 *)(entry + 0x44);
    if (value >= 0) func_L00_0066D220(value, 0, *(s32 *)(record + 0x170));
}
