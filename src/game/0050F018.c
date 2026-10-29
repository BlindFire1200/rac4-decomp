#include "common.h"

// Stores a byte into the object's sub-struct at 0x50 and sets the flag byte at 0x44 to 1.
void func_0050F018(u8 *a0, s8 a1) {
    *(s8 *)(*(u8 **)(a0 + 0x40) + 0x50) = a1;
    *(s8 *)(a0 + 0x44) = 1;
}
