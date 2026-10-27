#include "common.h"

// Clear the halfword at offset 0xA of the object.
void func_00489E1C(s32 a0, u8 *a1) {
    *(volatile s16 *)(a1 + 0xA) = 0;
}
