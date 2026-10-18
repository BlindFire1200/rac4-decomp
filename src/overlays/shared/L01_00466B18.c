#include "common.h"

typedef int u128 __attribute__((mode(TI)));

extern s32 func_L00_005A38F8(u128 *, u128 *, s32, u8 *, s32);
extern void func_L01_00465F70(u8 *object, s32 param_a, s32 param_b);
extern s32 func_L01_00466A48(s32, s32, u8 *);
extern s32 func_L01_00466A78(u8 *arg0, s32 arg1, s32 arg2);
extern u8 *D_00242358[];

void func_L01_00466B18(u8 *arg0, u128 arg1, u128 arg2, s32 arg3, u8 **list, s32 *count) {
    u8 *linked = *(u8 **)(arg0 + 0xAC);
    u8 *target;

    if (func_L00_005A38F8(&arg1, &arg2, 0x85, arg0, 0) == 0) {
        return;
    }
    target = D_00242358[0];
    if (func_L01_00466A78(target, (s32)list, *count) != 0) {
        return;
    }
    if (linked[4] >= 8) {
        return;
    }
    list[*count] = target;
    (*count)++;
    if (func_L01_00466A48((s32)(linked + 0x20), linked[4], target) != 0) {
        return;
    }
    func_L01_00465F70(arg0, (s32)target, *(s16 *)(target + 0xBC));
}
