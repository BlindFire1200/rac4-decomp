#include "common.h"

extern u8 D_00172A38[];

/* Return nonzero when the byte at D_00172A38 is set. */
s32 func_0015C818(void) {
    return D_00172A38[0] != 0;
}
