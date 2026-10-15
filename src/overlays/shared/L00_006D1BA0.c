#include "common.h"

typedef int u128 __attribute__((mode(TI)));

void func_L00_006D1BA0(void *arg0) {
    u128 value = *(u128 *)((u32)arg0 + 0xA0);
    *(s32 *)((u32)arg0 + 0x2C78) = 1;
    *(u128 *)((u32)arg0 + 0x26F0) = value;
    *(s32 *)((u32)arg0 + 0x2C7C) = 1;
}
