#include "common.h"

extern void func_L00_005BCCA8(s32, void *, s32);
extern s32 D_0023FF00[];

/* Copies a data block to *position, then patches relocation entries against it */
void func_L00_005D3540(s32 *p, s32 arg1, s32 *position) {
    s32 size;
    s32 base;
    s32 count;
    s32 i;
    size = *p++;
    base = *position;
    count = *p;
    p += 3;
    *position = (base + size + 0x3F) & 0xFFFFFFC0;
    if (size != 0) {
        func_L00_005BCCA8(base, p, size);
    }
    p = (s32 *)((u8 *)p + size);
    if (count > 0) {
        i = count;
        do {
            s32 v = p[0];
            s32 off = v >> 16;
            s32 a = *(s32 *)((v & 0xFFFF) * 8 + arg1);
            i--;
            if (a >= D_0023FF00[8]) {
                *(s32 *)(a + off) = base + p[1];
            }
            p += 2;
        } while (i != 0);
    }
}
