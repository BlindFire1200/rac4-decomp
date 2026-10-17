#include "common.h"

void func_00504550(s32, void *, f32 *);
void func_00504648(s32, f32 *, f32 *);
void func_0049DE38(s32, s32, f32, f32, f32, f32);

void func_0049DF30(s32 arg0, s32 arg1, s32 arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;

    func_00504550(arg2, &sp0, &sp4);
    func_00504648(arg2, &sp8, &spC);
    func_0049DE38(arg0, arg1, sp0, sp4, sp8, spC);
}
