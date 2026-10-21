#include "common.h"

// Call methods +0x7C and +0xA0 (with 1) of the object at +0xD4.

typedef struct Type3 Type3;

typedef struct Type2 {
    char _p0[0x7C];
    void (*f7C)(Type3 *arg0);
    char _p80[0xA0 - 0x80];
    void (*fA0)(Type3 *arg0, s32 arg1);
} Type2;

struct Type3 {
    char _p0[0x58];
    Type2 *f58;
};

typedef struct Type1 {
    char _p0[0xD4];
    Type3 *fD4;
} Type1;

void func_L00_0075CA50(Type1 *arg0) {
    arg0->fD4->f58->f7C(arg0->fD4);
    arg0->fD4->f58->fA0(arg0->fD4, 1);
}
