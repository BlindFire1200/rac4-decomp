/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x4];
    u32 f4;
    u32 f8;
    s32 fC;
    s32 (*f10)();
};

s32 func_00501358(Type1 *arg0) {
    s32 var_s2;
    u32 temp_a1;
    u32 var_s0;

    var_s0 = arg0->f8;
    var_s2 = 0;
    if ((u32) arg0->f4 >= var_s0) {
        do {
            temp_a1 = var_s0;
            var_s0 += 1;
            var_s2 |= arg0->f10(arg0->fC, temp_a1) != 0;
        } while ((u32) arg0->f4 >= var_s0);
    }
    return var_s2;
}
