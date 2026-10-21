/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type1 {
    char _p0[0x34];
    s32 f34;
};
struct Type2 {
    char _p0[0x4];
    s32 f4;
    s32 f8;
};

s32 func_01EDA098(void *);

void func_01EDA0B8(Type1 *arg0, Type2 *arg1) {
    s32 temp_v1;

    temp_v1 = arg0->f34;
    if ((temp_v1 != 0) && (temp_v1 == arg1->f8)) {
        if (arg1->f4 == 2) {
            func_01EDA098(arg1);
        }
        arg1->f8 = 0;
        arg1->f4 = 0;
    }
}
