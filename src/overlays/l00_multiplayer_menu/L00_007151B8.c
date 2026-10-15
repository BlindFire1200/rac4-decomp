/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x5C];
    s32 f5C;
};
struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
};

s32 func_L00_0069D2F0(s32);

s32 func_L00_007151B8(Type2 *arg0, Type1 *arg1) {
    s32 temp_a0;
    s32 var_v0;

    arg1->f4 = 0;
    arg1->f8 = 0;
    arg1->fC = 0;
    arg1->f0 = 0;
    temp_a0 = arg0->f5C;
    var_v0 = 0;
    if (temp_a0 != 0) {
        var_v0 = func_L00_0069D2F0(temp_a0);
    }
    return var_v0 != 0;
}
