/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xC];
    s32 fC;
};

void func_0050C058(Type1 *arg0, s32 arg1, s32 arg2) {
    arg0->fC = (s32) ((((arg0->fC & 0xFFFFF9FF) | (arg1 << 9)) & 0xFFFFE7FF) | (arg2 << 0xB));
}
