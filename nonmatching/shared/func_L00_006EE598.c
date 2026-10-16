/* Not matching yet: SIZE 208/368 (tools/try_func.py func_L00_006EE598 --diff). Not part of the build. */
#include "common.h"
typedef struct { u8 pad48[0x48]; u32 value48; u8 padB8[0xB8 - 0x4C]; volatile u16 flags; } Type3;
typedef struct { u32 pad; volatile Type3 *state; } Type2;
typedef struct { u8 pad[0x2318]; volatile u32 value2318; u8 pad2[0x2674 - 0x231C]; volatile u32 value2674; u8 pad3[0x26E4 - 0x2678]; Type3 * volatile target; u8 pad4[0x2F28 - 0x26E8]; Type2 * volatile config; } Type1;
void func_L00_006EE598(Type1 *arg0) {
    volatile u8 *global = *(volatile u8 **)0x21DFF0;
    volatile u16 *dst;
    Type3 *src;
    u32 v;
    dst = (volatile u16 *)arg0->target;
    if (*(volatile s8 *)(global + 0x20)) {
        dst[0xABA / 2] = 1; dst[0xAFE / 2] = 1; dst[0xB42 / 2] = 1; dst[0xB86 / 2] = 1;
        dst[0xBCA / 2] = 1; dst[0xC0E / 2] = 1; dst[0xC52 / 2] = 1; dst[0xE2E / 2] = 1;
    } else {
        src = arg0->config->state;
        v = src->flags;
        dst[0xABA / 2] = (v & 4) != 0;
        dst[0xAFE / 2] = (v & 8) != 0;
        dst[0xB42 / 2] = (v & 0x10) != 0;
        dst[0xB86 / 2] = (v & 0x20) != 0;
        dst[0xBCA / 2] = (v & 0x40) != 0;
        dst[0xC0E / 2] = (v & 0x80) != 0;
        dst[0xC52 / 2] = (v & 0x100) != 0;
        dst[0xE2E / 2] = (v & 0x8000) != 0;
    }
    v = arg0->config->state->value48;
    if (v != arg0->value2318)
        arg0->value2674 = v;
}
