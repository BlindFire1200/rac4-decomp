/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00125B68 (NTSC-U func_00125B68, commit 403f30a9) */
#include "common.h"

int func_0012D420(void);
int func_0012D470(void);
extern s32 func_0012E6D0();

s32 func_0012E7C8(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 di;
    s32 r;

    di = func_0012D420();
    r = func_0012E6D0(a0, a1, a2, a3);
    if (di) {
        func_0012D470();
    }
    return r;
}
