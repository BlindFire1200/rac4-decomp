/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x34];
    s32 f34;
    char _p38[0x10];
    s32 f48;
};

s32 func_004A1A60(s32, s32);
s32 func_00504648(s32, s32 *, s32 *);

void func_004A0F98(Type1 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 temp_a1;

    temp_a1 = arg0->f48;
    if (temp_a1 > 0) {
        func_00504648(func_004A1A60((arg1 * 0x18) + arg0->f34 + 4, temp_a1), arg2, arg3);
        return;
    }
    *arg2 = 0;
    *arg3 = 0;
}
