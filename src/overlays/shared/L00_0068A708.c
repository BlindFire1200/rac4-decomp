#include "common.h"

extern s32 D_1DFCF0[];

#define PUT(v) (*(*pp)++ = (u64)(v))

/* Build a GS packet: set scissor/frame/test/zbuf/alpha, draw a sprite, restore zbuf */
void func_L00_0068A708(u64 **pp, s32 w, s32 h, s32 fbw, s32 x0, s32 y0, s32 x1, s32 y1) {
    PUT(0x1000000000000007ULL);
    PUT(0xE);
    PUT(0);
    PUT(0x3F);
    PUT(0);
    PUT(0x19);
    PUT(((u64)(w - 1) << 16) | ((u64)(h - 1) << 48));
    PUT(0x41);
    PUT((u64)(D_1DFCF0[2] >> 13) | ((u64)fbw << 16) | (1ULL << 24) | (0xFF000000ULL << 32));
    PUT(0x4D);
    PUT(0x30802);
    PUT(0x48);
    PUT((u64)(D_1DFCF0[2] >> 13) | (0x31ULL << 24) | (1ULL << 32));
    PUT(0x4F);
    PUT(0x80000000A4ULL);
    PUT(0x43);
    PUT(0x4400000000000001ULL);
    PUT(0x5510);
    PUT(0x346);
    PUT(0xFFFFFFFFULL);
    PUT((u64)x0 | ((u64)y0 << 16));
    PUT((u64)x1 | ((u64)y1 << 16));
    PUT(0x1000000000000003ULL);
    PUT(0xE);
    PUT(0);
    PUT(0x3F);
    PUT((u64)(D_1DFCF0[2] >> 13) | (0x31ULL << 24));
    PUT(0x4F);
    PUT(0);
    PUT(0x3F);
}
