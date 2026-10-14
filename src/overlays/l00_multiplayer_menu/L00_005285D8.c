/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;
struct Type2 {
    char _p0[0x50];
    s32 (*f50)();
};
struct Type1 {
    char _p0[0x8];
    Type2 *f8;
};

void func_L00_005285D8(Type1 *arg0) {
    arg0->f8->f50();
}
