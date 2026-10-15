/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x10];
    s32 f10;
};

s32 func_01EC2840(s32);

s32 func_01EBE220(Type1 *arg0) {
    s32 var_v0;

    var_v0 = 0xD2F2;
    if (arg0 != NULL) {
        func_01EC2840(arg0->f10);
        var_v0 = 0;
    }
    return var_v0;
}
