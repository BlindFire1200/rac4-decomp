#include "common.h"

// Like func_L01_00591BD8, but does nothing when the object is already in state
// a1.
void func_L01_00591C18(u8 *object, s32 new_state, s32 param) {
    u8 old = object[0x20];
    if (old != new_state) {
        u8 flags = object[0xBE] & 0xFE;
        object[0x68] = old;
        object[0x20] = new_state;
        *(u16 *)(object + 0x6A) = 0;
        object[0xBE] = flags;
        if (param != -1) {
            object[0x69] = param;
            object[0xBE] = flags & 0xFD;
        }
    }
}
