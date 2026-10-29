#include "common.h"

extern u8 D_307074[];
extern u8 D_307220[];

// Returns the flag byte of the entry for index (D_307074 for 4, else D_307220 with 0x200 bytes each).
u8 func_0049EFE0(s32 arg0) {
    u8 *var_v0;

    if (arg0 == 4) {
        var_v0 = D_307074;
    } else {
        var_v0 = D_307220 + (arg0 << 9);
    }
    return *var_v0;
}
