#include "common.h"

// Change the object's state byte (+0x20) to a1: remember the old state at
// +0x68, clear +0x6A and bit 0 of the +0xBE flags. When a2 is not -1, store it
// at +0x69 and clear bit 1 of the flags as well. Many handlers call this to
// move to a new state.
void func_L01_00591BD8(u8 *object, s32 new_state, s32 param) {
    u8 flags = object[0xBE] & 0xFE;
    u8 old = object[0x20];
    object[0x20] = new_state;
    object[0x68] = old;
    *(u16 *)(object + 0x6A) = 0;
    object[0xBE] = flags;
    if (param != -1) {
        object[0x69] = param;
        object[0xBE] = flags & 0xFD;
    }
}
