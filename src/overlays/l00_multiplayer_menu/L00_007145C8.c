#include "common.h"

/* Sets three fields of the object at arg0 and calls the callback found at arg0->f58->fD4. */
void func_L00_007145C8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *obj;
    void (*cb)(void *, s32);
    *(s32 *)((u8 *)arg0 + 0x68) = arg2;
    *(s32 *)((u8 *)arg0 + 0x6C) = arg3;
    *(s32 *)((u8 *)arg0 + 0x70) = arg4;
    obj = *(void **)((u8 *)arg0 + 0x58);
    cb = *(void (**)(void *, s32))((u8 *)obj + 0xD4);
    cb(arg0, arg1);
}
