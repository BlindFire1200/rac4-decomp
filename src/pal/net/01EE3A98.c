#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x24];
    s32 f24;
};
/* Update the observed field through the documented pointer offsets. */

s32 func_01EE3A98(Type1 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->f24;
    }
    return var_v0;
}
