/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x18];
    s32 f18;
};

s32 func_01EF0550(s32, void *);

void func_01F0C4CC(Type1 *arg0) {
    func_01EF0550(arg0->f18, arg0);
}
