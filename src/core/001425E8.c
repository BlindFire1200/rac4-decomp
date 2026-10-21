/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x40];
    s32 f40;
};

s32 func_001468A8(s32);

s32 func_001425E8(Type1 *arg0) {
    func_001468A8(arg0->f40 + 0x68);
    return 1;
}
