#include "common.h"

extern u8 D_21DC18[];
extern u8 D_21DC20[3];

/* Returns the first of three slots whose two flag bytes are both clear, or -1. */
s32 func_00163218(void) {
    s32 ret = -1;
    s32 i;

    for (i = 0; i < 3; i++) {
        if (D_21DC18[i] == 0 && D_21DC20[i] == 0) {
            ret = i;
            break;
        }
    }
    return ret;
}
