#include "common.h"

extern int D_00220AE0;
extern void func_0015DB88(int *arg0, int arg1);

/* Stores the address of D_00220AE0 at offset 0x460 of arg0, then calls func_0015DB88 if arg1 is odd. */
void func_L00_0070C3E0(int *arg0, int arg1) {
    arg0[0x118] = (int)&D_00220AE0;
    if (arg1 & 1) {
        func_0015DB88(arg0, arg1 & 1);
    }
}
