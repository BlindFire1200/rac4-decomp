/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x264];
    s32 f264;
};

s32 func_L00_0075D0E0(Type1 *arg0) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = arg0->f264;
    if (temp_v0 == 0) {
        var_a0 = 2;
    } else {
        var_a0 = ((u32) (temp_v0 - 2) <= 2U) ? 0xA : 4;
    }
    return var_a0;
}
