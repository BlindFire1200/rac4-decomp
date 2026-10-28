/* cflags: -G0 */
#include "common.h"

void func_00149F88(f32 *p, f32 *tab, s32 i, f32 *out) {
    f32 *t = tab + i * 2;

    out[0] = t[0] * p[0] + t[1] * p[1];
    out[1] = -t[1] * p[0] + t[0] * p[1];
}
