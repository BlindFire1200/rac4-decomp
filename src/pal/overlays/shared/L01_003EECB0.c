#include "common.h"

typedef int u128 __attribute__((mode(TI)));

typedef struct Sub {
    void *f0;
    f32 f4;
} Sub;

typedef struct Obj {
    char pad0[0x10];
    char f10[0x10];
    u8 f20;
    char pad21[0xF];
    u8 f30;
    u8 f31;
    u16 f32;
    u16 f34;
    char pad36[0x1E];
    u8 f54;
    char pad55[0x57];
    Sub *fAC;
    char padB0[0x10];
    u128 fC0;
    u128 fD0;
    u128 fE0;
} Obj;

extern Obj *func_L00_005DD000(s32, s32);
extern void func_L00_005DE048(void *, s32, void *);
extern void func_L00_005E3648(Obj *, s32, s32, s32);
extern void func_L00_005E4118(Obj *);
extern void func_L00_005E75B0(Obj *, s32, s32, f32);

Obj *func_L01_003EECB0(Obj *arg0, f32 arg1) {
    Obj *o;
    Sub *s;

    o = func_L00_005DD000(0x18E1, 0x80);
    if (o != NULL) {
        s = o->fAC;
        s->f4 = arg1;
        s->f0 = arg0;
        o->f30 = 0xFF;
        o->f32 = 0xFF;
        o->f31 = 1;
        func_L00_005E3648(o, 0x80, 0x80, 0x80);
        func_L00_005DE048(arg0, 0, o->f10);
        o->fC0 = arg0->fC0;
        o->fD0 = arg0->fD0;
        o->fE0 = arg0->fE0;
        if (o->f54 != 0) {
            func_L00_005E75B0(o, 0, 0x8, 0.0f);
        }
        func_L00_005E4118(o);
        o->f20 = 0;
        o->f34 |= 5;
    }
    return o;
}
