#include "common.h"
extern unsigned int *D_00222FE0;
extern char D_0020BD30[];

/* Writes four command words and advances the output pointer. */
void func_L00_005C63B8(void) {
    D_00222FE0[0] = 0x30000026;
    D_00222FE0[1] = (unsigned int)D_0020BD30;
    D_00222FE0[2] = 0;
    D_00222FE0[3] = 0x50000026;
    D_00222FE0 += 4;
}
