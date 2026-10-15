#include "common.h"

extern void func_L00_0066CCE8(void *, s32);

// Update the state fields and notify the associated object when needed.
void func_L00_005DEF00(u8 *arg0, s32 arg1) {
    u8 *object;

    if (arg1 != 0) {
        object = *(u8 **)(arg0 + 0x24);
        *(u16 *)(arg0 + 0x34) &= 0xFFBE;
        *(u16 *)(arg0 + 0x34) |= *(u16 *)(object + 0x44) & 0x1000;
        *(s32 *)(arg0 + 0x98) = *(s32 *)(object + 0x10);
        return;
    }
    *(s32 *)(arg0 + 0x98) = 0;
    *(u16 *)(arg0 + 0x34) = (*(u16 *)(arg0 + 0x34) | 0x41) & 0xEFFF;
    func_L00_0066CCE8(arg0, 1);
}
