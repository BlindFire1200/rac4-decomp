#include "common.h"

// Set +0x265 and +0x26C, clear +0x266, then call func_L00_007410B8.

typedef struct Type1 {
    char _p0[0x265];
    u8 f265;
    u8 f266;
    char _p267[0x26C - 0x267];
    s32 f26C;
} Type1;

extern void func_L00_007410B8(Type1 *arg0);

void func_L00_00741A40(Type1 *arg0) {
    arg0->f265 = arg0->f26C = 1;
    arg0->f266 = 0;
    func_L00_007410B8(arg0);
}
