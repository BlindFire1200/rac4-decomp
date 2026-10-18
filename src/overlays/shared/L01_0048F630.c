#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);

void func_L01_0048F630(u8 *object) {
    u8 *linked = *(u8 **)(object + 0xAC);
    u128 pos = *(u128 *)(object + 0x10);
    *(u128 *)(linked + 0x0) = pos;
    *(s32 *)(linked + 0x10) = 0;
    *(s32 *)(linked + 0x14) = 0;
    *(u8 *)(object + 0x31) = 0;
    *(s32 *)(object + 0x98) = 0;
    *(u16 *)(object + 0x34) |= 1;
    func_L01_00591BD8(object, 1, -1);
}
