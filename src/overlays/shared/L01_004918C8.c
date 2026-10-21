#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern void func_L00_005E7538(void *, s32, f32);
extern void func_L01_0056E200(void *, void *, s32);
extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L01_005A8A28(void *);
extern u8 *D_00222C18;

// Save the object's transform and choose an action from its six event bytes.
void func_L01_004918C8(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    u8 *events;
    s32 index;

    *(u128 *)(linked + 0x4C0) = *(u128 *)((u8 *)object + 0x10);
    func_L00_005E7538(object, 0, 0.0f);
    func_L01_005A8A28(object);
    *(s32 *)(linked + 0x334) = 0;
    *(s32 *)(linked + 0x33C) = 3;
    events = linked + 0x484;
    for (index = 0; index < 6; index++) {
        if (events[index] == 10) {
            s32 count = *(s32 *)(linked + 0x80);
            u8 *base = D_00222C18;
            s32 offset = count * 0x30 + 0x20;
            func_L01_0056E200(base + offset, linked + 0x4D0, 0);
            func_L01_00591BD8(object, 7, -1);
            return;
        }
    }
    func_L01_00591BD8(object, 1, -1);
}
