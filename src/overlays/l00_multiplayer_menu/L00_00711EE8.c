#include "common.h"

// Address of entry +0x14A8 (0x50 bytes each) of the table at +0x64.

typedef struct Type2 {
    char _p0[0x50];
} Type2;

typedef struct Type1 {
    char _p0[0x64];
    Type2 f64[1];
    char _pB4[0x14A8 - 0xB4];
    s32 f14A8;
} Type1;

Type2 *func_L00_00711EE8(Type1 *arg0) {
    return &arg0->f64[arg0->f14A8];
}
