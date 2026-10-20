#include "common.h"

// Call handler +0x18 of the table at +0x8 while +0x4 is clear, else return 0.

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

s32 func_L00_00541CB8(Type1 *arg0) {
    if (arg0->f8 == 0 || arg0->f8->f18 == 0 || arg0->f4 != 0) {
        return 0;
    }
    return arg0->f8->f18(arg0);
}
