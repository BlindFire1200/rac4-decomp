#include "common.h"

#include "common.h"

extern s32 func_004F7420(s32, s32, s32, s32, s32, s32);

// Creates a 256x256 render target from the first three args and forwards the fourth.
void func_004F7AC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_004F7420(arg0, arg1, arg2, 0x100, 0x100, arg3);
}
