#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern void func_L01_00472338(void *, u128, f32, f32, f32);
extern void func_L00_005B53C0(void *, s32);
extern void func_L00_005B5140(void *, s32, s32, s32);
extern void func_L00_005B57C0(void *, s32, s32, s32);
extern s32 D_00222B10;

void func_L01_004728C8(void *object, u128 *position, f32 x, f32 y) {
    func_L01_00472338(object, *position, x, x, y);
    func_L00_005B53C0(&D_00222B10, -2);
    func_L00_005B5140(&D_00222B10, 2, 2, 1);
    func_L00_005B57C0(&D_00222B10, 0xB, 1, 1);
}
