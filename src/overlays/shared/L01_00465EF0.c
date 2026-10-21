#include "common.h"

// Clear a slot of the linked object: zero the word at +0x20 + slot*4 and set
// the halfword at +0x10 + slot*2 to -1.
void func_L01_00465EF0(u8 *object, s32 slot) {
    u8 *base = *(u8 **)(object + 0xAC);
    s32 *p32 = (s32 *)(base + slot * 4 + 0x20);
    s16 *p16 = (s16 *)(base + slot * 2 + 0x10);
    *p32 = 0;
    *p16 = -1;
}
