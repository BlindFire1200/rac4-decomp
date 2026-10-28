/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00132428 (NTSC-U func_00132428, commit 403f30a9) */
#include "common.h"

/* libmpeg: macroblock_address_increment through IPU VDEC; 2.9-ee-991111 */
typedef struct {
    u8 pad0[0x12C];
    s32 x12C;           /* 0x12C */
    u8 pad130[0x828 - 0x130];
    s32 x828;           /* 0x828 */
    s32 x82C;           /* 0x82C */
    u8 pad830[0x848 - 0x830];
    s32 x848;           /* 0x848 */
    s32 x84C;           /* 0x84C */
    u8 pad850[0x858 - 0x850];
    s32 x858;           /* 0x858 */
} Type1;

extern void func_0013EFD8(Type1 *);
extern long func_0013EC48(Type1 *);
extern s32 func_0013EEB0(Type1 *, s32);
extern void func_0013F010(Type1 *, s32);
extern void func_00146690(Type1 *, char *, s32);
extern char D_001952D8[];

s32 func_0013E968(Type1 *p) {
    s32 var1 = 0;
    s32 var2;

    do {
        long r;
        u32 var3;
        s32 c;
        func_0013EFD8(p);
        {
            u32 cmd = 0x30000000;
            *(volatile u32 *)0x10002000 = cmd;
            p->x82C = cmd;
            p->x828 = 0;
        }
        r = func_0013EC48(p);
        {
            s32 bp = *(volatile s32 *)0x10002020;
            long top = *(volatile long *)0x10002030;
            p->x848 = top;
            if (top < 0) {
                p->x84C = (0x20 - (bp & 0x1F)) & 0x1F;
            } else {
                p->x84C = 0x20;
            }
        }
        p->x12C = (s32)r == 0;
        var3 = (s16)r;
        switch (var3) {
        case 0x22:
            var2 = 1;
            break;
        case 0x23:
            var2 = 1;
            var1 += 0x21;
            break;
        case 0:
            c = func_0013EEB0(p, 0xB);
            if (p->x858 != 0 && c == 0xF) {
                func_0013F010(p, 0xB);
                var2 = 1;
                break;
            }
            func_00146690(p, D_001952D8, var3);
            p->x12C = 1;
            return 1;
        default:
            var1 += var3;
            var2 = 0;
            break;
        }
    } while (var2);
    return var1;
}
