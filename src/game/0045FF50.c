#include "common.h"

extern void func_0011EFB0(s32 arg0);
s32 D_0021EF14 = 0;

/* Calls func_0011EFB0 if D_0021EF14 is non-zero, then zeros the global. */
void func_0045FF50(void) {
    if (D_0021EF14 != 0) {
        func_0011EFB0(D_0021EF14);
        D_0021EF14 = 0;
    }
}
