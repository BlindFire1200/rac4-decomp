#include "common.h"

// Copies the 64-bit value at +0x38 of the object at +0x2EF0 into both
// objects of each of the 6 entries (stride 0x50) that have one.

typedef struct Type2 {
    char _p0[0x38];
    s64 f38;
} Type2;

void func_L00_006ADA40(u8 *arg0) {
    s32 i;
    s32 j;
    Type2 *p;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 2; j++) {
            p = *(Type2 **)(arg0 + i * 0x50 + 0x22F0);
            if (j == 1) {
                p = *(Type2 **)(arg0 + i * 0x50 + 0x22F4);
            }
            if (p != 0) {
                p->f38 = (*(Type2 **)(arg0 + 0x2EF0))->f38;
            }
        }
    }
}
