/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
};

s32 func_0047D3F8(s32, s32);
s32 func_0047D488(s32, s32);

s32 func_004D5608(Type1 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;

    temp_v1 = arg0->f0;
    var_a1 = 0;
    if (temp_v1 != 0xA) {
        if (temp_v1 == 0xB) {
            temp_a0 = arg0->f4;
            var_a1 = 1;
            if (temp_a0 != 4) {
                var_v0 = func_0047D488(temp_a0, 1);
                goto block_6;
            }
        }
    } else {
        temp_a0_2 = arg0->f4;
        var_a1 = 1;
        if (temp_a0_2 != 0) {
            var_v0 = func_0047D3F8(temp_a0_2, 1);
block_6:
            var_a1 = var_v0;
        }
    }
    return var_a1;
}
