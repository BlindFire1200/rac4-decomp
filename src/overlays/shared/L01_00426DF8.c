#include "common.h"
extern void *func_L01_006B4FC0(void *, s32, s32, s32);
extern void func_L00_006EC318(void *, s32 *, s32);
void func_L01_00426DF8(u8 *arg0) {
    s32 values[2];
    u8 *obj;
    void *result;
    result = func_L01_006B4FC0(arg0, 1, 0, 0xFA);
    obj = *(u8 **)(arg0 + 0xAC);
    values[0] = *(s32 *)(obj + 0xC);
    func_L00_006EC318(result, &values[0], 4);
    values[1] = *(s32 *)(obj + 0x10);
    func_L00_006EC318(result, &values[1], 4);
}
