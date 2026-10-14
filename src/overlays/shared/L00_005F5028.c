#include "common.h"

extern s32 D_0021EBA0;

// Decrements a counter and clamps at 0
void func_L00_005F5028(void) {
    s32 val;

    val = D_0021EBA0 - 1;
    D_0021EBA0 = (val <= -1) ? 0 : val;
}
