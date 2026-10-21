#include "common.h"

// Call method +0x34, then method +0x38 with two out words; return 1.

typedef struct Type1 Type1;

typedef struct Type2 {
    char _p0[0x34];
    void (*f34)(Type1 *arg0);
    void (*f38)(Type1 *arg0, s32 *arg1, s32 *arg2);
} Type2;

struct Type1 {
    char _p0[0x58];
    Type2 *f58;
};

s32 func_L00_00714150(Type1 *arg0) {
    s32 v[2];

    arg0->f58->f34(arg0);
    arg0->f58->f38(arg0, &v[0], &v[1]);
    return 1;
}
