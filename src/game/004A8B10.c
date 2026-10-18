#include "common.h"

extern u8 D_221650;
extern u8 func_00498100(s32);
extern s32 func_004A1A60(void *, s32);
extern s32 func_004A89E8(s32);
extern void func_00504F68(s32, s32);
extern void func_00505328(s32, s32);
extern void func_005054F8(s32, u16);
extern s32 func_00505B20(void);
extern void *func_00548D28(s32, s32);

void func_004A8B10(s32 arg0, s32 arg1) {
    s32 index = func_00505B20();
    s32 enabled;
    if (arg1 == 0) {
        func_00504F68(arg0, 0);
        return;
    }
    enabled = 0;
    if (func_00498100(index) == 0 || arg0 == func_004A1A60(&D_221650, 0x33)) enabled = 1;
    func_00504F68(arg0, enabled);
    func_00505328(arg0, func_004A89E8(arg1));
    func_005054F8(arg0, *(u16 *)((u8 *)func_00548D28(arg1, 0) + 0x36));
}
