/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x2318];
    s32 f2318;
};

s32 func_L41_00446010(Type1 *arg0) {
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = arg0->f2318;
    var_a0 = -1;
    if (temp_v1 != 1) {
        var_a0 = ((temp_v1 ^ 0xD) != 0) ? temp_v1 : -1;
    }
    return var_a0;
}
