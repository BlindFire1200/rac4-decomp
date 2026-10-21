/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x24];
    s32 f24;
    char _p28[0x30];
    s32 f58;
};

u8 *func_0046DB50(s8, s32);

s32 func_0046F4F0(Type1 *arg0, s8 arg1) {
    return arg0->f58 + (*func_0046DB50(arg1, arg0->f24) << 6);
}
