/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x4];
    s32 f4;
};

s32 func_01EF0550(s32, void *);

void func_01EF58F4(Type1 *arg0) {
    func_01EF0550(arg0->f4, arg0);
}
