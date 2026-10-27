/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00121760 (NTSC-U func_00121760, commit 403f30a9) */
#include "common.h"

extern s32 func_00129408();
extern s32 func_00128698();
extern s32 func_0012D420();
extern s32 func_0012D470();
void func_001294F0(char *fmt, ...) {
    s32 cnt;
    s32 s;
    char *ap;
    cnt = 0;
    s = func_0012D420();
    ap = (char *)__builtin_next_arg(fmt) - 0x38;
    func_00128698(func_00129408, &cnt, 0xFFFFFFFF, fmt, ap);
    if (s != 0) {
        func_0012D470();
    }
}
