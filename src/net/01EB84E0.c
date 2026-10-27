#include "common.h"

// Stores the halfword arg1 at offset 0x19C of arg0; returns 2 if arg0 is null, else 0.
s32 func_01EB84E0(u8 *arg0, s32 arg1) {
    s32 res = 2;

    if (arg0) {
        *(s16 *)(arg0 + 0x19C) = arg1;
        res = 0;
    }
    return res;
}
