#include "common.h"

extern int (*D_001BCAB8[])(int, int);
extern int D_001BC8C0[];

/* Calls the optional registered hook (if any) with the 4th argument and the global at 0x1BC8C0, then returns 28. */
int func_01EDC2E0(int arg0, int arg1, int arg2, int arg3) {
    if (D_001BCAB8[0] != 0) {
        D_001BCAB8[0](arg3, D_001BC8C0[0]);
    }
    return 28;
}
