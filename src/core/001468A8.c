/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013A368 (NTSC-U func_0013A368, commit 403f30a9) */
#include "common.h"

/* libipu: restore the IPU and its DMA channels from a saved state; 2.9-ee-991111 */
typedef struct {
    u32 f0;     /* 0x00 */
    u32 f4;     /* 0x04 */
    u32 f8;      /* 0x08 */
    u32 fC;     /* 0x0C */
    u32 f10;     /* 0x10 */
    u32 f14;      /* 0x14 */
    u32 f18;     /* 0x18 */
    u32 f1C;      /* 0x1C */
} Type1;

extern void func_001466D0(u32);
extern void func_00146748(u32);

void func_001468A8(u8 *arg) {
    Type1 *e = (Type1 *)arg;
    u32 bp = e->f1C;
    u32 cmd = bp & 0x7F;
    u32 n = ((bp >> 16) & 3) + ((bp >> 8) & 0xF);
    u32 var1 = e->f0 - n * 16;
    u32 qwc = e->f8 + n;

    if (e->f10 != 0 && e->f14 != 0) {
        *(volatile u32 *)0x1000B010 = e->f10;
        *(volatile u32 *)0x1000B020 = e->f14;
        func_001466D0(e->f18 | 0x100);
    }
    while (*(volatile s32 *)0x10002010 < 0) {
    }
    *(volatile u32 *)0x10002000 = cmd;
    while (*(volatile s32 *)0x10002010 < 0) {
    }
    if (var1 != 0 && qwc != 0) {
        *(volatile u32 *)0x1000B410 = var1;
        *(volatile u32 *)0x1000B430 = e->f4;
        *(volatile u32 *)0x1000B420 = qwc;
        func_00146748(e->fC | 0x100);
    }
}
