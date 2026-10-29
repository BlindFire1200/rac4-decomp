#include "common.h"

/* Returns 1 when the byte at offset 0x54 shares a set bit with arg1, else 0. */
s32 func_0050E420(u8 *arg0, u8 arg1) {
    return (arg0[0x54] & arg1) != 0;
}
