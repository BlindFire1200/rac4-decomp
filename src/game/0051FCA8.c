/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x2EF0];
    s32 f2EF0;
};

s32 func_004E1F90(s32, s32, s32);

void func_0051FCA8(Type1 *arg0, s32 arg1, s32 arg2) {
    func_004E1F90(arg1, arg2, arg0->f2EF0);
}
