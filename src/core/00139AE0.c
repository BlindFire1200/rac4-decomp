/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac2-decomp func_00126F60 (commit 1243c8ea) */
#include "common.h"

extern void func_00139A80(char *, int);
extern int D_00167BC0[];
extern int D_00194E48[];
extern int func_00139BC0(void *);
int func_00139AE0(int arg0) {
    char buf[0x14];
    int var3;
    int i;

    var3 = *(volatile unsigned int *)0x1000E000 & 1;

    for (i = 0; i < 10; i++) {
        if (D_00194E48[i] != 0) {
            int *p = (int *)D_00167BC0[i];
            p[0] = 0;
            p[0xC] = 0;
            p[4] = 0;
            p[0x14] = 0;
            p[0x10] = 0;
            p[0x20] = 0;
        }
    }

    *(unsigned int *)0x1000E010 = 0xFF1F;
    *(unsigned int *)0x1000E010 = *(volatile unsigned int *)0x1000E010 & 0xFF1F0000;

    func_00139A80(buf, 0x14);
    func_00139BC0(buf);

    if (arg0 == 1) {
        *(volatile unsigned int *)0x1000E000 = *(volatile unsigned int *)0x1000E000 | 1;
    }
    return var3;
}
