/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x2650];
    s32 f2650;
};

s32 func_L01_00677CE0();

void func_L01_00677E70(Type1 *arg0) {
    arg0->f2650 = func_L01_00677CE0();
}
