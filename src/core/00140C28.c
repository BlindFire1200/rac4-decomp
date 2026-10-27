/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_001346E8 (NTSC-U func_001346E8, commit 403f30a9) */
#include "common.h"

/* libmpeg: sequence extension flags (two IPU setup commands, two checks); 2.9-ee-991111 */
typedef struct {
    u8 pad0[0x828];
    s32 x828;           /* 0x828 */
    u32 x82C;           /* 0x82C */
    u8 pad830[0x850 - 0x830];
    u32 x850;           /* 0x850 */
    u32 x854;           /* 0x854 */
} Type1;

extern u32 func_0013EDC8();
extern void func_00141108(Type1 *);
extern s32 func_00146638();
extern char D_001953C0[];
extern char D_001953E8[];

static __inline__ void var1(Type1 *p, u32 cmd) {
    *(volatile u32 *)0x10002000 = cmd;
    p->x82C = cmd & 0xF0000000;
    if (p->x82C == 0x20000000 || p->x82C == 0x30000000 || p->x82C == 0x40000000) {
        p->x828 = 0;
    } else {
        p->x828 = 1;
    }
}

void func_00140C28(Type1 *p) {
    if ((p->x850 = func_0013EDC8(p, 1)) != 0) {
        func_00141108(p);
        var1(p, 0x50000000);
        func_00141108(p);
    }
    if ((p->x854 = func_0013EDC8(p, 1)) != 0) {
        func_00141108(p);
        var1(p, 0x58000000);
        func_00141108(p);
    }
    if (func_0013EDC8(p, 1) != 0) {
        func_00146638(p, D_001953C0);
    }
    if (func_0013EDC8(p, 1) != 0) {
        func_00146638(p, D_001953E8);
    }
}
