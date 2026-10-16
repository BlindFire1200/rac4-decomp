#include "common.h"
extern void func_L00_006A99F8(void *, void *);
extern void func_L01_00591BD8(void *, s32, s32);
void func_L01_0044ABC8(void *arg0) {
    u8 *state = *(u8 **)(arg0 + 0xAC);
    void *obj = *(void **)(state + 4);
    if (obj && *(s32 *)((u8 *)obj + 0x25CC) == 1) {
        void *vtable = *(void **)((u8 *)obj + 0x14);
        void (*callback)(void *, s32, s32, s32, s32) = *(void (**)(void *, s32, s32, s32, s32))((u8 *)vtable + 0x3C);
        callback(obj, 0x1D, 1, 0, 1);
    }
    if (*(u8 *)(arg0 + 0x20) == 0) {
        func_L00_006A99F8(arg0, state + 4);
        func_L01_00591BD8(arg0, 1, -1);
    }
}
