/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    char _p8[0x4];
    s32 fC;
};

s32 func_01EF0A58(s32);
s32 func_01EF0C54(void *);
s32 func_01EF0D24();

s32 func_01EF0CB4(Type1 *arg0) {
    s32 temp_s1;
    s32 var_v1;

    if (func_01EF0D24() != 0) {
        var_v1 = arg0->f4;
    } else {
        var_v1 = func_01EF0A58(arg0->fC);
    }
    temp_s1 = var_v1 - arg0->f0;
    if (temp_s1 < 0) {
        func_01EF0C54(arg0);
    }
    return temp_s1;
}
