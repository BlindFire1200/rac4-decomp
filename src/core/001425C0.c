/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x40];
    s32 f40;
};

s32 func_001467C0(s32);

s32 func_001425C0(Type1 *arg0) {
    func_001467C0(arg0->f40 + 0x68);
    return 1;
}
