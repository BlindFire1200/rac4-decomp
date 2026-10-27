#include "common.h"

extern u8 D_00172160[];

// Stores arg1 at offset 0xC0 and arg0 at offset 0xBC of the global block.
void func_0015CB10(s32 arg0, s32 arg1) {
    s32 *p = (s32 *)D_00172160;
    p[0x2F] = arg0;
    p[0x30] = arg1;
}
