#include "common.h"

/* Stores the float argument in the structure at offset 0x40 (field 0x24) and sets the flag byte at 0x44 to 1. */
void func_0050EE28(u8 *arg0, f32 fparg0) {
    *(f32 *)(*(u8 **)(arg0 + 0x40) + 0x24) = fparg0;
    arg0[0x44] = 1;
}
