#include "common.h"

extern s32 func_00120378(s32 arg0);
extern s32 func_00120DA0();
s32 D_0021DFC8 = 0;
// Call func_00120DA0, fill a 0x30-byte local block through func_00120378, publish its word 7 to D_0021DFC8, return the first result.
s32 func_0015DB08(void) {
    s32 buf[0xC];
    s32 r;

    r = func_00120DA0();
    func_00120378((s32)buf);
    D_0021DFC8 = buf[7];
    return r;
}
