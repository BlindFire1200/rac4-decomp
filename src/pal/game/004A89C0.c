#include "common.h"
extern int D_20C710[][3];
extern char D_308208[];
static inline unsigned int addr_add(unsigned int a, unsigned int b) { return a + b; }
void func_004A89C0(int index) {
    int i;
    int *p = D_20C710[index];
    for (i = 2; i >= 0; i--) p[i] = 0;
    *(int *)(addr_add((unsigned int)D_308208, 0x98) + index * 0xB8) |= 0xD;
}
