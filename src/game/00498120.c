#include "common.h"

extern void *func_00510BE8();

// Returns the word at offset 0x2674 of the object from func_00510BE8, or the word at 0x268C when that is zero.
s32 func_00498120(void) {
    s32 var_v0;
    u8 *temp_v0;

    temp_v0 = func_00510BE8();
    var_v0 = *(s32 *)(temp_v0 + 0x2674);
    if (var_v0 == 0) {
        var_v0 = *(s32 *)(temp_v0 + 0x268C);
    }
    return var_v0;
}
