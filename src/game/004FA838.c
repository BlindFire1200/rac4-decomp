#include "common.h"
extern void func_004F6EF8(s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_004F7AC0(s32, s32, s32, s32);
extern s32 D_0021DEDC;
extern s32 D_0021DEF0;
extern s32 D_0021DEF4;
void func_004FA838(s32 arg0, s32 arg1) {
    func_004F6EF8(arg0, arg1, D_0021DEDC, 0x40, 0x40, D_0021DEF4, 0x80, 0x80);
    func_004F6EF8(arg0, arg1, D_0021DEF4, 0x80, 0x80, D_0021DEF0, 0x100, 0x100);
    func_004F7AC0(arg0, arg1, D_0021DEF0, D_0021DEF4);
}
