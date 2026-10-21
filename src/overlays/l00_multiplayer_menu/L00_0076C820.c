#include "common.h"

// Call func_L00_0076C7B0 for arg1 and for arg1 + 0xC.

extern void func_L00_0076C7B0(s32 arg0, u8 *arg1);

void func_L00_0076C820(s32 arg0, u8 *arg1) {
    func_L00_0076C7B0(arg0, arg1);
    func_L00_0076C7B0(arg0, arg1 + 0xC);
}
