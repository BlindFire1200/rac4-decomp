/* cflags: -mno-split-addresses */
#include "common.h"

s32 func_01EB6250(void *);

s32 func_01EC13E8(void *arg0) {
    s32 var_v0;

    var_v0 = 0xD2F3;
    if (arg0 != NULL) {
        if (*(s32 *)arg0 != 5) {
            *(s32 *)arg0 = 2;
            func_01EB6250((char *)arg0 + 0x14);
            func_01EB6250((char *)arg0 + 0x24);
        }
        var_v0 = 0;
    }
    return var_v0;
}
