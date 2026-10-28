/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_001259F0 (NTSC-U func_001259F0, commit 403f30a9) */
#include "common.h"

extern s32 func_0012D420();
extern s32 func_0012D470();
extern s32 func_0012E4A8(s32);
int func_0012E548(int id) {
    s32 s = func_0012D420();
    s32 r = func_0012E4A8(id);
    if (s) {
        func_0012D470();
    }
    return r;
}
