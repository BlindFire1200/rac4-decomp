/* Not matching yet: COMPILE failed (tools/try_func.py func_L01_0056D6C8 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x40];
    s32 f40;
};

s32 func_L01_0056D6C8(Type1 *arg0) {
    s32 *var_v0;
    s32 var_v1;

    var_v1 = 0xF;
    var_v0 = arg0 + 0x3C;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 4;
    } while (var_v1 >= 0);
    arg0->f40 = 0;
    return 1;
}
