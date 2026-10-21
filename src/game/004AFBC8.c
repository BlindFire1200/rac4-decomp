#include "common.h"

extern s32 D_00221708;

s32 func_004AFA38(s32);                             /* extern */
void func_00501498(s32);                               /* extern */
void func_00505AD8(s32);                               /* extern */
s32 func_00505B20();                                /* extern */
void func_00505C90(s32);                               /* extern */
extern s32 D_00221708;

void func_004AFBC8(s32 arg0) {
    s32 temp_s1;

    D_00221708 = D_00221708 | (1 << arg0);
    temp_s1 = func_00505B20();
    func_00505AD8(arg0);
    func_00501498(func_004AFA38(arg0));
    func_00505C90(func_004AFA38(arg0));
    func_00505AD8(temp_s1);
}
