/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00124C50 (NTSC-U func_00124C50, commit 403f30a9) */
#include "common.h"

extern void func_00126C50(s32 *);
extern void func_00126C40(s32 *);
s32 func_0012D750(void) {
    s32 a;
    u32 b;
    func_00126C50(&a);
    b = (a & 0xFFFF1FFF) | 0x2000;
    func_00126C40(&b);
    func_00126C50(&b);
    func_00126C40(&a);
    return ((b >> 13) & 7) == 0;
}
