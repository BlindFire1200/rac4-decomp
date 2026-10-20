#include "common.h"

// Call method +0x12C of the table at +0x58 with (0, 0).

typedef struct Type1 Type1;

typedef struct Type2 {
    char _p0[0x12C];
    void (*f12C)(Type1 *arg0, s32 arg1, s32 arg2);
} Type2;

struct Type1 {
    char _p0[0x58];
    Type2 *f58;
};

void func_L00_007131A8(Type1 *arg0) {
    arg0->f58->f12C(arg0, 0, 0);
}
