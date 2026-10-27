#include "common.h"

s32 D_0021E020 = 0;
extern s8 D_001722E0[];

/* Stores 1 in the byte at D_001722E0 when D_0021E020 is not -1, else 0. */
void func_001614A8(void) {
    D_001722E0[0] = D_0021E020 != -1;
}
