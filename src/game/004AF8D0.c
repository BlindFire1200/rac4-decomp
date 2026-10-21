#include "common.h"

extern s32 D_002216E0;

s32 func_004AF740(s32);                             /* extern */
void func_00501498(s32);                               /* extern */
void func_00505AD8(s32);                               /* extern */
s32 func_00505B20();                                /* extern */
void func_00505C90(s32);                               /* extern */
extern s32 D_002216E0;

void func_004AF8D0(s32 arg0) {
    s32 temp_s1;

    D_002216E0 = D_002216E0 | (1 << arg0);
    temp_s1 = func_00505B20();
    func_00505AD8(arg0);
    func_00501498(func_004AF740(arg0));
    func_00505C90(func_004AF740(arg0));
    func_00505AD8(temp_s1);
}
