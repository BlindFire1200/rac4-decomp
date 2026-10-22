#include "common.h"

extern char D_001A5B40[];
extern s32 func_00126FD0(s32, void *);

/* Builds a four word debug record (16 bit id plus three parameters) and hands it to the core logger. */
s32 func_00127C70(s32 a0, s32 a1, s32 a2) {
    struct {
        s32 a;
        s32 b;
        s32 c;
        s32 d;
    } args;
    args.a = a0 & 0xFFFF;
    args.b = a1;
    args.c = a2;
    args.d = (s32)&D_001A5B40 | 0x20000000;
    return func_00126FD0(1, &args);
}
