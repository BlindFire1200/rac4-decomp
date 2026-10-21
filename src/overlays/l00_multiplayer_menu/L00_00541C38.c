#include "common.h"

// Call handler +0x10 of the table at +0x8: 0 without a table, 1 without the handler.

typedef struct Type1 Type1;

typedef struct Type2 {
    char _p0[0x10];
    s32 (*f10)(Type1 *arg0);
    s32 (*f14)(Type1 *arg0);
    s32 (*f18)(Type1 *arg0);
} Type2;

struct Type1 {
    s32 f0;
    s32 f4;
    Type2 *f8;
};

s32 func_L00_00541C38(Type1 *arg0) {
    if (arg0->f8 == 0) {
        return 0;
    }
    if (arg0->f8->f10 == 0) {
        return 1;
    }
    return arg0->f8->f10(arg0);
}
