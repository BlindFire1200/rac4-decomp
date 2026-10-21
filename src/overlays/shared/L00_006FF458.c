#include "common.h"

// Clear two indexed fields when the byte index is in range.
void func_L00_006FF458(u8 *arg0, s32 arg1) {
    u32 index = (u32)arg1 & 0xFF;
    if (index < 10U) {
        *(u8 *)((u32)arg0 + index + 2) = 0;
        *(u16 *)((u32)arg0 + (index << 1) + 0xC) = 0;
    }
}
