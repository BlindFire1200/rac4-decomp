#include "common.h"

extern void func_0053C1C8(u8 *o, u8 state, s32 type);

/* Clear the state block's word at +0x8, then tell the object manager to switch the object to state 2 with type -1. */
void func_L06_004016F0(u8 *object) {
    u8 *state = *(u8 **)(object + 0xAC);
    *(s32 *)(state + 0x8) = 0;
    func_0053C1C8(object, 2, -1);
}
