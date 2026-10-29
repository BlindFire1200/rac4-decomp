#include "common.h"

extern s32 D_00171948[];

/* Check if D_00171948[0x1CC/4] >= 0, if not reset it to 0x20 and clear unk1D0, return whether it equals 0x20 */
s32 func_004690E8(void) {
    s32 val = D_00171948[0x1CC / 4];

    if (val < 0) {
        D_00171948[0x1D0 / 4] = 0;
        D_00171948[0x1CC / 4] = 0x20;
    }

    return D_00171948[0x1CC / 4] == 0x20;
}
