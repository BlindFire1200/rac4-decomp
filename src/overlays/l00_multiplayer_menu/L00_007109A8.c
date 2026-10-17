#include "common.h"

extern void func_L00_0069C340(s32, f32 *, f32 *);

// Return the object's x/y offset through the two out pointers: zero them, run
// the method at +0x34 of the vtable of the item at +0xC (when set), then add
// the position func_L00_0069C340 gives for the handle at +0x14 (when set).
void func_L00_007109A8(void *object, f32 *out_x, f32 *out_y) {
    f32 x;
    f32 y;
    void *item;
    void *vtable;
    *out_x = 0.0f;
    *out_y = 0.0f;
    item = *(void **)((u8 *)object + 0xC);
    if (item != 0) {
        vtable = *(void **)((u8 *)item + 0x58);
        ((void (**)(void *))((u8 *)vtable + 0x34))[0](item);
    }
    if (*(s32 *)((u8 *)object + 0x14) != 0) {
        func_L00_0069C340(*(s32 *)((u8 *)object + 0x14), &x, &y);
        *out_x += x;
        *out_y += y;
    }
}
