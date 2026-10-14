/* Not matching yet: BYTES 2/80 (tools/try_func.py func_01EC13E8 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
#include "common.h"

s32 func_01EB6250(void *);

s32 func_01EC13E8(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0xD2F3;
    if (arg0 != NULL) {
        if (*arg0 != 5) {
            *arg0 = 2;
            func_01EB6250(arg0 + 0x14);
            func_01EB6250(arg0 + 0x24);
        }
        var_v0 = 0;
    }
    return var_v0;
}
