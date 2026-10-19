/* Not matching yet: SIZE ours 244 / retail 264 (tools/try_func.py func_L01_005724C8 --diff). Not part of the build. */
#include "common.h"
typedef struct { u8 pad[4]; u16 a; u16 b; u16 c; u16 d; } State;
typedef s32 (*Callback)(s32, s32, void *, s32);
extern f32 D_0024B120[];
s32 func_L01_005724C8(State *state, Callback cb, s32 arg2, s32 arg3) {
    u16 x;
    u16 y;
    s32 ix;
    s32 iy;
    u16 next;
    if (state != 0) {
        if (cb != 0) {
            if (arg2 != 0) {
                x = state->a;
                y = state->b;
                if (x != y) {
                    ix = (s32)(((f32)state->d * (f32)x) / (f32)y);
                    iy = (s32)(((f32)state->d * (f32)(x + 1)) / (f32)y);
                    cb(arg2, arg3, &D_0024B120[(((state->c << 10) + ix) * 2)], iy - ix);
                    next = state->a + 1;
                    state->a = next;
                    return (next & 0xffff) == state->b;
                }
            }
        }
    }
    return 1;
}
