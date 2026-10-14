/* Not matching yet: COMPILE failed (tools/try_func.py func_L41_00445D70 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xAC];
    s32 fAC;
};

void func_L41_00445D70(Type1 *arg0) {
    s32 *var_v0;
    s32 var_v1;

    var_v1 = 0xF;
    var_v0 = arg0->fAC + 0x3C;
    do {
        *var_v0 = -1;
        var_v1 -= 1;
        var_v0 -= 4;
    } while (var_v1 >= 0);
}
