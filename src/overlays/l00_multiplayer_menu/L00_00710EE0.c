/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x14];
    s32 f14;
};

s32 func_0069CE38(s32);

s32 func_L00_00710EE0(Type1 *arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = arg0->f14;
    var_v0 = 0;
    if (temp_a0 != 0) {
        var_v0 = func_0069CE38(temp_a0);
    }
    return var_v0;
}
