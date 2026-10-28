/* cflags: -G0 */
#include "common.h"

void func_00147D50(f32 *src, s32 n, f32 *dst, f32 k) {
    while (n-- > 0) {
        *dst++ = *src++ * k;
    }
}
