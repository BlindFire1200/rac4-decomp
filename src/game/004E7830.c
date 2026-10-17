#include "common.h"

extern void func_004535E0(s32);
s32 D_002206E8 = 0;

// Wait until none of the bits of mask is set in D_002206E8, calling
// func_004535E0 (0x400) on each pass.
void func_004E7830(s32 mask) {
    while (D_002206E8 & mask) {
        func_004535E0(0x400);
    }
}
