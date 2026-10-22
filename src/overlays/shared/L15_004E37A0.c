#include "common.h"

extern u32 D_002941C0[];

/* Looks up a table entry whose index is read through arg0's pointer field, offset by 4 when the flag byte equals 3. */
s32 func_L15_004E37A0(void *arg0) {
    s32 *p;
    s32 ofs;
    s32 *base;
    ofs = (*(u8 *)((u8 *)arg0 + 0x69) != 3) ? 0 : 4;
    p = (s32 *)*(u32 *)((u8 *)arg0 + 0xAC);
    base = D_002941C0;
    p = (s32 *)((u8 *)p + 0x20C);
    p = (s32 *)((u8 *)p + ofs);
    return base[*(s32 *)p];
}
