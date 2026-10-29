/* Write the 32-bit field at +0x80 if the object exists; return 0 or error 2. */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x80];
    s32 f80;
};

s32 func_01EBF088(Type1 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 2;
    if (arg0 != NULL) {
        arg0->f80 = arg1;
        var_v0 = 0;
    }
    return var_v0;
}
