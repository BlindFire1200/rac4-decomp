#include "common.h"

extern s32 D_0021F198;

void func_0049B208(s32);                               /* extern */
s32 func_00505B20();                                /* extern */
extern s8 D_0021F938;

void func_004BD980(void) {
    s32 temp_a0;

    temp_a0 = func_00505B20();
    if (D_0021F198 != -1) {
        D_0021F938 = 0;
        func_0049B208(temp_a0);
    }
}
