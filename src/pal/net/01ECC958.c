/* Write the 32-bit field at +0x408 if the object exists; return 0 or error 23. */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x408];
    s32 f408;
};

s32 func_01ECC958(Type1 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x17;
    if (arg0 != NULL) {
        arg0->f408 = arg1;
        var_v0 = 0;
    }
    return var_v0;
}
