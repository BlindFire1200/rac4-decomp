#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x70];
    s32 f70;
};
/* Return an error code when the pointer is null; otherwise store the word and return zero. */

s32 func_01EBDE60(Type1 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0xD2F2;
    if (arg0 != NULL) {
        arg0->f70 = arg1;
        var_v0 = 0;
    }
    return var_v0;
}
