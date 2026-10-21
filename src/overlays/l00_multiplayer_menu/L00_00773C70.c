#include "common.h"

s32 func_15DB80(s32, s32);
s32 func_L00_007756D8(s32);
s32 func_L00_00775778(s32, s32, s32, s32);

// On the first call (flag +0x7A clear) take an amount from the +0x2C pool into
// +0x30, store the func_L00_00775778 result at +0x58 and raise the flag.
// Returns the stored +0x58 value (sibling of func_L00_00773BE0).
s32 func_L00_00773C70(void *object, s32 param_a, s32 param_b) {
    s32 amount;
    if (*(u8 *)((u8 *)object + 0x7A) == 0) {
        amount = func_L00_007756D8(*(s32 *)((u8 *)object + 0x30));
        *(s32 *)((u8 *)object + 0x58) = func_L00_00775778(func_15DB80(0x34, *(s32 *)((u8 *)object + 0x30)), amount, param_a, param_b);
        *(s32 *)((u8 *)object + 0x2C) -= amount;
        *(s32 *)((u8 *)object + 0x30) += amount;
        *(u8 *)((u8 *)object + 0x7A) = 1;
    }
    return *(s32 *)((u8 *)object + 0x58);
}
