#include "common.h"
extern void func_L00_0069C340(s32, f32 *, f32 *);
void func_L00_007109A8(void *arg0, f32 *arg1, f32 *arg2) {
    f32 x;
    f32 y;
    void *item;
    void *vtable;
    *arg1 = 0.0f;
    *arg2 = 0.0f;
    item = *(void **)((u8 *)arg0 + 0xC);
    if (item != 0) {
        vtable = *(void **)((u8 *)item + 0x58);
        ((void (**)(void *))((u8 *)vtable + 0x34))[0](item);
    }
    if (*(s32 *)((u8 *)arg0 + 0x14) != 0) {
        func_L00_0069C340(*(s32 *)((u8 *)arg0 + 0x14), &x, &y);
        *arg1 += x;
        *arg2 += y;
    }
}
