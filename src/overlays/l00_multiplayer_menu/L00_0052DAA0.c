#include "common.h"

// Build request arg1 (for type 1 with its two sub-blocks and arg2) and pass it to func_L00_004F8BE0.

typedef struct Type1 {
    s32 f0;
    void *f4;
    char _p8[0x10 - 0x8];
    s32 f10;
    void *f14;
    char _p18[0x30 - 0x18];
    s32 f30;
    char _p34[0x44 - 0x34];
    s32 f44;
    char _p48[0x60 - 0x48];
} Type1;

extern void func_L00_004F8BE0(s32 arg0, Type1 *arg1);

void func_L00_0052DAA0(s32 arg0, s32 arg1, s32 arg2) {
    Type1 r;

    r.f0 = arg1;
    if (arg1 == 1) {
        r.f4 = &r.f10;
        r.f14 = &r.f30;
        r.f44 = arg2;
    }
    func_L00_004F8BE0(arg0, &r);
}
