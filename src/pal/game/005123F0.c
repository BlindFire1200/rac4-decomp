#include "common.h"
extern unsigned short D_00336838[];
unsigned int func_005123F0(unsigned int a, unsigned int b, unsigned int c) {
    unsigned short *p = (unsigned short *)((char *)D_00336838 + (c * 2 + a * 0x600));
    unsigned short n = *p;
    *p = n + 1;
    return (a << 24) | (b << 28) | (c & 0xfff) | (((int)((unsigned int)n << 16) >> 4) & 0x00fff000);
}
