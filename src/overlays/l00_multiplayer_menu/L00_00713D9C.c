#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x85C];
    s32 f85C;
    char _p860[0x10614];
    s32 f10E74;
};

void func_L00_00713D9C(Type1 *arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg0->f85C >= arg1)) {
        arg0->f10E74 = arg1;
    }
}
