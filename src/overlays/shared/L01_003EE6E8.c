#include "common.h"

typedef int u128 __attribute__((mode(TI)));

typedef struct Obj {
    char pad0[0x10];
    u128 f10;
    u8 f20;
    char pad21[0xB];
    u8 f2C;
    char pad2D[0x7F];
    void *fAC;
    char padB0[0x50];
} Obj;

typedef struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10[4];
    Obj *f20[4];
} Type1;

typedef struct Type2 {
    char pad0[0x3C];
    Obj *f3C;
} Type2;

extern s32 func_L00_005BC980(void *p);
extern void func_L00_005DD4A0(Obj *o);
extern s32 func_L00_005E8F08(Obj *o, s32 a, s32 b);
typedef struct Type3 {
    Obj *f0;
} Type3;

extern Type3 D_00222D14;
extern Type2 D_002423C0[];
s32 D_00220E58 = 0;
s32 D_00220E5C = 0;

/* Two-state update: set up four object links, then count down and flag linked objects. */
void func_L01_003EE6E8(Obj *o) {
    Type1 *s = o->fAC;
    s32 r;
    s32 i;

    switch (o->f20) {
    case 0:
        o->f20 = 1;
        s->f4 = D_00220E58;
        s->f8 = 3;
        s->f20[0] = &D_00222D14.f0[s->f10[0]];
        s->f20[1] = &D_00222D14.f0[s->f10[1]];
        s->f20[2] = &D_00222D14.f0[s->f10[2]];
        s->f20[3] = &D_00222D14.f0[s->f10[3]];
        break;
    case 1:
        if (o->f2C == 0xFF || ((Type2 *)((o->f2C << 6) + (u32)D_002423C0))->f3C != o) {
            r = 0;
        } else {
            r = func_L00_005E8F08(o, 0x800, 0);
        }
        func_L00_005BC980(&s->fC);
        if (r != 0 && s->fC == 0) {
            o->f2C = 0xFF;
            s->fC = D_00220E5C;
            if (--s->f8 <= 0) {
                func_L00_005DD4A0(o);
                return;
            }
        }
        if (s->f20[0]->f20 == 0x50 || s->f20[1]->f20 == 0x50 ||
            s->f20[2]->f20 == 0x50 || s->f20[3]->f20 == 0x50) {
            if (func_L00_005BC980(&s->f4) != 0) {
                s->f4 = D_00220E58;
                for (i = 0; i < 4; i++) {
                    if (s->f20[i]->f20 == 0x50) {
                        s->f20[i]->f20 = 0x51;
                        s->f20[i]->f10 = o->f10;
                        s->f20[i]->f2C = 0xFF;
                        return;
                    }
                }
            }
        }
        break;
    }
}
