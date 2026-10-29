/* Return 1 if the gp-relative global is set, otherwise call and return the observed resident helper. */
/* cflags: @ee29 -O2 -G8 */
#include "common.h"

s32 func_004CBDD0();
extern s32 D_0021FAC8;

s32 func_004CBE30(void) {
    if (D_0021FAC8 != 0) {
        return 1;
    }
    return func_004CBDD0();
}
