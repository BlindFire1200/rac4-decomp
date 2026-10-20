#include "common.h"
typedef struct { u8 pad0[0xAC]; s32 fAC; u8 padB0[0xBC-0xB0]; s16 fBC; } Type1;
extern Type1 *D_00222454;
extern Type1 *D_0022246C;
void func_L00_005BCCA8(s32, s32, s32);
void func_L00_005D3228(s32 *base, s32 arg1, s32 *position, Type1 *start, Type1 *end) {
    Type1 *p = start != 0 ? start : D_00222454;
    Type1 *stop = end != 0 ? end : D_0022246C;
    if (p != stop) {
        do {
            if (p->fBC == 0) p->fAC = 0;
            else if (p->fAC < 0) p->fAC = 0;
            else {
                s32 *entry = (s32 *)(p->fAC * 8 + (u32)base);
                s32 size = entry[1];
                s32 offset = entry[0];
                p->fAC = *position;
                func_L00_005BCCA8(*position, arg1 + offset, size);
                entry[0] = *position;
                *position += size;
            }
            p = (Type1 *)((u8 *)p + 0x100);
        } while (p != stop);
    }
    *position = (*position + 0x3F) & 0xFFFFFFC0;
}
