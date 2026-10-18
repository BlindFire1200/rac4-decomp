#include "common.h"

f32 func_L00_0059B748(void *, f32, f32, f32, f32, f32);

/* Run each component of a vector toward a target through the per-axis filter. */
void func_L00_0058A5F0(void *arg0, f32 *arg1, f32 *arg2, f32 a, f32 b, f32 c) {
    u8 *base = *(u8 **)((u8 *)arg0 + 0x70);
    f32 x = func_L00_0059B748(base + 0x120, arg1[0], arg2[0], a, b, c);
    f32 y = func_L00_0059B748(base + 0x124, arg1[1], arg2[1], a, b, c);
    f32 z = func_L00_0059B748(base + 0x128, arg1[2], arg2[2], a, b, c);
    arg1[0] = x;
    arg1[1] = y;
    arg1[2] = z;
}
