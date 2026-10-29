/* C adapted from OpenRAC/rac4-decomp pull request #43 (SCES_532.85 reconstruction of the same routine) */
#include "common.h"
typedef struct { int f0, f4; } Type1;
typedef struct { int pad[9]; int f24, f28, f2C, f30, f34, f38; } Type2;
extern Type1 D_001D3F40[];
extern Type2 D_00266A88[];
/* Update the rectangular bounds and centered offsets. */
void func_0046D6A8(int arg0, int arg1, int arg2, int arg3) {
    D_00266A88[0].f24 = (int)(((unsigned int)((int)((unsigned int)arg0 + (unsigned int)arg1) >> 1) - (unsigned int)(D_001D3F40[0].f0 >> 1)) << 4);
    D_00266A88[0].f28 = (int)(((unsigned int)((int)((unsigned int)arg2 + (unsigned int)arg3) >> 1) - (unsigned int)(D_001D3F40[0].f4 >> 1)) << 4);
    D_00266A88[0].f2C = arg0;
    D_00266A88[0].f30 = arg1;
    D_00266A88[0].f34 = arg2;
    D_00266A88[0].f38 = arg3;
}
