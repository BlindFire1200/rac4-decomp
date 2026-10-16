#include "common.h"

extern void *func_L00_005BD3C0(s32);
extern s32 func_L00_0066D220(s32, s32, void *);
extern s32 func_L00_0066D2C8(s32, s32, void *, s32);

// Ensure the linked object has an active handle at +0x28: when the current one
// is missing or not owned/active, create a new one (type depends on 0x2490).
void func_L07_0049A3A0(void *object) {
    u8 *linked = *(u8 **)(object + 0xAC);
    s32 active = 0;
    void *handle_info = func_L00_005BD3C0(*(s16 *)(linked + 0x28));
    if (handle_info && object == *(void **)((u8 *)handle_info + 0x1C)) active = *(u8 *)((u8 *)handle_info + 0x10) != 0;
    if (!active) {
        if (*(s16 *)(object + 0xBC) == 0x2490)
            *(s32 *)(linked + 0x28) = func_L00_0066D220(0, 4, object);
        else
            *(s32 *)(linked + 0x28) = func_L00_0066D2C8(1, 4, object, 0x2490);
    }
}
