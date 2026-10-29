#include "common.h"

extern s32 func_0011A370(s32, char *, s32);
extern s32 D_002126B8[];
extern s32 D_0021DFF0;

// Stores the address of D_002126B8 in D_0021DFF0, passes it to func_0011A370, and returns 0x58.
s32 func_00160AC0(s32 unused0, s32 unused1, s32 unused2, s32 arg3) {
    D_0021DFF0 = (s32)D_002126B8;
    func_0011A370(D_002126B8, arg3, 0x58);
    return 0x58;
}
