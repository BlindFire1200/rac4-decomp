#include "common.h"

typedef int u128 __attribute__((mode(TI)));

extern void func_L00_005DE048(void *, s32, void *);

void func_L01_004892F0(void *arg0, u128 *arg1) {
    u8 *s0 = *(u8 **)((u8 *)arg0 + 0xAC);
    void *a0 = *(void **)(s0 + 0x88);
    if (a0 != 0) {
        func_L00_005DE048(a0, *(s32 *)(s0 + 0x8C), arg1);
        *(u128 *)(s0 + 0xC0) = *arg1;
    } else {
        *arg1 = *(u128 *)(s0 + 0xC0);
    }
}
