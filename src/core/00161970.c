#include "common.h"

s32 D_0021E088 = 0;
s32 D_0021E08C = 0;
extern s32 D_0021A8B0[];

// Advance the tracked table index and return the address of its entry
s32 func_00161970(void) {
    s32 cur = D_0021E088;
    s32 addr = 0;
    s32 next;
    s32 val;

    if (cur != D_0021E08C) {
        next = cur + 1;
        addr = cur * 0x140 + (s32)D_0021A8B0;

        if (next >= 0) {
            val = ((next ^ 8) == 0) ? 0 : next;
        } else {
            val = 8;
        }

        D_0021E088 = val;
    }

    return addr;
}
