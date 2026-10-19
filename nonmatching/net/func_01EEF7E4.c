/* Not matching yet: BYTES 9/48 (tools/try_func.py func_01EEF7E4 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
    s32 f24;
};

void func_01EEF7E4(Type1 *arg0) {
    arg0->f0 = 0;
    arg0->f24 = 0;
    arg0->f20 = 0x80000;
    arg0->f4 = 0;
    arg0->f8 = 0;
    arg0->fC = 0;
    arg0->f10 = 0;
    arg0->f14 = 0;
    arg0->f18 = 0;
    arg0->f1C = 0;
}
