#include "common.h"

extern void func_004F7008(s32, s32, s32, s32, s32);

// Creates a 256x256 render target from the passed-in resource and size.
void func_004F7A48(s32 arg0, s32 arg1, s32 arg2) {
    func_004F7008(arg0, arg1, 0x100, 0x100, arg2);
}
