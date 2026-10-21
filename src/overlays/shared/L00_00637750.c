#include "common.h"

extern s32 D_00222770;

void func_00501498(s32);                               /* extern */
void func_00505AD8(s32);                               /* extern */
s32 func_00505B20();                                /* extern */
void func_00505C90(s32);                               /* extern */
s32 func_L00_006375C0(s32);                         /* extern */
extern s32 D_00222770;

void func_L00_00637750(s32 arg0) {
    s32 temp_s1;

    D_00222770 = D_00222770 | (1 << arg0);
    temp_s1 = func_00505B20();
    func_00505AD8(arg0);
    func_00501498(func_L00_006375C0(arg0));
    func_00505C90(func_L00_006375C0(arg0));
    func_00505AD8(temp_s1);
}
