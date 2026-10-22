#include "common.h"

/* Builds a 256-entry palette with a bit-swapped index from a byte table, then calls the uploader. */
extern void func_00126E20(s32);
extern s32 D_00329300[];

s32 D_00220A1C = 0;

void func_004F8EA0(u8 *arg0) {
    s32 i;
    s32 idx;
    s32 *p;
    s32 dst;
    s32 t;

    t = D_00220A1C ^ 1;
    D_00220A1C = t;
    dst = (s32)((u8 *)D_00329300 + (t << 10));
    for (i = 0; i < 0x100; i++) {
        idx = (i & 0xE7) | ((i & 8) << 1) | ((i & 0x10) >> 1);
        p = (s32 *)((idx << 2) + dst);
        *p = ((0xFF - arg0[i]) >> 1) << 24;
    }
    func_00126E20(0);
}
