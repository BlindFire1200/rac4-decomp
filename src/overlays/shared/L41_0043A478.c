#include "common.h"

extern s32 D_00172378_[];
#define D_00172378 (D_00172378_[0])
extern void func_L00_005DD4A0(void *);
extern void func_L00_005E77D0(void *, s32, s32);
extern s32 func_L00_006A91D0(s32);
extern void func_L00_006EC390(s32 *, void *, s32);
extern void func_L41_0043A960(void *);
extern void func_L41_0043B330(void *object);
extern void func_L41_0043B3B8(void *, s32, s32);
extern void func_L41_0043BB28(void *, s32);
extern void func_L41_0043C088(void *object);
extern s16 func_L41_0058F9B8(s32 index, s32 arg1, s32 arg2, s32 arg3);

// Handle an incoming message by its type nibble: sync state, update target, or destroy.
void func_L41_0043A478(void *object, s32 *msg) {
    s32 value;
    s32 r;
    char *linked = *(char **)((char *)object + 0xAC);
    switch ((u32)*msg & 0xF) {
    case 0:
        func_L00_006EC390(msg, linked, 4);
        if (*(s32 *)linked == 0) {
            func_L00_005DD4A0(object);
            return;
        }
        func_L41_0043B330(object);
        func_L41_0043A960(object);
        return;
    case 1:
        func_L00_006EC390(msg, &value, 4);
        r = func_L00_006A91D0(value);
        *(s32 *)(linked + 0x14) = value;
        if ((u32)(*(u8 *)((char *)object + 0x20) - 1) < 2) {
            func_L41_0043BB28(object, r);
        }
        func_L41_0043B330(object);
        func_L41_0043C088(object);
        *(s32 *)(linked + 0x10) = D_00172378;
        func_L00_005E77D0(object, 3, -1);
        return;
    case 2:
        func_L41_0043B3B8(object, -1, 0);
        func_L41_0058F9B8(0x15, 0, (s32)object, 0);
        return;
    }
}
