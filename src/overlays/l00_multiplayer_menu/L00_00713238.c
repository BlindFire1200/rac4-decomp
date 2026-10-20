#include "common.h"

// Return entry +0x524 of the word table at +0x124.

typedef struct Type1 {
    char _p0[0x124];
    s32 f124[1];
    char _p128[0x524 - 0x128];
    s32 f524;
} Type1;

s32 func_L00_00713238(Type1 *arg0) {
    return arg0->f124[arg0->f524];
}
