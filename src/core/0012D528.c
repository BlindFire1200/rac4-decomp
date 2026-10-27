/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00124A28 (NTSC-U func_00124A28, commit 403f30a9) */
#include "common.h"

u32 *func_0012D528(u32 *p, u32 *end, u32 val) {
    while (*p != val && p < end) {
        p++;
    }
    return p < end ? p : 0;
}
