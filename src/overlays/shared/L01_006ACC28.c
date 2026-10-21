/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x1C];
    s32 f1C;
    s32 f20;
    s32 f24;
    s32 f28;
};

s32 func_L01_006B5258(s32, s32);

void func_L01_006ACC28(Type1 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;

    temp_a0 = arg0->f1C;
    if (temp_a0 != 0) {
        temp_a1 = arg0->f20;
        if (temp_a1 != 0) {
            func_L01_006B5258(temp_a0, temp_a1);
        }
    }
    temp_a0_2 = arg0->f24;
    if (temp_a0_2 != 0) {
        temp_a1_2 = arg0->f28;
        if (temp_a1_2 != 0) {
            func_L01_006B5258(temp_a0_2, temp_a1_2);
        }
    }
}
