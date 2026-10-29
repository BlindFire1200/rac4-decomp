#include "common.h"

// Store the byte in the record behind a0 when it is below 0x3D; return 1 if stored.
s32 func_00500E00(u8 *a0, u32 a1) {
    s32 var_v1;

    var_v1 = 0;
    if (a1 < 0x3DU) {
        var_v1 = 1;
        *(u8 *)(*(u8 **)(a0 + 4) + 0x84) = a1;
    }
    return var_v1;
}
