#include "common.h"

/* Stores arg1 at offsets 0, 8 and 0xC and arg2 at offset 4 of the object. */
void func_00142518(u8 *a0, s32 a1, s32 a2) {
    *(s32 *)(a0 + 0) = a1;
    *(s32 *)(a0 + 4) = a2;
    *(s32 *)(a0 + 8) = a1;
    *(s32 *)(a0 + 0xC) = a1;
}
