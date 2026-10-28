/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_001258E8 (NTSC-U func_001258E8, commit 403f30a9) */
#include "common.h"

extern s32 func_0012D420();
extern s32 func_0012D470();
extern s32 func_0012E3F0();
int func_0012E460(void) {
    s32 s = func_0012D420();
    s32 r = func_0012E3F0();
    if (s) {
        func_0012D470();
    }
    return r;
}
