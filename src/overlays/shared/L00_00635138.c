#include "common.h"

void func_00501498(s32);                               /* extern */
void func_00505AD8(s32);                               /* extern */
s32 func_00505B20();                                /* extern */
void func_00505C90(s32);                               /* extern */
s32 func_L00_00631800();                            /* extern */

void func_L00_00635138(void) {
    s32 temp_s0;

    temp_s0 = func_00505B20();
    func_00505AD8(4);
    func_00501498(func_L00_00631800());
    func_00505C90(func_L00_00631800());
    func_00505AD8(temp_s0);
}
