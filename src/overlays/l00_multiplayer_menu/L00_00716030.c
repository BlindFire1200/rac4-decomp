#include "common.h"
typedef struct {
    u8 pad[0x68];
    s32 count;
    s32 items[1];
} Type716030;
extern s32 func_L00_0069C988(s32, f32);
extern void func_L00_007162A0(Type716030 *);
s32 func_L00_00716030(Type716030 *arg0, f32 arg1) {
    s32 result = 0;
    s32 i;
    for (i = 0; i < arg0->count; i++) {
        result |= func_L00_0069C988(arg0->items[i], arg1) != 0;
    }
    if (result == 1) {
        func_L00_007162A0(arg0);
    }
    return result;
}
