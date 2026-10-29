/* Write the 32-bit field at +0x44 when the input value is nonzero; otherwise return error 2. */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x44];
    s32 f44;
};

s32 func_01EC2280(Type1 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 2;
    if (arg1 != 0) {
        arg0->f44 = arg1;
        var_v0 = 0;
    }
    return var_v0;
}
