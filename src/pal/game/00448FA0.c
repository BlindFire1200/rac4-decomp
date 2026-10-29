#include "common.h"
extern unsigned long D_00206AC8[];
/* Write graphics register values. */
void func_00448FA0(void) {
    unsigned long a, b;
    *(volatile unsigned long *)0x120000E0 = 0;
    *(volatile unsigned long *)0x12000000 = 0xFFA1;
    *(volatile unsigned long *)0x12000020 = D_00206AC8[0];
    a = D_00206AC8[1];
    *(volatile unsigned long *)0x12000070 = a;
    *(volatile unsigned long *)0x12000090 = a;
    b = D_00206AC8[2];
    *(volatile unsigned long *)0x12000080 = b;
    *(volatile unsigned long *)0x120000A0 = b;
    *(volatile unsigned long *)0x120000D0 = 0;
}
