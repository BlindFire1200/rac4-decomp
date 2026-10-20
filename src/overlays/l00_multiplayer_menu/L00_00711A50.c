#include "common.h"

// Clear byte arg1 of the table at +0x1464 when arg1 is below the count +0x60.

typedef struct Type1 {
    char _p0[0x60];
    s32 f60;
    char _p64[0x1464 - 0x64];
    u8 f1464[1];
} Type1;

void func_L00_00711A50(Type1 *arg0, s32 arg1) {
    if (arg1 < arg0->f60) {
        arg0->f1464[arg1] = 0;
    }
}
