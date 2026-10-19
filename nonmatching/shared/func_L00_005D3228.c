/* Not matching yet: BYTES 1/240 (tools/try_func.py func_L00_005D3228 --diff). Not part of the build. */
#include "common.h"
typedef struct { u8 pad0[0xAC]; s32 index; u8 padB0[0xBC-0xB0]; s16 state; } Block;
extern Block *D_00222454;
extern Block *D_0022246C;
void func_L00_005BCCA8(s32, s32, s32);
void func_L00_005D3228(s32 *base, s32 arg1, s32 *position, Block *start, Block *end) {
    Block *p = start != 0 ? start : D_00222454;
    Block *stop = end != 0 ? end : D_0022246C;
    if (p != stop) {
        do {
            if (p->state == 0) p->index = 0;
            else if (p->index < 0) p->index = 0;
            else {
                s32 *entry = (s32 *)((u8 *)base + p->index * 8);
                s32 size = entry[1];
                s32 offset = entry[0];
                p->index = *position;
                func_L00_005BCCA8(*position, arg1 + offset, size);
                entry[0] = *position;
                *position += size;
            }
            p = (Block *)((u8 *)p + 0x100);
        } while (p != stop);
    }
    *position = (*position + 0x3F) & 0xFFFFFFC0;
}
