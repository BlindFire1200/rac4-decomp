/* Invoke the helper with the word at object offset 0x14 when that word is nonzero. */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x14];
    s32 f14;
};

s32 func_L00_006A1230(s32);

void func_L00_007147A0(Type1 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->f14;
    if (temp_a0 != 0) {
        func_L00_006A1230(temp_a0);
    }
}
