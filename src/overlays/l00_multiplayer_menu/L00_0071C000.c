#include "common.h"

// Call func_L00_007647B0(arg1) unless +0x234 is set, then clear +0x234.

typedef struct Type1 {
    char _p0[0x234];
    u8 f234;
} Type1;

extern void func_L00_007647B0(s32 arg0);

void func_L00_0071C000(Type1 *arg0, s32 arg1) {
    if (arg0->f234 == 0) {
        func_L00_007647B0(arg1);
    }
    arg0->f234 = 0;
}
