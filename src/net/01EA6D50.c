/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    char _p8[0x4];
    s32 fC;
};

s32 func_01EA6D50(Type1 *arg0) {
    s32 var_v0;

    var_v0 = 2;
    if (arg0 != NULL) {
        arg0->fC = 0;
        var_v0 = 0;
        arg0->f0 = 0;
        arg0->f4 = 0;
    }
    return var_v0;
}
