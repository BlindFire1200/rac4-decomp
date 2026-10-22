/* cflags: -fno-opt-stack */
#include "common.h"

extern void func_00148408(void *arg0, u8 arg1, s16 arg2);
extern s16 D_001A1960[];

typedef struct {
    s32 f0;
    s16 f4;
    s16 f6;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
} Params;

typedef struct {
    char pad0[0x3C];
    s32 f3C;
    s32 f40;
} Obj;

// Fills a request block and hands it the seventeen table entries.
void func_0014B808(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5) {
    Params p;
    u8 *src;
    s16 *tbl = D_001A1960;
    s32 i;

    p.f4 = arg4;
    p.f10 = arg2;
    p.f14 = arg3;
    p.f0 = arg1;
    ((Obj *)arg0)->f40 = arg5;
    ((Obj *)arg0)->f3C = 0;
    src = arg0;
    for (i = 0x10; i >= 0; i--) {
        func_00148408(&p, *src, *tbl);
        src += 4;
        tbl++;
    }
}
