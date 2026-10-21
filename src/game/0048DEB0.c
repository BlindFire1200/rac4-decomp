#include "common.h"
typedef unsigned int u128 __attribute__((mode(TI)));

s32 func_0048DEB0(u8 *a0, u128 *a1) {
    *(u128 *)(a0 + 0x20) = *a1;
    return 1;
}
