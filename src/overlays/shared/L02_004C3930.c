/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x20];
    s32 f20;
};

s32 func_L02_004C3930(Type1 *arg0) {
    s32 var_v1;
    u8 temp_a0;

    var_v1 = 0;
    if ((arg0 == NULL) || (temp_a0 = arg0->f20, (temp_a0 == 0xFE)) || (temp_a0 == 0xFD)) {
        var_v1 = 1;
    }
    return var_v1;
}
