#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Stores arg0 into a stack local and calls func_00158C60 with constants 0x2E and 4.
void func_00159308(s32 arg0) {
    s32 local = arg0;
    func_00158C60(0x2E, 4, &local, 0, 0);
}
