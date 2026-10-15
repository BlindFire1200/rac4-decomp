/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x14];
    s32 f14;
};

s32 func_L00_0069BED8(s32);

void func_L00_00710958(Type1 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->f14;
    if (temp_a0 != 0) {
        func_L00_0069BED8(temp_a0);
    }
}
