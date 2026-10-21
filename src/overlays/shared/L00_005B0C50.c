#include "common.h"

typedef struct {
    s32 f0;
    u32 f4;
    u64 f8;
    s32 f10;
    u32 f14;
    u64 f18;
    s32 f20;
    u32 f24;
    u64 f28;
} Type1;

extern void func_L00_005B1178(s32, s32, s32, s32, u64);
extern void func_L00_00679210(s32, u64, s32);
typedef struct {
    u8 pad[0x150];
    s16 f150;
    s16 f152;
} Type2;

extern Type2 D_206A40[];

Type1 *D_0021E3F8 = 0;

// Draws a header row then two bands per step across the row count.
void func_L00_005B0C50(void) {
    s32 i;
    s32 n;
    s32 last;

    i = 0;
    n = D_206A40->f152;
    if (D_0021E3F8->f8 != 0) {
        func_L00_00679210(0x42, D_0021E3F8->f8 & 0xFF000000FFULL, 0);
    }
    if (D_0021E3F8->f4 & 0xFF000000) {
        func_L00_005B1178(0, n, 0, D_206A40->f150, D_0021E3F8->f4);
    }
    if (n > 0) {
        last = n - 1;
        do {
            if (D_0021E3F8->f18 != 0) {
                func_L00_00679210(0x42, D_0021E3F8->f18 & 0xFF000000FFULL, 0);
            }
            if (D_0021E3F8->f14 & 0xFF000000) {
                func_L00_005B1178(i, (i + D_0021E3F8->f10 > last) ? last : i + D_0021E3F8->f10, 0, D_206A40->f150, D_0021E3F8->f14);
            }
            i += D_0021E3F8->f10;
            if (D_0021E3F8->f28 != 0) {
                func_L00_00679210(0x42, D_0021E3F8->f28 & 0xFF000000FFULL, 0);
            }
            if (D_0021E3F8->f24 & 0xFF000000) {
                func_L00_005B1178(i, (i + D_0021E3F8->f20 > last) ? last : i + D_0021E3F8->f20, 0, D_206A40->f150, D_0021E3F8->f24);
            }
            i += D_0021E3F8->f20;
        } while (i < n);
    }
}
