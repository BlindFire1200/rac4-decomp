/* C adapted from OpenRAC/rac4-decomp pull request #43 (SCES_532.85 reconstruction of the same routine) */
#include "common.h"
extern int D_0020C690[][3];
extern char D_00308108[];
static inline unsigned int addr_add(unsigned int arg0, unsigned int arg1) { return arg0 + arg1; }
void func_004A7C50(int arg0) {
    int var1;
    int *var2 = D_0020C690[arg0];
    for (var1 = 2; var1 >= 0; var1--) var2[var1] = 0;
    *(int *)(addr_add((unsigned int)D_00308108, 0x98) + arg0 * 0xB8) |= 0xD;
}
