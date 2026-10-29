/* Set the gp-relative byte flag to 1, then pass the helper result and 23 to another helper. */
#include "common.h"

s32 func_0049BED8(s32, s32);
s32 func_00506BB8();
extern s8 D_0021FCB9;

void func_004D8728(void) {
    D_0021FCB9 = 1;
    func_0049BED8(func_00506BB8(), 0x17);
}
