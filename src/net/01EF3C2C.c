#include "common.h"

/* Copies four floats out of a record into four caller-supplied destinations. */
void func_01EF3C2C(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    f32 v;

    v = *(f32 *)((u8 *)arg0 + 0x18);
    *arg1 = v;
    v = *(f32 *)((u8 *)arg0 + 0x1C);
    *arg2 = v;
    v = *(f32 *)((u8 *)arg0 + 0x24);
    *arg3 = v;
    v = *(f32 *)((u8 *)arg0 + 0x28);
    *arg4 = v;
}
