#include "common.h"
typedef struct { char pad[0x2c]; int value; char rest[0x1d0]; } Type1;
extern Type1 D_00307354[];
extern int func_00506BB8(void);
extern void func_004A0560(int, int, float *, float *, float *, float *);
extern void func_0049CCF8(int, int, int, float, float, float, float);
extern void func_005063C0(unsigned int, unsigned int);
static inline unsigned int add(unsigned int a, unsigned int b) { return a + b; }
/* Computes and submits four values and a color. */
void func_004A0770(void) {
    float a, b, c, d;
    int i = func_00506BB8();
    Type1 *p = &D_00307354[i];
    func_004A0560(i, p->value, &a, &b, &c, &d);
    func_0049CCF8(i, 0, 0, a, b, c, d);
    func_005063C0(add((unsigned int)i << 6, add((unsigned int)p->value << 1, 0x14000eu)), 0x80d0d0d0);
}
