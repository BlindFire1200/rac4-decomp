#include "common.h"

// Fill a 256-byte buffer with func_L00_00767C60 and pass it with +0x0 to func_0015C0F8.

typedef struct Type1 {
    s32 f0;
} Type1;

extern void func_L00_00767C60(u8 *arg0);
extern void func_0015C0F8(s32 arg0, u8 *arg1);

void func_L00_0076BE58(Type1 *arg0) {
    u8 buf[0x100];

    func_L00_00767C60(buf);
    func_0015C0F8(arg0->f0, buf);
}
