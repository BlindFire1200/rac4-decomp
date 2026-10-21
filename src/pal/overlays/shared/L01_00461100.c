#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
typedef struct Type3 Type3;
typedef struct Type4 { char _p0[0x48]; s32 f48[1]; } Type4;
struct Type3 {
    char _p0[0x44];
    f32 f44;
    char _p48[0xC];
    u8 f54;
};
struct Type2 {
    char _p0[0x25CC];
    s32 f25CC;
    char _p25D0[0x920];
    Type3 *f2EF0;
};
struct Type1 {
    char _p0[0x24];
    Type4 *f24;
    char _p28[0x18];
    s32 f40;
    f32 f44;
    char _p48[0xC];
    u8 f54;
    char _p55[0x3B];
    s32 f90;
};

extern void func_00474148(void *, s32, s32, f32);
extern void *func_00512138(s32);

/* Pick an animation for the object from its linked owner's state. */
void func_L01_00461100(Type1 *arg0) {
    Type2 *owner;
    s32 anim;

    owner = func_00512138(arg0->f90);
    if (owner != 0) {
        if (owner->f25CC == 0x37) {
            anim = 0xB;
            if (owner->f2EF0->f54 == 0x1E) {
                anim = 0x12;
            }
            if (anim == 0x12 || anim == 0x13) {
                arg0->f40 = arg0->f24->f48[anim];
                arg0->f44 = owner->f2EF0->f44;
            } else {
                func_00474148(arg0, anim, 6, 0.0f);
            }
        } else {
            u8 st = arg0->f54;
            if (st == 0xB || st == 0x13 || st == 0x12) {
                func_00474148(arg0, 1, 0xE, 0.0f);
            }
        }
    }
}
