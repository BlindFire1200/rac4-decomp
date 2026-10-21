#include "common.h"

void func_00497980();                                 /* extern */
void func_00501498(s32);                               /* extern */
void func_00505AD8(s32);                               /* extern */
s32 func_00505B20();                                /* extern */
void func_00505C90(s32);                               /* extern */
s32 func_L00_00660B98(s32);                         /* extern */

void func_L00_00660D10(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_00505B20();
    func_00505AD8(arg0);
    func_00501498(func_L00_00660B98(arg0));
    func_00505C90(func_L00_00660B98(arg0));
    func_00505AD8(temp_s1);
    func_00497980(0xB);
}
