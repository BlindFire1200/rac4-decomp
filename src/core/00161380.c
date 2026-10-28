#include "common.h"

typedef struct {
    u8 f0;
    u8 f1;
    u8 f2;
    u8 f3;
    s16 f4;
    s16 f6;
    u8 f8;
    u8 f9;
    s16 fA;
    s16 fC;
} Type1;

extern char D_00212760[];
extern s32 func_00151D80(s32, Type1 *, s32 *);
extern s32 func_00152618(s32, void *);
extern s32 func_001527D8(s32);
extern s32 func_00152BC8(s32, s32, s32);
extern s32 func_00152CC0(s32, s32, s32);

s32 D_0021E020 = 0;
s32 D_0021E02C = 0;

s32 func_00161380(void) {
    Type1 cfg;

    if (D_0021E020 != -1) {
        func_001527D8(D_0021E020);
        D_0021E020 = -1;
    }
    D_0021E02C = 2;
    if (func_00152618(0, D_00212760) != 0) {
        return 1;
    }
    cfg.f0 = 3;
    cfg.f8 = 1;
    cfg.f9 = 0x10;
    cfg.fA = 0x1F40;
    cfg.fC = 0x7D0;
    cfg.f2 = 1;
    cfg.f3 = 0x10;
    cfg.f4 = 0x1F40;
    cfg.f6 = 0x7D0;
    if (func_00151D80(0, &cfg, &D_0021E020) != 0) {
        return 1;
    }
    func_00152BC8(D_0021E020, 0, 0x5E);
    func_00152CC0(D_0021E020, 0, 0x15);
    return 0;
}
