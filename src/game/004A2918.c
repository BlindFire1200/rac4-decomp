/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x8];
    s32 f8;
};

s32 func_0045EB60(s32, s32);

s32 func_004A2918(Type1 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_0045EB60(arg1, arg2);
    arg0->f8 = temp_v0;
    return temp_v0 != 0;
}
