/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013A0F8 (NTSC-U func_0013A0F8, commit 403f30a9) */
#include "common.h"

typedef struct { u8 pad[0xC]; s32 xC; u8 pad2[0x858]; s32 x868; } Type1;
extern s32 func_00142290(s32, s32 *);
extern s32 func_001464C0(s32);
s32 func_00146638(Type1 *p, s32 b) {
    s32 q = p->x868;
    if (q != 0 && p != 0 && p->xC != 0) {
        s32 buf[2];
        buf[1] = b;
        buf[0] = 0;
        return func_00142290(q, buf);
    }
    return func_001464C0(b);
}
