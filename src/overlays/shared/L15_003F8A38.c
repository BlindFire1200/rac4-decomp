#include "common.h"

extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L01_005A37B8(void *, s32, s32, s32, s32);

/* Update the state fields and request the next action. */
void func_L15_003F8A38(void *object) {
    u8 *state = *(u8 **)((u8 *)object + 0xAC);
    *(s32 *)(state + 0x68) = 1;
    if (state[0x70] == 0) {
        func_L01_005A37B8(object, 2, 0, 0, 0);
        *(f32 *)(state + 0x6C) = *(f32 *)((u8 *)object + 0x18);
    } else {
        func_L01_005A37B8(object, 2, 1, 1, 0);
    }
    func_L01_00591BD8(object, 1, -1);
}
