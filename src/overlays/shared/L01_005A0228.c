/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x60];
    s32 f60;
};

s32 func_L01_005A01A8(s32, s32, s32);

void func_L01_005A0228(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->f60 = func_L01_005A01A8(arg1, arg2, arg3);
}
