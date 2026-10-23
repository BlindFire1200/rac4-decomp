#include "common.h"

#include "common.h"

typedef int u128 __attribute__((mode(TI)));

// Copy 16 bytes from arg1 to arg0, with arg2's low half in the last word.
void func_0048EB98(u8 *arg0, u8 *arg1, s32 arg2) {
    u128 tmp;

    tmp = *(u128 *)arg1;
    *(s32 *)((u8 *)&tmp + 0xC) = arg2 & 0xFFFF;
    *(u128 *)arg0 = tmp;
}
