#include "common.h"

extern void func_L00_005E77D0(void *, s32, s32);
extern s32 func_L00_0066D220(s32, s32, void *);
extern s32 func_L00_006A91D0(s32);
extern void func_L00_006EC390(s32 *, void *, s32);
extern s32 D_00172378_[];
#define D_00172378 (D_00172378_[0])

// Read a handle from the message and arm the linked +0xAC object with it.
void func_L41_003DCD00(u8 *object, s32 *msg) {
    u8 *target = *(u8 **)(object + 0xAC);
    s32 local;
    s32 h;

    if (!(*msg & 0xF) && object[0x20] != 2) {
        func_L00_006EC390(msg, &local, 4);
        h = func_L00_006A91D0(local);
        *(s32 *)(target + 0x8) = 1;
        *(s32 *)(target + 0x5C) = D_00172378;
        *(s32 *)(target + 0xC) = h;
        func_L00_0066D220(0, 0, object);
        func_L00_005E77D0(object, 2, -1);
    }
}
