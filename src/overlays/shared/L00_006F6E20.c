#include "common.h"

typedef int u128 __attribute__((mode(TI)));

extern void (*D_0036C6F0[])(void *, u128, s32);

void func_L00_006F6E20(u128 *arg0, u8 *arg1, s32 arg2) {
    void (*handler)(void *, u128, s32) = D_0036C6F0[*(s16 *)(arg1 + 0xC)];
    if (handler != 0) {
        handler(arg1, *arg0, arg2);
    }
}
