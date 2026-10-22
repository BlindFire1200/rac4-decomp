#include "common.h"

typedef struct {
    u8 f00[0x20];
    u8 f20;
    u8 f21[0x0F];
    u8 f30;
} Type1;

typedef Type1 Obj;

extern void func_00591BD8(Obj *o, u8 state, s32 type);

/* Sets the object's hidden flag to 0xFF and notifies it, unless the flag is already set. */
s32 func_L01_005154A0(Type1 *arg0) {
    s32 res;

    if (arg0->f20 == 0) {
        arg0->f30 = 0xFF;
        func_00591BD8(arg0, 1, -1);
        res = 1;
    } else {
        res = 0;
    }
    return res;
}
