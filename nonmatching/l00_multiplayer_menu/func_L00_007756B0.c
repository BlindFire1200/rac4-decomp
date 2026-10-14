/* Not matching yet: COMPILE failed (tools/try_func.py func_L00_007756B0 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x8];
    u32 f8;
};

void *func_L00_007756B0(Type1 *arg0, u32 arg1) {
    void *var_v1;

    var_v1 = NULL;
    if (arg1 < (u32) arg0->f8) {
        var_v1 = arg0 + ((arg1 * 0x24) + 0x10);
    }
    return var_v1;
}
