#include "common.h"

// Store the word at +0x14 of the +0x18 block of arg0->0x38 into *arg1 when its word at +0x8 is zero; return that word.
s32 func_01E9D348(u8 *arg0, s32 *arg1) {
    s32 var_v1;
    u8 *temp_v0;

    temp_v0 = *(u8 **)(arg0 + 0x38);
    var_v1 = 0;
    *arg1 = 0;
    if (temp_v0 != NULL) {
        temp_v0 = *(u8 **)(temp_v0 + 0x18);
        var_v1 = *(s32 *)(temp_v0 + 0x8);
        if (var_v1 == 0) {
            *arg1 = *(s32 *)(temp_v0 + 0x14);
        }
    }
    return var_v1;
}
