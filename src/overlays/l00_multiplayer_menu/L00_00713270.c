#include "common.h"

// True when +0x524 and +0x528 differ.

typedef struct Type1 {
    char _p0[0x524];
    s32 f524;
    s32 f528;
} Type1;

s32 func_L00_00713270(Type1 *arg0) {
    return arg0->f524 != arg0->f528;
}
