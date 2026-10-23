#include "common.h"

extern s32 func_L01_00553130(void *arg0, void *arg1, void *arg2, void *arg3, s32 arg4, s32 arg5, s32 arg6);
extern s32 D_00222C20;

// PAL version of func_L01_004B3CC8 (100 frames at 50 Hz instead of 120 at 60 Hz): reset the linked object through func_L01_00553130 and set its halfword field to 0x64.
void func_L01_004B57F8(void *arg0) {
    u16 *linked = *(u16 **)((u8 *)arg0 + 0xAC);

    func_L01_00553130(&D_00222C20, arg0, (u8 *)arg0 + 0x10, (u8 *)arg0 + 0xF0, 0, 0, 0);
    linked[0x33E] = 0x64;
}
