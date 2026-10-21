#include "common.h"

typedef int u128 __attribute__((mode(TI)));

typedef struct {
    u8 pad0[0x10];
    u8 f10;
    u8 pad11[0x20 - 0x11];
    u128 f20;
    u8 pad30[0x40 - 0x30];
    void *f40;
} Type2;

typedef struct {
    s32 f0;
    s32 f4;
} Type1;

typedef struct {
    u8 pad0[8];
    Type1 *f8;
} Type0;

extern Type2 *func_L00_005BD3C0(s16);
extern void func_L00_0066CD78(s32);
extern s32 func_L00_0066D510(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern u128 D_0022C9C0[];
extern s32 D_0022CEE0[];

void func_L00_00592378(Type0 *self) {
    Type1 *sub = self->f8;
    Type2 *obj;
    s32 active;

    if (func_L00_005BD3C0(sub->f4) != NULL) {
        u128 *src = D_0022C9C0;
        obj = func_L00_005BD3C0(sub->f4);
        if (obj != NULL) {
            obj->f20 = *src;
        }
    }
    active = 0;
    obj = func_L00_005BD3C0(sub->f4);
    if (obj != NULL && self == obj->f40) {
        active = obj->f10 != 0;
    }
    if (D_0022CEE0[0] != 0) {
        if (!active) {
            sub->f4 = func_L00_0066D510(sub->f0, 0x15, (s32)self, 0x400);
        }
    } else if (active) {
        func_L00_0066CD78(sub->f4);
        sub->f4 = -1;
    }
}
