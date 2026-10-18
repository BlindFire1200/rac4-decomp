#include "common.h"

extern void func_0049BFC0(s32, s32, s32, f32, f32, f32, f32);
extern void func_00504550(s32, void *, f32 *);
extern void func_00504648(s32, f32 *, f32 *);
extern void func_00505AD8(s32);
extern s32 func_00505B20(void);
void func_0049C158(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 values[4];
    s32 old_owner = func_00505B20();
    func_00505AD8(arg3 == 0 ? arg0 : 4);
    func_00504550(arg2, values, &values[1]);
    func_00504648(arg2, &values[2], &values[3]);
    func_0049BFC0(arg0, arg1, arg3, values[0], values[1], values[2], values[3]);
    func_00505AD8(old_owner);
}
