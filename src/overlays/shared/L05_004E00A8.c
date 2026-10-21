/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x20];
    u8 f20;
};

s32 func_L05_004E00A8(Type1 *arg0) {
    s32 var_a0;
    u8 temp_v1;

    temp_v1 = arg0->f20;
    var_a0 = 0;
    if ((temp_v1 == 5) || (temp_v1 == 3) || (temp_v1 == 7)) {
        var_a0 = 1;
    }
    return var_a0;
}
