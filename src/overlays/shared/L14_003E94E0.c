#include "common.h"

extern void func_L00_005E7538(void *, s32, f32);
extern void func_L01_00591BD8(void *, s32, s32);
s32 func_L14_003E8F38(void *);

/* Reset the state record, copy its current field, and advance the object. */
s32 func_L14_003E94E0(void *object) {
    void *state = *(void **)((u8 *)object + 0xAC);
    if (state != 0) {
        *(s32 *)((u8 *)state + 0) = 0;
        *(s32 *)((u8 *)state + 0x14) = -1;
        *(s32 *)((u8 *)state + 0x18) = func_L14_003E8F38(object);
        *(s32 *)((u8 *)state + 0x1C) = func_L14_003E8F38(object);
    }
    *(s32 *)((u8 *)object + 0x98) = *(s32 *)(*(u8 **)((u8 *)object + 0x24) + 0x10);
    func_L00_005E7538(object, 0, 0.0f);
    func_L01_00591BD8(object, 2, 0);
    return 1;
}
