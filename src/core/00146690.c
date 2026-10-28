/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013A150 (NTSC-U func_0013A150, commit 403f30a9) */
#include "common.h"

extern s32 func_001294A8();
extern s32 func_00146638();
void func_00146690(void *s, char *fmt, int x) {
    char buf[0x100];
    func_001294A8(buf, 0x100, fmt, x);
    func_00146638(s, buf);
}
