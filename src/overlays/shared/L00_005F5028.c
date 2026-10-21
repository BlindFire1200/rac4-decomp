#include "common.h"

/* Defined in this file: retail reaches it through $gp outside a delay slot,
   which ps2eeas only does for data defined above (tools/ps2eeas_sdata.py). */
s32 D_0021EBA0 = 0;

// Decrements a counter and clamps at 0
void func_L00_005F5028(void) {
    s32 val;

    val = D_0021EBA0 - 1;
    D_0021EBA0 = (val <= -1) ? 0 : val;
}
