#include "common.h"

// Store arg1 at +0x530 unless +0x531 is set.

typedef struct Type1 {
    char _p0[0x530];
    u8 f530;
    u8 f531;
} Type1;

void func_L00_00713270(Type1 *arg0, s32 arg1) {
    if (arg0->f531 == 0) {
        arg0->f530 = arg1;
    }
}
