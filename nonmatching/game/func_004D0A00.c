/* Not matching yet: COMPILE failed (tools/try_func.py func_004D0A00 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x54];
    s32 f54;
};
struct Type1 {
    char _p0[0x8];
    s32 f8;
};

s32 func_004A1A60(void *, s32);
s32 func_004D0BD0(s32);
s32 func_00505328(s32, s32);

void func_004D0A00(Type2 *arg0, Type1 *arg1, s32 arg2) {
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s2;
    void *temp_s0;
    void *temp_s0_2;

    temp_s2 = arg1->f8;
    if (arg2 == arg0->f54) {
        temp_s0 = arg1 + 4;
        func_00505328(func_004A1A60(temp_s0, 3), 0x80D0D0D0);
        func_00505328(func_004A1A60(temp_s0, 2), 0x80D0D0D0);
        return;
    }
    temp_s0_2 = arg1 + 4;
    temp_s1 = func_004A1A60(temp_s0_2, 3);
    func_00505328(temp_s1, func_004D0BD0(temp_s2));
    temp_s0_3 = func_004A1A60(temp_s0_2, 2);
    func_00505328(temp_s0_3, func_004D0BD0(temp_s2));
}
