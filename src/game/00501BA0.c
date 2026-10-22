#include "common.h"

typedef struct {
	f32 f0;
	f32 f4;
	f32 f8;
	f32 fC;
} Type1;

extern Type1 D_00335EE0[];

s32 D_00220B04 = 0;

/* Writes the four float arguments into the entry D_00220B04 of the global float4 array D_00335EE0. */
void func_00501BA0(f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
	Type1 *p = &D_00335EE0[D_00220B04];
	p->f0 = fparg0;
	p->f4 = fparg1;
	p->f8 = fparg2;
	p->fC = fparg3;
}
