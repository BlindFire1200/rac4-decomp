#include "common.h"

// Call func_L00_0051CF60 on what func_L00_0051CA88 returns for +0x0 of the object at +0x8.

typedef struct Type2 {
    s32 f0;
} Type2;

typedef struct Type1 {
    char _p0[0x8];
    Type2 * f8;
} Type1;

extern s32 func_L00_0051CA88(s32 arg0);
extern void func_L00_0051CF60(s32 arg0);

void func_L00_0052D738(Type1 *arg0) {
    func_L00_0051CF60(func_L00_0051CA88(arg0->f8->f0));
}
