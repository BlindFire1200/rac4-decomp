/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x8];
    s32 f8;
    char _pC[0x18];
    s32 f24;
};

s32 func_004FE9A0();

void func_004FECE8(Type1 *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        arg0->f24 = 2;
        return;
    case 1:
        arg0->f8 = arg1;
        arg0->f24 = 7;
        break;
    case 2:
        arg0->f8 = arg1;
        arg0->f24 = 7;
        func_004FE9A0();
        break;
    }
}
