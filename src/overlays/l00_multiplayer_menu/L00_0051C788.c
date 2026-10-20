#include "common.h"

// Increment +0x8 of the object at +0x4.

typedef struct Type2 {
    char _p0[0x8];
    s32 f8;
} Type2;

typedef struct Type1 {
    char _p0[0x4];
    Type2 * f4;
} Type1;

void func_L00_0051C788(Type1 *arg0) {
    arg0->f4->f8++;
}
