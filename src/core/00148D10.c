/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 *(*D_0016F740_[])(s32, s32);

void func_001480F8(void *, s32, s32);

// Allocates a 0x30-byte record and clears its two 16-byte halves.
s32 func_00148D10(s32 **arg0) {
    s32 *p = D_0016F740_[0](1, 0x30);

    *arg0 = p;
    if (p == 0) {
        return 1;
    }
    p[0xB] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
    func_001480F8(p, 0, 0x10);
    func_001480F8((s32 *)((u8 *)p + 0x10), 0, 0x10);
    return 0;
}
