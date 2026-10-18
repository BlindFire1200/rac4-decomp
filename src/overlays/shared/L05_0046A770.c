#include "common.h"
typedef unsigned int u128 __attribute__((mode(TI)));
void func_L05_004675C0(s32, u128, u8, s32, s32);
void func_L05_0046A770(u8 *a0, s32 a1, s32 a2) {
    u8 *state = *(u8 **)(a0 + 0x18);
    u8 *record = *(u8 **)(state + 0x2EF4);
    if (record != 0) {
        func_L05_004675C0(*(s32 *)(record + 0x2B0), *(u128 *)(a0 + 0x40), a0[7], a2, *(s32 *)(a0 + 0x30));
    }
}
