#include "common.h"

// Stores a float at offset 0x3C of the sub-object at +0x40, then sets the flag byte at +0x44 to 1.
void func_0050EE68(void *arg0, f32 fparg0) {
    *(f32 *)(*(u8 **)((u8 *)arg0 + 0x40) + 0x3C) = fparg0;
    *(u8 *)((u8 *)arg0 + 0x44) = 1;
}
