/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x50];
    s32 f50;
    f32 f54;
};

void func_L00_007156D8(Type1 *arg0, f32 fparg0) {
    s32 var_v0;

    var_v0 = 1;
    arg0->f54 = fparg0;
    if (fparg0 == 0.0f) {
        var_v0 = 0;
    }
    arg0->f50 = var_v0;
}
