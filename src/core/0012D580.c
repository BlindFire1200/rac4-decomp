/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00124A80 (NTSC-U func_00124A80, commit 403f30a9) */
#include "common.h"

extern u32 D_00164DA0[4];
extern u32 D_00164D98;
extern void func_0012D680(u32, u32);
extern u32 func_0012D568(u32, u32, void *);
extern void func_0012D528(void);
extern void func_0012D4F0(void);

void func_0012D580(void) {
    u32 a;
    u32 b;
    u32 pa;
    u32 pb;

    func_0012D680(D_00164DA0[0], D_00164DA0[1]);
    func_0012D680(D_00164DA0[2], D_00164DA0[3]);
    a = func_0012D568(0x80000000, 0x80080000, func_0012D528);
    b = func_0012D568(0x80000000, 0x80080000, func_0012D4F0);
    pa = a - 0x20C;
    pb = b - 0x168;
    while (pa != pb) {
        if (pa < pb) {
            a = func_0012D568(a + 4, 0x80080000, func_0012D528);
            pa = a - 0x20C;
        } else {
            b = func_0012D568(b + 4, 0x80080000, func_0012D4F0);
            pb = b - 0x168;
        }
    }
    D_00164D98 = pa;
}
