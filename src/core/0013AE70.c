#include "common.h"

/* Spills seven of its 64-bit arguments into a stack array and returns. */
void func_0013AE70(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 buf[16];

    buf[9] = a1;
    buf[10] = a2;
    buf[11] = a3;
    buf[12] = a4;
    buf[13] = a5;
    buf[14] = a6;
    buf[15] = a7;
}
