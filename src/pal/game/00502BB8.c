/* cflags: -ffast-math */
#include "common.h"
typedef struct { float a, b, c, d; } Type1;
int D_00220B9C = 0;
extern Type1 D_00335ED0[];
void func_00502BB8(float *a, float *b, float *c, float *d) {
    Type1 *p = &D_00335ED0[D_00220B9C];
    *a = p->a > *a ? p->a : *a;
    *b = p->b > *b ? p->b : *b;
    *c = p->c < *c ? p->c : *c;
    *d = p->d < *d ? p->d : *d;
}


