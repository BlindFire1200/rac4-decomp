#include "common.h"

void func_00504550(s32, void *, f32 *);
void func_00504648(s32, f32 *, f32 *);
void func_004A0C68(s32, s32, f32, f32, f32, f32);

// Read two float pairs for the source (func_00504550 and func_00504648) and
// pass them with the two other arguments to func_004A0C68.
void func_004A0BF0(s32 param_a, s32 source, s32 param_b) {
    f32 x0;
    f32 y0;
    f32 x1;
    f32 y1;

    func_00504550(source, &x0, &y0);
    func_00504648(source, &x1, &y1);
    func_004A0C68(param_a, param_b, x0, y0, x1, y1);
}
