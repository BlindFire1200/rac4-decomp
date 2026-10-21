#include "common.h"

// Set bit arg1 of the bit set at +0x140.

typedef struct Type1 {
    char _p0[0x140];
    u8 f140[32];
} Type1;

void func_L00_00717A08(Type1 *arg0, u8 arg1) {
    arg0->f140[arg1 >> 3] |= 1 << (arg1 & 7);
}
