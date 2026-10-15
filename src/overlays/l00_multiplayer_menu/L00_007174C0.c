/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x14];
    s32 f14;
    char _p18[0x44];
    s32 f5C;
    char _p60[0xCC];
    s32 f12C;
    s32 f130;
    s32 f134;
    s32 f138;
    s32 f13C;
    char _p140[0xFC];
    s32 f23C;
};

s32 func_0069D6C0(s32, s32);

s32 func_L00_007174C0(Type1 *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;

    arg0->f23C = arg1;
    temp_a0 = arg0->f14;
    if (temp_a0 != 0) {
        func_0069D6C0(temp_a0, 2);
    }
    temp_a0_2 = arg0->f5C;
    if (temp_a0_2 != 0) {
        func_0069D6C0(temp_a0_2, 2);
    }
    temp_a0_3 = arg0->f12C;
    if (temp_a0_3 != -1) {
        func_0069D6C0(temp_a0_3, 2);
    }
    temp_a0_4 = arg0->f130;
    if (temp_a0_4 != -1) {
        func_0069D6C0(temp_a0_4, 2);
    }
    temp_a0_5 = arg0->f134;
    if (temp_a0_5 != -1) {
        func_0069D6C0(temp_a0_5, 2);
    }
    temp_a0_6 = arg0->f138;
    if (temp_a0_6 != -1) {
        func_0069D6C0(temp_a0_6, 2);
    }
    temp_a0_7 = arg0->f13C;
    if (temp_a0_7 != -1) {
        func_0069D6C0(temp_a0_7, 2);
    }
    return 1;
}
