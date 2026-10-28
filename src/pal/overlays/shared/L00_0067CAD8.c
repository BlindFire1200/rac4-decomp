#include "common.h"
extern unsigned int *D_00222FE0;
extern char D_004CB240[];

/* Append four words to the current command buffer. */
void func_L00_0067CAD8(void) {
    D_00222FE0[0] = 0x30000003;
    D_00222FE0[1] = (unsigned int) D_004CB240;
    D_00222FE0[2] = 0;
    D_00222FE0[3] = 0x50000003;
    D_00222FE0 += 4;
}
