/* Not matching yet: COMPILE failed (tools/try_func.py func_00503D00 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
};

s32 func_00503B70(s32);

void *func_00503D00(Type1 *arg0) {
    s32 var_s0;
    s32 var_s2;

    var_s0 = arg0 + 0x10;
    var_s2 = 0x3F;
    do {
        var_s2 -= 1;
        func_00503B70(var_s0);
        var_s0 += 0xC;
    } while (var_s2 != -1);
    arg0->f0 = 0;
    arg0->f4 = 0;
    arg0->f8 = 0;
    return arg0;
}
