/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x14];
    s32 f14;
};

s32 func_0069C438(s32);

void func_L00_00710A38(Type1 *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_a0;

    *arg1 = 0;
    *arg2 = 0;
    temp_a0 = arg0->f14;
    if (temp_a0 != 0) {
        func_0069C438(temp_a0);
    }
}
