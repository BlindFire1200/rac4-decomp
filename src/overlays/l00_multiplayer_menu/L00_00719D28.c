#include "common.h"

// When there is an object at +0xEC, store arg1 at its +0x284 and call func_L00_00719880(arg0, 0x22).

typedef struct Type2 {
    char _p0[0x284];
    s32 f284;
} Type2;

typedef struct Type1 {
    char _p0[0xEC];
    Type2 * fEC;
} Type1;

extern void func_L00_00719880(Type1 *arg0, s32 arg1);

void func_L00_00719D28(Type1 *arg0, s32 arg1) {
    Type2 *o = arg0->fEC;

    if (o != 0) {
        o->f284 = arg1;
        func_L00_00719880(arg0, 0x22);
    }
}
