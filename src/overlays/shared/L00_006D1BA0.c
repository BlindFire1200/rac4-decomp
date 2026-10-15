#include "common.h"

typedef int u128 __attribute__((mode(TI)));

// Copy the 16-byte value at +0xA0 to +0x26F0 and raise both flags at +0x2C78/+0x2C7C.
void func_L00_006D1BA0(void *player) {
    u128 value = *(u128 *)((u32)player + 0xA0);
    *(s32 *)((u32)player + 0x2C78) = 1;
    *(u128 *)((u32)player + 0x26F0) = value;
    *(s32 *)((u32)player + 0x2C7C) = 1;
}
