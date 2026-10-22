#include "common.h"

#include "common.h"

extern void func_004F77C0(s32, s32, s32, s32, s32);

// Creates a 256x256 render target from the first two args and forwards the third.
void func_004F7A98(s32 arg0, s32 arg1, s32 arg2) {
    func_004F77C0(arg0, arg1, 0x100, 0x100, arg2);
}
