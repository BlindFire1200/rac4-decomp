#include "common.h"

extern s32 D_00171948[];
extern void func_00464AF8(int);

/* Sets array fields to -1 and calls func_00464AF8. */
void func_00464E50(void) {
    s32 val = -1;
    s32 *ptr = (s32 *)D_00171948;
    ptr[0x1CC / 4] = val;
    ptr[0x1D0 / 4] = val;
    func_00464AF8(6);
}
