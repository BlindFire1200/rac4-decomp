/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    char _p4[0x8];
    s32 fC;
    s32 f10;
};

s32 func_004A2D90(Type1 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 var_a3;

    temp_v1 = arg0->f0;
    var_a3 = 0;
    if (((temp_v1 ^ 2) == 0) || ((temp_v1 ^ 1) == 0)) {
        arg0->fC = arg1;
        arg0->f10 = arg2;
        if (arg1 != 0) {
            var_a3 = 1;
            if (arg2 == 0) {
                arg0->f0 = 2;
                goto block_5;
            }
        } else {
block_5:
            var_a3 = 1;
        }
    }
    return var_a3;
}
