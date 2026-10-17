#include "common.h"
void func_L01_00465ED0(void *, s32, s32, s32);
void func_L01_00465F70(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *linked = *(u8 **)(arg0 + 0xAC);
    func_L01_00465ED0(arg0, linked[4], arg1, arg2);
    linked[4]++;
}
