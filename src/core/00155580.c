/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013A840 (NTSC-U func_0013A840, commit 403f30a9) */
#include "common.h"

extern u8 D_0016FC20[];
extern void func_00155510(void);
s32 func_00155580(void) {
    s8 *p = (s8 *)D_0016FC20;
    if (*p == 0) {
        func_00155510();
    }
    return *(s8 *)(p + 4) == 0x54;
}
