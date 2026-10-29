/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac2-decomp func_00126E60 (commit 1243c8ea) */
#include "common.h"

extern void D_001294F0();
extern void D_001294F0(void *);
extern int func_00139E28(void *);
extern char D_00194E30[];
extern void func_001399E0(void *);
void func_001399E0(void *arg0) {
    int n = 0x1000000;

    while ((*(volatile int *)arg0 & 0x100) != 0) {
        if (--n < 0) {
            D_001294F0(D_00194E30);
            func_00139E28(arg0);
        }
    }
}
