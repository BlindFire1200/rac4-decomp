/* cflags: -mno-split-addresses */
#include "common.h"

s32 func_L01_0056D6C8(void *arg0) {
    s32 *var_v0;
    s32 var_v1;

    var_v1 = 0xF;
    var_v0 = (s32 *)((u32)arg0 + 0x3C);
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    *(s32 *)((u32)arg0 + 0x40) = 0;
    return 1;
}
