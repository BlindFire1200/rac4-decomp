#include "common.h"

extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L13_00556EA0(s32, s32);

/* Apply each valid enabled-state list, then enter state three. */
void func_L13_0046D498(void *object) {
    u8 *state = *(u8 **)((u8 *)object + 0xAC);
    s32 value;
    value = *(s32 *)(state + 0x8);
    if (value >= 0) func_L13_00556EA0(value, 1);
    value = *(s32 *)(state + 0xC);
    if (value >= 0) func_L13_00556EA0(value, 0);
    value = *(s32 *)(state + 0x10);
    if (value >= 0) func_L13_00556EA0(value, 1);
    value = *(s32 *)(state + 0x14);
    if (value >= 0) func_L13_00556EA0(value, 0);
    func_L01_00591BD8(object, 3, -1);
}
