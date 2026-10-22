#include "common.h"

// Store a1 into the +0x14 field of the object func_01EA90F0 returns, when non-null.
void *func_01EA90F0(void);

void func_01EB32C8(s32 a0, s32 a1) {
    u8 *obj = (u8 *)func_01EA90F0();

    if (obj != NULL) {
        *(s32 *)(obj + 0x14) = a1;
    }
}
