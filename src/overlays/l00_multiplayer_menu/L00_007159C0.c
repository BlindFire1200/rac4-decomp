/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xB6C];
    s32 fB6C;
    s32 fB70;
};

void func_L00_007159C0(Type1 *arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg0->fB6C >= arg1)) {
        arg0->fB70 = arg1;
    }
}
