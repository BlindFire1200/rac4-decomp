#include "common.h"

extern void func_01E9E270(s32 a0, s32 a1, s32 a2, s32 a3, s32 t0, void *t1);
extern void func_L00_006EC290(void *entry);
extern s32 func_L00_006EC440(u32 *arg0);
extern s32 D_002233A0;
typedef struct {
    u8 pad0[8];
    s32 f8;
    u8 padC[0x218 - 0xC];
    s32 f218;
    u8 pad21C[0x258 - 0x21C];
    s32 f258;
    u8 pad25C[0x7F8 - 0x25C];
    u8 f7F8;
} Type1;
typedef struct {
    u8 pad0[0x30];
    s32 f30;
} Type2;
extern Type1 D_172160;
extern Type2 D_2120F8;
u8 *D_002206AC = 0;
u8 *D_002206B0 = 0;

// Flush pending entries of the +0x58 list, then release the deferred list.
void func_L00_006EC0B8(void) {
    u8 *p;
    s32 flags;

    for (p = D_002206AC; p != 0; p = *(u8 **)(p + 0x58)) {
        if (p[0x55] != 0 && *(s32 *)(p + 0x4C) <= D_172160.f218) {
            if (*(s32 *)(p + 0x50) != D_002233A0 && D_172160.f258 == 0) {
                flags = D_172160.f7F8 | 0x40;
                func_01E9E270(flags, D_172160.f8, *(s32 *)(p + 0x50),
                              D_2120F8.f30, func_L00_006EC440((u32 *)p), p);
            }
            p[0x55] = 0;
        }
    }
    while (D_002206B0 != 0) {
        p = D_002206B0;
        D_002206B0 = *(u8 **)(p + 0x58);
        func_L00_006EC290(p);
    }
}
