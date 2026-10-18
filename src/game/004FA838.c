#include "common.h"

extern void func_004F6EF8(s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_004F7AC0(s32, s32, s32, s32);
extern s32 D_0021DEDC;
extern s32 D_0021DEF0;
extern s32 D_0021DEF4;

// Run func_004F6EF8 twice with the sizes 0x40 and 0x80 / 0x80 and 0x100 over
// the D_0021DEDC, D_0021DEF4 and D_0021DEF0 values, then func_004F7AC0.
void func_004FA838(s32 param_a, s32 param_b) {
    func_004F6EF8(param_a, param_b, D_0021DEDC, 0x40, 0x40, D_0021DEF4, 0x80, 0x80);
    func_004F6EF8(param_a, param_b, D_0021DEF4, 0x80, 0x80, D_0021DEF0, 0x100, 0x100);
    func_004F7AC0(param_a, param_b, D_0021DEF0, D_0021DEF4);
}
