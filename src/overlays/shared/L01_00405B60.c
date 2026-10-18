#include "common.h"
extern void func_L00_005B0038(void *, void *, void *);
extern s32 func_L00_005BC9B8(void *);
extern s32 func_L00_005DD4A0(void *);
extern s32 D_00222A9C;
extern void func_L01_00405BD0(void *);
void func_L01_00405B60(u8 *arg0) {
    u8 *obj = *(u8 **)(arg0 + 0xAC);
    if (func_L00_005BC9B8(obj) == 0) {
        func_L00_005BC9B8(obj + 4);
        func_L00_005B0038(&D_00222A9C, func_L01_00405BD0, arg0);
        return;
    }
    func_L00_005DD4A0(arg0);
}
