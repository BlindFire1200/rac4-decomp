/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xBC];
    s32 fBC;
};

s32 func_L01_0047FBF0(Type1 *arg0) {
    s16 temp_a0;
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 == NULL) || (temp_a0 = arg0->fBC, (temp_a0 == 0x1099)) || (temp_a0 == 0x171C)) {
        var_v1 = 1;
    }
    return var_v1;
}
