#include "common.h"

// Interpolate four float pairs of a, (a[2], a[3]) up to (a[8], a[9]): out[i] =
// (1 - t) * first + t * second.
void func_004EEB28(f32 *a, f32 *out, f32 t) {
    f32 s = 1.0f - t;
    out[0] = s * a[2] + t * a[3];
    out[1] = s * a[4] + t * a[5];
    out[2] = s * a[6] + t * a[7];
    out[3] = s * a[8] + t * a[9];
}
