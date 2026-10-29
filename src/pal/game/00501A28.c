#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x4];
    s32 f4;
};

s32 func_00453E20(s32, s32, s32);


void func_00501A28(Type1 *arg0) {
    func_00453E20((s32)((char *)arg0 + 8), 0, 0x180);
    arg0->f4 = 0;
}
