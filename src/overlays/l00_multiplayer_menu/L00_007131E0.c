#include "common.h"

// Return entry (+0x524 - +0x52C) of the word table at +0x60.

typedef struct Type1 {
    char _p0[0x60];
    s32 f60[1];
    char _p64[0x524 - 0x64];
    s32 f524;
    char _p528[0x52C - 0x528];
    s32 f52C;
} Type1;

s32 func_L00_007131E0(Type1 *arg0) {
    return arg0->f60[arg0->f524 - arg0->f52C];
}
