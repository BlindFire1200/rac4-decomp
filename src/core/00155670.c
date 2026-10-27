/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013A930 (NTSC-U func_0013A930, commit 403f30a9) */
#include "common.h"

extern s16 D_0016FC18[];
extern s32 func_00155580(void);
extern void func_00126C50(u32 *);
s32 func_00155670(void) {
 u32 buf[4];
s32 r; if (func_00155580() != 0) { r = D_0016FC18[0]; } else { func_00126C50(buf); r = (s32)buf[0] >> 21; if (((buf[0] >> 13) & 7) == 0) { r = 0x21C; } } return r;
}
