#include "common.h"

u32 D_0021EEF0 = 0;

/* Returns 0 or (0x1D0000 - D_0021EEF0) >> 2. */
u32 func_0045E830(void) {
    u32 var_a0;

    var_a0 = 0;
    if (D_0021EEF0 <= 0x1CFFFF) {
        var_a0 = (0x1D0000 - D_0021EEF0) >> 2;
    }
    return var_a0;
}
