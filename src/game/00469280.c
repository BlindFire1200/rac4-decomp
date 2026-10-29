#include "common.h"

extern s32 D_00171948[];

/* Check if D_00171948[0x1C4/4] < 3 and D_00171948[0x1CC/4] < 0, return *arg0 or -1 */
s32 func_00469280(s32 *arg0) {
    if (D_00171948[0x1C4 / 4] < 3 && D_00171948[0x1CC / 4] < 0) {
        return *arg0;
    }
    return -1;
}
