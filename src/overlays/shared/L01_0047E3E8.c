#include "common.h"

extern u8 *D_00222D14;
extern void *func_L00_005DEBD0(s32, s32, s32);
extern s32 func_L01_0047E5B0(void *);
extern s32 func_L01_0056D480(s32, void *);
extern s32 func_L01_00592160(s32, s32, s32);
extern s32 func_L01_0064E8F0(void *);
extern s32 func_L01_0064E948(s32);

// Check that all slot groups of the object's +0xAC block are in a ready state.
s32 func_L01_0047E3E8(u8 *object) {
    u8 *block = *(u8 **)(object + 0xAC);
    s32 i;
    s32 j;

    for (i = 0; i < 2; i++) {
        s32 id = ((s32 *)(block + 0x10))[i];
        j = 0;
        if (id == -1 || func_L01_0064E8F0(D_00222D14 + (id << 8))) {
            j = 1;
        }
        if (!(u8)j) return 0;
    }
    for (j = 0; j < 2; j++) {
        if (!func_L01_0064E948(((s32 *)(block + 0x18))[j])) return 0;
    }
    for (i = 0; i < 2; i++) {
        s32 id = ((s32 *)(block + 0x20))[i];
        u8 *other;
        void *cb;
        if (id == -1) continue;
        other = D_00222D14 + (id << 8);
        cb = func_L00_005DEBD0(*(s16 *)(other + 0xBC), 0xE, 0x1C);
        if (other == 0 || other[0x20] == 0xFE || other[0x20] == 0xFD) continue;
        if (cb != 0 && ((s32 (*)(void *))((void **)cb)[1])(other)) continue;
        if (*(s16 *)(other + 0xBC) != 0x2112) return 0;
        if (!func_L01_0056D480(*(s32 *)(*(u8 **)(other + 0xAC) + 0x1B0), *(u8 **)(other + 0xAC))) return 0;
    }
    for (j = 0; j < 2; j++) {
        if (func_L01_00592160(((s32 *)(block + 0x28))[j], -1, 0)) return 0;
    }
    return func_L01_0047E5B0(object) != 0;
}
