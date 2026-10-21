#include "common.h"
extern s32 func_L01_006B4FC0(void *, s32, s32, s32);
extern void func_L00_006EC318(s32, void *, s32);
void func_L41_00440D00(void *object, s32 arg1, s32 arg2, f32 value) {
    f32 local0;
    s32 local4;
    s32 local8;
    s32 handle = func_L01_006B4FC0(object, 0, 0, 0);
    local0 = value;
    func_L00_006EC318(handle, &local0, 4);
    local4 = arg1;
    func_L00_006EC318(handle, &local4, 4);
    local8 = arg2;
    func_L00_006EC318(handle, &local8, 4);
}
