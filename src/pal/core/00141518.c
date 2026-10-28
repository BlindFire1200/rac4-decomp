/* cflags: @ee29 -O2 -G0 */
#include "common.h"
typedef struct { u8 pad0[0x5a0]; u32 f5a0, f5a4; u8 pad5a8[0x6e0-0x5a8]; u32 f6e0, f6e4; u8 pad6e8[0x820-0x6e8]; u32 f820; u8 pad824[0xc]; u32 f830; u8 pad834[0x48]; s32 f87c; } Type1;
extern char D_00195580[];
extern void func_00146638(Type1 *, char *);
/* Initialize the two buffers for the selected mode. */
void func_00141518(Type1 *p) {
    *(volatile u32 *)0x10002010 = (*(volatile u32 *)0x10002010 & 0xff7fffff) | 0x800000;
    if (p->f87c == 0) {
        u32 a = 0x70000000;
        u32 b = 0x70003600;
        p->f830 = b;
        p->f5a0 = a;
        p->f5a4 = 0x70001800;
        p->f6e0 = 0x70001b00;
        p->f6e4 = 0x70003300;
        p->f820 = 0;
    } else if (p->f87c == 1) {
        p->f830 = (u32)p + 0xe80;
        p->f5a4 = (((u32)p + 0x880) & 0x0fffffff) | 0x30000000;
        p->f6e4 = (((u32)p + 0xb80) & 0x0fffffff) | 0x30000000;
        p->f5a0 = 0;
        p->f6e0 = 0;
        p->f820 = 0;
    } else {
        func_00146638(p, D_00195580);
    }
}

