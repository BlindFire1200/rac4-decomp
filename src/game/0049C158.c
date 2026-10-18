#include "common.h"

extern void func_0049BFC0(s32, s32, s32, f32, f32, f32, f32);
extern void func_00504550(s32, void *, f32 *);
extern void func_00504648(s32, f32 *, f32 *);
extern void func_00505AD8(s32);
extern s32 func_00505B20(void);

// Read two float pairs for the source, run func_0049BFC0 with them under a
// temporarily switched owner (param_a, or 4 when mode is nonzero), then restore
// the owner.
void func_0049C158(s32 param_a, s32 param_b, s32 source, s32 mode) {
    f32 coords[4];
    s32 saved_owner = func_00505B20();
    func_00505AD8(mode == 0 ? param_a : 4);
    func_00504550(source, coords, &coords[1]);
    func_00504648(source, &coords[2], &coords[3]);
    func_0049BFC0(param_a, param_b, mode, coords[0], coords[1], coords[2], coords[3]);
    func_00505AD8(saved_owner);
}
