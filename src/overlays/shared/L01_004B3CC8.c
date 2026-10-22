#include "common.h"

extern s32 func_L01_00550790(void *arg0, void *arg1, void *arg2, void *arg3, s32 arg4, s32 arg5, s32 arg6);
extern s32 D_00222B20;

// Reset the linked object through func_L01_00550790 and set its halfword field to 0x78.
void func_L01_004B3CC8(void *arg0) {
    u16 *linked = *(u16 **)((u8 *)arg0 + 0xAC);

    func_L01_00550790(&D_00222B20, arg0, (u8 *)arg0 + 0x10, (u8 *)arg0 + 0xF0, 0, 0, 0);
    linked[0x33E] = 0x78;
}
