/* Not matching yet: SIZE ours 260 / retail 264 (tools/try_func.py func_L01_0044BC50 --diff). Not part of the build. */
#include "common.h"
typedef struct { u8 pad[0xAC]; s32 base; } Root;
typedef struct { u8 pad[0x08]; s32 f0; s32 f1; u8 pad2[0x2C]; } Entry;
extern u32 D_003A6790[];
extern u32 D_003A67F0[];
extern u32 D_00222B28;
extern s32 D_0044BC50_gp438F[2];
extern s32 D_0044BC50_gp4387[2];
void func_L00_005BA780(void *, void *, s32, u32);
void func_L01_0044BC50(Root *root) {
    s32 i, j;
    Entry *base = (Entry *)(root->base + 0x34);
    for (i = 0; i < 4; i++) {
        void *p = (void *)((u8 *)root->base + (i << 7) + 0x60);
        u32 *tbl = (i & 1) ? D_003A6790 : D_003A67F0;
        base[i].f0 = (s32)tbl;
        func_L00_005BA780(&D_00222B28, p, 2, base[i].f0);
        for (j = 0; j < 2; j++) {
            *(u8 *)((u8 *)p + 8) = 0;
            *(s32 *)((u8 *)p + 12) = 0;
            *(s32 *)p = D_0044BC50_gp438F[j];
            *(s32 *)((u8 *)p + 4) = D_0044BC50_gp4387[j];
            p = (u8 *)p + 0x40;
        }
    }
}
