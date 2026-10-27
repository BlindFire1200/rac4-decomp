#include "common.h"

/* Returns nonzero when the words at offsets 0xC and 0x10 are equal. */
s32 func_004F22D8(s32 *arg0) {
    return arg0[3] == arg0[4];
}
