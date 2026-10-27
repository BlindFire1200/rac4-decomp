/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_003E5C78 (NTSC-U func_003E5B30, commit 403f30a9) */
#include "common.h"

void func_0050DA70(f32 *p, f32 lo, f32 hi) {
    *p = (*p < lo) ? lo : *p;
    *p = (hi < *p) ? hi : *p;
}
