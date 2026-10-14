/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x8];
    s32 f8;
};
struct Type1 {
    Type2 *f0;
    char _p4[0x7C];
    s32 f80;
};

s32 func_L00_0051A718(Type1 *arg0) {
    s32 var_v0;

    var_v0 = arg0->f80;
    if (var_v0 == 0) {
        var_v0 = arg0->f0->f8;
    }
    return var_v0;
}
