/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00124ED8 (NTSC-U func_00124ED8, commit 403f30a9) */
#include "common.h"

extern s32 D_00164AC0;
extern s32 func_0012D8B8();
extern void func_001267E0(char *p, s32 arg1, char *s);
extern void func_0012D9D0();

void func_0012D9D8(char *arg0, s32 arg1, char **arg2) {
    char *p;
    p = func_0012D8B8(arg0, arg1, arg2);
    func_0012D9D0();
    func_001267E0(p, arg1, D_00164AC0 + 4);
}
