#include "common.h"

// Register the menu callback for the current owner and resource id.
extern s32 func_0045E038(s32);
extern void func_00497980(s32);
extern void func_0049E790(s32, s32, void (*)(void *), s32, f32, s32, s32, s32);
extern s32 func_00505B20(void);
extern void func_004B7188(void *);
void func_004B71D0(void) {
    s32 owner;
    func_00497980(0xB);
    owner = func_00505B20();
    func_0049E790(owner, func_0045E038(0x2F27), func_004B7188, 3, -1.0f, 0, 0, 0);
}
