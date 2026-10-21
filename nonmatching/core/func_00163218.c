/* Not matching yet: BYTES 1/116 (tools/try_func.py func_00163218 --diff). Not part of the build. */
#include "common.h"
extern u8 D_21DC18[];
extern u8 D_21DC20;
extern u8 D_21DC20_[];

s32 func_00163218(void) {
    s32 var_a0;
    s32 var_a1;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_a1 = -1;
    var_a0 = 0;
    if (D_21DC18[0] != 0) {
        goto block_3;
    }
    if (D_21DC20 != 0 ? (++var_a0, 1) : (++var_a0, 0)) {
        goto block_4;
    }
    var_a1 = 0;
    goto block_8;
block_3:
    var_a0 += 1;
block_4:
    if (var_a0 >= 3) {
        goto block_8;
    }
    if (D_21DC18[var_a0] != 0) {
        goto block_3;
    }
    if (D_21DC20_[var_a0] != 0) {
        goto block_3;
    }
    var_a1 = var_a0;
block_8:
    return var_a1;
}
