#include "common.h"

extern void func_00568B98(void *o, u8 state, s32 type);
extern void func_00564F18(void *o);

// Raises the object's status flag, resets the counter sub-object, doubles the scale value and starts the object's action.
s32 func_L05_004EEE30(u8 *arg0) {
    u8 *sub;
    s32 count;
    s32 value;

    if (*(u8 *)(arg0 + 0x20) != 0) {
        return 0;
    }
    sub = *(u8 **)(arg0 + 0xAC);
    *(u16 *)(arg0 + 0x34) |= 4;
    *(f32 *)(sub + 0x64) = 1.0f;
    count = *(s32 *)(sub + 0x54);
    value = (count >= 2) ? count : 0x14;
    *(s32 *)(sub + 0x54) = value;
    *(f32 *)(sub + 0x50) = (f32)value;
    *(f32 *)(arg0 + 0x70) = 2.0f * *(f32 *)(*(u8 **)(arg0 + 0x24) + 0x24);
    func_00568B98(arg0, 1, -1);
    func_00564F18(arg0);
    return 1;
}
