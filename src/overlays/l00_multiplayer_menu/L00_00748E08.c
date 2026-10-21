#include "common.h"

// Call method +0xF0 of the object at +0xB8 with +0x260.

typedef struct Type3 Type3;

typedef struct Type2 {
    char _p0[0xF0];
    void (*fF0)(Type3 *arg0, s32 arg1);
} Type2;

struct Type3 {
    char _p0[0x58];
    Type2 *f58;
};

typedef struct Type1 {
    char _p0[0xB8];
    Type3 *fB8;
    char _pBC[0x260 - 0xBC];
    s32 f260;
} Type1;

void func_L00_00748E08(Type1 *arg0) {
    Type3 *o = arg0->fB8;

    o->f58->fF0(o, arg0->f260);
}
