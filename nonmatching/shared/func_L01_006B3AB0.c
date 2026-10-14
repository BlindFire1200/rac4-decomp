/* Not matching yet: COMPILE failed (tools/try_func.py func_L01_006B3AB0 --diff). Not part of the build. */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x14];
    s32 f14;
};

s32 func_L01_006B3B20(s32);
extern s32 D_003B14E0_[];
#define D_003B14E0 (D_003B14E0_[0])

void *func_L01_006B3AB0(Type1 *arg0) {
    arg0->f14 = &D_003B14E0;
    func_L01_006B3B20(arg0 + 0x20);
    return arg0;
}
