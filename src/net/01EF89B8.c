/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x10];
    s32 f10;
};

s32 func_01EF89B8(Type1 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->f10 != 0) {
        var_v1 = (s32) arg0 != -0xBC;
    }
    return var_v1;
}
