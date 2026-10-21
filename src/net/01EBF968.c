#include "common.h"

void func_01EBF968(u8 *a0, u8 *a1) {
    *(s32 *)(a1 + 0x8C) = *(s32 *)(a0 + 0xC);
    *(s32 *)(a0 + 0xC) = (s32)a1;
}
