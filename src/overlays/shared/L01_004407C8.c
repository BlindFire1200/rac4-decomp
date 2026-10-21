#include "common.h"

typedef int u128 __attribute__((mode(TI)));

extern s32 D_00222B10;
void func_L01_00440260(u128 v, f32 a, f32 b, f32 c);
void func_L00_005B53C0(void *p, s32 a);
void func_L00_005B5140(void *p, s32 a, s32 b, s32 c);
void func_L00_005B57C0(void *p, s32 a, s32 b, s32 c);

// Passes a quadword and two floats on to func_L01_00440260, then configures D_00222B10.
void func_L01_004407C8(u128 *src, f32 a, f32 b) {
    func_L01_00440260(*src, a, a, b);
    func_L00_005B53C0(&D_00222B10, -2);
    func_L00_005B5140(&D_00222B10, 2, 2, 1);
    func_L00_005B57C0(&D_00222B10, 0xB, 1, 1);
}
