/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
};

s32 func_01EA95C0(void *);

void func_01EACB10(Type1 *arg0) {
    if (arg0 != NULL) {
        if (arg0->f8 != 0) {
            func_01EA95C0(arg0 + 8);
        }
        arg0->f0 = 0;
        arg0->f8 = 0;
        arg0->f4 = 0;
    }
}
