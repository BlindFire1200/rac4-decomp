#include "common.h"

// Register the second menu callback for the current owner and resource id.
extern s32 func_0045E038(s32);
extern void func_00497980(s32);
extern void func_0049E790(s32, s32, void (*)(void *), s32, f32, s32, s32, s32);
extern s32 func_00505B20(void);
extern void func_004B7A68(void *);
void func_004B7B58(void) {
    s32 owner;
    func_00497980(0xB);
    owner = func_00505B20();
    func_0049E790(owner, func_0045E038(0x2F28), func_004B7A68, 3, -1.0f, 0, 0, 0);
}
