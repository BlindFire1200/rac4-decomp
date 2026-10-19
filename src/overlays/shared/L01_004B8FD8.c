#include "common.h"
extern void func_L01_004B6BA8(void);
extern void func_L01_00550790(s32 *, void *, void *, void *, s32, s32, s32);
extern s32 D_00222B20;
void func_L01_004B8FD8(u8 *object) {
    u8 *state = *(u8 **)(object + 0xAC);
    func_L01_004B6BA8();
    if (state[0x60D] == 0) {
        func_L01_00550790(&D_00222B20, object, object + 0x10, object + 0xF0, 0, 0, 0);
    }
}
