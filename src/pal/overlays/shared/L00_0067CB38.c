#include "common.h"
extern unsigned int *D_00222FE0;
extern unsigned char D_004CB270[];

/* Append four words to the command stream. */
void func_L00_0067CB38(void) {
    D_00222FE0[0] = 0x30000004;
    D_00222FE0[1] = (unsigned int)D_004CB270;
    D_00222FE0[2] = 0;
    D_00222FE0[3] = 0x50000004;
    D_00222FE0 += 4;
}
