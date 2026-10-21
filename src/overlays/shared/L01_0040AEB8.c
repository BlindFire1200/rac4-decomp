#include "common.h"

void func_L00_006A99F8(void *, void *);
void func_L01_00591BD8(void *, s32, s32);

// Run func_L00_006A99F8 with the linked +0x40 block, reset the linked +0x3C
// word to -1 and move the object to state 1 (-1).
void func_L01_0040AEB8(u8 *object) {
    u8 *linked = *(u8 **)(object + 0xAC);
    func_L00_006A99F8(object, linked + 0x40);
    *(s32 *)(linked + 0x3C) = -1;
    func_L01_00591BD8(object, 1, -1);
}
