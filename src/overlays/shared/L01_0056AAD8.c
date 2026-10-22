#include "common.h"

typedef int u128 __attribute__((mode(TI)));

// Clears the 16-byte field at +0x1D0 and the 32-bit field at +0x1F4, then copies the byte at +0x1E1 to +0x1E2.
void func_L01_0056AAD8(u8 *arg0) {
    if (arg0 != 0) {
        *(u128 *)(arg0 + 0x1D0) = 0;
        *(s32 *)(arg0 + 0x1F4) = 0;
        arg0[0x1E2] = arg0[0x1E1];
    }
}
