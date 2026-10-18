#include "common.h"
extern s32 func_L01_006B4FC0(void *, s32, s32, s32);
extern void func_L00_006EC318(s32, void *, s32);
void func_L41_003DF440(void *object, s32 arg1, void *data, s32 arg3, s32 arg4, f32 value) {
    s32 local0;
    f32 local4;
    s32 local8;
    s32 localC;
    s32 handle = func_L01_006B4FC0(object, arg1, 0, -1);
    local0 = arg1;
    func_L00_006EC318(handle, &local0, 4);
    func_L00_006EC318(handle, data, 16);
    local4 = value;
    func_L00_006EC318(handle, &local4, 4);
    local8 = arg3;
    func_L00_006EC318(handle, &local8, 4);
    localC = arg4;
    func_L00_006EC318(handle, &localC, 4);
}
