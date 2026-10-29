#include "common.h"
/* Computes four differences using the leading scalar. */
void func_0049C318(float *a, float *b, float *c, float *d, float *e) {
    *b = a[5] - a[1] * a[0];
    *c = a[6] - a[2] * a[0];
    *d = a[7] - a[3] * a[0];
    *e = a[8] - a[4] * a[0];
}
