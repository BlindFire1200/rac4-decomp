#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

/* Builds a 4-word block whose first word is arg0 and hands it to func_00158C60 with arg1/arg2. */
void func_00159398(s32 arg0, s32 arg1, s32 arg2) {
    s32 l[4];
    l[0] = arg0;
    func_00158C60(0x4F, 4, l, arg1, arg2);
}
