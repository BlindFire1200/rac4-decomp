#include "common.h"

extern void func_L00_006A99F8(void *, void *);
extern void func_L01_00591BD8(void *, s32, s32);

// When the linked +4 object is in state 1, call its +0x3C method with (0x1D, 1,
// 0, 1). If this object's state byte is 0, then run func_L00_006A99F8 and move
// to state 1 (-1).
void func_L01_0044ABC8(void *object) {
    u8 *linked = *(u8 **)(object + 0xAC);
    void *target = *(void **)(linked + 4);
    if (target && *(s32 *)((u8 *)target + 0x25CC) == 1) {
        void *methods = *(void **)((u8 *)target + 0x14);
        void (*callback)(void *, s32, s32, s32, s32) = *(void (**)(void *, s32, s32, s32, s32))((u8 *)methods + 0x3C);
        callback(target, 0x1D, 1, 0, 1);
    }
    if (*(u8 *)(object + 0x20) == 0) {
        func_L00_006A99F8(object, linked + 4);
        func_L01_00591BD8(object, 1, -1);
    }
}
