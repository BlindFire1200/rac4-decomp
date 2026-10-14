#include "common.h"

typedef int u128 __attribute__((mode(TI)));

// Copy 128-bit value and set flags
void func_L00_006D1BA0(void *arg0) {
    u128 val;

    val = *(u128 *)((u32)arg0 + 0xA0);
    *(u128 *)((u32)arg0 + 0x26F0) = val;
    *(s32 *)((u32)arg0 + 0x2C7C) = 1;
    *(s32 *)((u32)arg0 + 0x2C78) = 1;
}
