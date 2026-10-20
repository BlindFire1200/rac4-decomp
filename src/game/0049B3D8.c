#include "common.h"

typedef struct __attribute__((packed)) {
    u32 f0[4];
} WordTable4;

extern void *func_00501458(void *, void *, void *, void *, void *, void *);
extern void func_0049B8E0(void);
extern void func_0049B900(void);
extern void func_0049B920(void);

s32 D_002215AC = 0;
s32 D_002215B0 = 0;
s32 D_002215B4 = 0;
s32 D_002215B8 = 0;
extern u8 D_00306EC8[];
extern u8 D_00306EE0[];
extern u8 D_00306EF8[];
extern u8 D_00306F10[];
extern WordTable4 D_0021F640;

// On first use register the four blocks D_00306EC8, D_00306EE0, D_00306EF8 and
// D_00306F10 through func_00501458 (with the callbacks func_0049B8E0,
// func_0049B900, func_0049B920), each guarded by its own flag, then return word
// index of the table D_0021F640.
s32 func_0049B3D8(s32 index) {
    WordTable4 copy;
    if (D_002215AC == 0) {
        func_00501458(D_00306EC8, (void *)func_0049B8E0, (void *)func_0049B900,
                      (void *)func_0049B920, 0, 0);
        D_002215AC = 1;
    }
    if (D_002215B0 == 0) {
        func_00501458(D_00306EE0, (void *)func_0049B8E0, (void *)func_0049B900,
                      (void *)func_0049B920, 0, 0);
        D_002215B0 = 1;
    }
    if (D_002215B4 == 0) {
        func_00501458(D_00306EF8, (void *)func_0049B8E0, (void *)func_0049B900,
                      (void *)func_0049B920, 0, 0);
        D_002215B4 = 1;
    }
    if (D_002215B8 == 0) {
        func_00501458(D_00306F10, (void *)func_0049B8E0, (void *)func_0049B900,
                      (void *)func_0049B920, 0, 0);
        D_002215B8 = 1;
    }
    copy = D_0021F640;
    return copy.f0[index];
}
