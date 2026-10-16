#include "common.h"

extern u8 D_003A4E90[];
extern s32 func_L00_00599A28(void *, s32);
extern void func_L00_006B8688(void *, s32);
extern void func_L00_005E75B0(void *, s32, s32, f32);
extern void func_L01_00406F30(void *, s32, s32);

void func_L01_00407E30(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    u8 *state = *(u8 **)(arg0 + 0xAC);
    *(s32 *)(state + 0x50) = func_L00_00599A28(D_003A4E90, *(s32 *)(arg1 + 0x2F00));
    func_L00_006B8688(arg1, -1);
    func_L00_005E75B0(arg0, 2, 0, 0.0f);
    func_L01_00406F30(arg0, arg2, arg3);
}
