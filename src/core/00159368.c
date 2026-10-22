#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Stores arg0 into a stack local and calls func_00158C60 with constants 0x32 and 4.
void func_00159368(s32 arg0, s32 arg1, s32 arg2) {
    s32 local = arg0;
    func_00158C60(0x32, 4, &local, arg1, arg2);
}
