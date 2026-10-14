/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x4];
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
};

void func_00510A78(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->f4 = arg2;
    arg0->f8 = arg3;
    arg0->fC = arg1;
    arg0->f14 = 0;
    arg0->f18 = 0;
    arg0->f10 = 0;
}
