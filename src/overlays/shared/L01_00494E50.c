/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x410];
    s32 f410;
};
struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
};

s32 func_00494F80(void *);
s32 func_00495A60();

void func_L01_00494E50(Type1 *arg0) {
    if ((arg0->fAC->f410 != 0) && (func_00495A60() != 0)) {
        func_00494F80(arg0);
    }
}
