#include "common.h"

extern void func_0049E790(s32, s32, void (*)(void *), s32, f32, s32, s32, s32);
extern u8 D_0021EE18;

// Calls func_0049E790 with a mode flag taken from D_0021EE18 plus the caller's arguments.
void func_004CA798(s32 arg0, void (*arg1)(void *), s32 arg2, s32 arg3) {
    func_0049E790((D_0021EE18 != 0) ? 0 : 4, arg0, arg1, arg2, -1.0f, arg3, 0, 1);
}
