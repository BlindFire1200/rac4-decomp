/* cflags: -G0 */
#include "common.h"

s32 func_0014A050(s32 *a, s32 n, s32 v) {
    s32 r = 0;
    s32 i;

    for (i = 0; i < n; i++) {
        if (a[i] == v) {
            r = 1;
            break;
        }
    }
    return r;
}
