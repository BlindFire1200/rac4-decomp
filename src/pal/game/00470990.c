#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x3C];
    s32 f3C;
};


void func_00470990(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->f3C = (s32)((u32)arg1 | ((u32)arg2 << 8) | ((u32)arg3 << 16));
}
