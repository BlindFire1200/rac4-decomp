#include "common.h"

extern void func_L02_004C6950(void *, void *);
extern void func_00524030(s32, s32, s32, s32, f32);
extern void func_004E2EF0(s32, s32, void *);
extern void func_00474368(void *, s32, s32);

// Calls func_L02_004C6950(arg0, vars), then func_00524030 on the +0x2B8 word of the object at
// vars + 0x170 with 0x24 and 8.0, sets the float at vars + 0x1F8 to 1.0, and calls
// func_004E2EF0(2, 0, arg0) and func_00474368(arg0, 4, -1).
void func_L02_004CCEC8(u8 *arg0) {
    u8 *vars = *(u8 **)(arg0 + 0xAC);
    s32 target = *(s32 *)(*(u8 **)(vars + 0x170) + 0x2B8);

    func_L02_004C6950(arg0, vars);
    func_00524030(target, 0x24, 0, 0, 8.0f);
    *(f32 *)(vars + 0x1F8) = 1.0f;
    func_004E2EF0(2, 0, arg0);
    func_00474368(arg0, 4, -1);
}
