/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x14];
    s32 f14;
    char _p18[0x44];
    s32 f5C;
};

s32 func_0069D318(s32, void *);

void func_L00_007152E8(Type1 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = arg0->f14;
    if (temp_a0 != 0) {
        func_0069D318(temp_a0, arg0 + 0x18);
    }
    temp_a0_2 = arg0->f5C;
    if (temp_a0_2 != 0) {
        func_0069D318(temp_a0_2, arg0 + 0x60);
    }
}
