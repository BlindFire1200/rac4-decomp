#include "common.h"
typedef unsigned int u128 __attribute__((mode(TI)));

void func_004E251C(s32 u0, s32 u1, u128 *a2, u8 *a3) {
    *(u128 *)(a3 + 0x20) = *a2;
}
