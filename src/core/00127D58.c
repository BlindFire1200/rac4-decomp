/* cflags: -G0 */
#include "common.h"

extern s32 func_00126FD0(s32, void *);

typedef struct { s32 a; s32 b; u32 c; } Args;

s32 func_00127D58(s32 a, s32 b, u16 c) {
    Args t;
    t.a = a;
    t.b = b;
    t.c = c;
    return func_00126FD0(-6, &t);
}
