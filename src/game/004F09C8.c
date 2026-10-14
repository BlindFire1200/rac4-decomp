#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x50000];
    s32 f50000;
    s32 f50004;
    s32 f50008;
};

void func_004F09C8(Type1 *arg0, s32 arg1) {
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_t0 = arg0->f50004;
    temp_a3 = arg0->f50008;
    temp_v0 = temp_a3 - temp_t0;
    temp_v0_2 = (arg1 < temp_v0) ? arg1 : temp_v0;
    arg0->f50004 = (s32) (temp_t0 + temp_v0_2);
    arg0->f50000 = (s32) ((s32) (arg0->f50000 + temp_v0_2) % temp_a3);
}
