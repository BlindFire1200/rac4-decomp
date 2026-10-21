#include "common.h"

extern s32 D_0021DF64;

void func_L01_0064EEA8();                              /* extern */

void func_L01_0064EF90(s32 arg0) {
    s32 temp_s0;

    temp_s0 = D_0021DF64;
    if (arg0 < temp_s0) {
        D_0021DF64 = arg0;
    }
    func_L01_0064EEA8();
    D_0021DF64 = temp_s0;
}
