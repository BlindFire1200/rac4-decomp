#include "common.h"
extern void func_L05_003E3F00(void);
extern void func_L01_00591BD8(u8 *, s32, s32);
void func_L05_003E3EA0(u8 *object) {
    u8 *state = *(u8 **)(object + 0xAC);
    *(s32 *)(state + 0xB0) = 0;
    state[0xBC] = 0;
    *(s32 *)(state + 0xB8) = 0;
    *(s32 *)(state + 0xB4) = -1;
    func_L05_003E3F00();
    func_L01_00591BD8(object, 4, 1);
    state[0xBD] = 1;
}
