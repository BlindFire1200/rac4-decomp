/* Not matching yet: COMPILE failed (tools/try_func.py func_01EA6D00 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
};

s32 func_01EA95C0(void *);

s32 func_01EA6D00(Type1 *arg0) {
    s32 var_v0;

    var_v0 = 2;
    if (arg0 != NULL) {
        if (arg0->f10 != 0) {
            func_01EA95C0(arg0 + 0x10);
        }
        arg0->fC = 0;
        var_v0 = 0;
        arg0->f0 = 0;
        arg0->f4 = 0;
        arg0->f8 = 0;
    }
    return var_v0;
}
