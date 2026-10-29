#include "common.h"
typedef struct { int width, height; } Dimensions;
typedef struct { int pad[9]; int x, y, a, b, c, d; } Target;
extern Dimensions D_001D3FC0[];
extern Target D_00266B88[];
/* Update the rectangular bounds and centered offsets. */
void func_0046DF88(int a, int b, int c, int d) {
    D_00266B88[0].x = (int)(((unsigned int)((int)((unsigned int)a + (unsigned int)b) >> 1) - (unsigned int)(D_001D3FC0[0].width >> 1)) << 4);
    D_00266B88[0].y = (int)(((unsigned int)((int)((unsigned int)c + (unsigned int)d) >> 1) - (unsigned int)(D_001D3FC0[0].height >> 1)) << 4);
    D_00266B88[0].a = a;
    D_00266B88[0].b = b;
    D_00266B88[0].c = c;
    D_00266B88[0].d = d;
}
