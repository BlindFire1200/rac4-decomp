#include "common.h"

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern char D_00309878[];
extern char D_004B55B0[];
extern char D_004B56B8[];
extern char D_004B56F8[];

s32 D_00221764 = 0;

/* One-time init: if the flag is clear, call func_00501458 with the four fixed
   pointers (and two nulls) and set the flag; then return the address 0x309878. */
void *func_004B5478(void) {
    if (D_00221764 == 0) {
        func_00501458(D_00309878, D_004B55B0, D_004B56B8, D_004B56F8, 0, 0);
        D_00221764 = 1;
    }
    return D_00309878;
}
