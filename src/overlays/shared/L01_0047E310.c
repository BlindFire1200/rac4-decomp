#include "common.h"

extern void func_L01_0047E690();
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);
extern s32 D_0021E824;
extern s32 D_0021E828;

// Pick the object's next state from the flags in its +0xAC block.
void func_L01_0047E310(u8 *object) {
    u8 *block = *(u8 **)(object + 0xAC);

    if (block[0x38] != 0) {
        object[0x30] = 0xFF;
    }
    if ((block[0x3D] != 0 && (D_0021E824 != 0 || D_0021E828 != 0)) ||
        (block[0x3E] != 0 && (D_0021E824 != 0 || D_0021E828 != 1))) {
        func_L01_00591BD8(object, 2, -1);
        return;
    }
    if (block[0x3A] != 0) {
        func_L01_0047E690(object, 1);
    } else if (block[0x3B] != 0) {
        func_L01_0047E690(object, 0);
    }
    func_L01_00591BD8(object, 1, -1);
}
