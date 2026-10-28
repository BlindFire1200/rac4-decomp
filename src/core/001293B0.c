/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00121620 (NTSC-U func_00121620, commit 403f30a9) */
#include "common.h"

s32 func_001293B0(char **pp, s32 *cnt, s32 x) {
    char *p;
    if (*cnt == 0) {
        return 1;
    }
    if (x < 0x100) {
        if (*cnt == 1) {
            x = 0;
        }
        p = *pp;
        *p = x;
        p++;
        *pp = p;
        *cnt = *cnt - 1;
        return 1;
    }
    *(*pp) = 0;
    return 0;
}
