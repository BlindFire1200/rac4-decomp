#include "common.h"

s32 D_00220DA0 = 0;
extern u8 D_345CC0[];

// Returns the table entry for arg0 when arg0 is below D_00220DA0, otherwise NULL.
void *func_0053CC58(s32 arg0) {
    void *var_v1;

    var_v1 = NULL;
    if (arg0 < D_00220DA0) {
        var_v1 = D_345CC0 + arg0 * 0x340;
    }
    return var_v1;
}
