#include "common.h"
extern s32 func_L01_006B4FC0(void *, s32, s32, s32);
extern void func_L00_006EC318(s32, void *, s32);
void func_L01_004D0880(u8 *object, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 value) {
    u8 flag[16];
    f32 local10;
    s32 local14;
    s32 local18;
    s32 local1C;
    s32 local20;
    u8 *linked = *(u8 **)(object + 0xAC);
    s32 handle = func_L01_006B4FC0(object, 0, 0, arg5);
    local10 = value;
    func_L00_006EC318(handle, &local10, 4);
    local14 = arg4;
    func_L00_006EC318(handle, &local14, 4);
    local18 = *(s32 *)(linked + 0x10);
    func_L00_006EC318(handle, &local18, 4);
    flag[0] = arg3;
    func_L00_006EC318(handle, flag, 1);
    local1C = arg1;
    func_L00_006EC318(handle, &local1C, 4);
    local20 = arg2;
    func_L00_006EC318(handle, &local20, 4);
}
