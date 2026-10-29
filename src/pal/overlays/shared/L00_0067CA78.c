#include "common.h"
extern unsigned int *D_00222FE0;
extern char D_004CBC70[];

/* Append four words to the command buffer. */
void func_L00_0067CA78(void) {
    D_00222FE0[0] = 0x30000003;
    D_00222FE0[1] = (unsigned int) D_004CBC70;
    D_00222FE0[2] = 0;
    D_00222FE0[3] = 0x50000003;
    D_00222FE0 += 4;
}
