/* Not matching yet: SIZE ours 212 / retail 280 (tools/try_func.py func_L00_006AA5F8 --diff). Not part of the build. */
#include "common.h"
typedef struct Type1 { u8 pad0[0xC]; s32 fC; s32 f10; void *f14; } Type1;
extern u32 D_00343EA0[];
extern u8 *D_00343ED8[];
extern u8 D_0035D0A0[];
extern s32 D_004B4998[];
extern u8 D_004B49B8[];
extern s32 D_004B49E0[];
void func_L00_006AA5F8(s32 arg0) {
    s32 i;
    s32 count;
    s32 stride;
    u8 *base;
    Type1 *record;
    D_00343EA0[arg0] = 0;
    D_00343ED8[arg0] = D_0035D0A0;
    i = 0;
    count = D_004B4998[arg0];
    stride = D_004B49E0[arg0];
    if (count > 0) {
        do {
            base = D_00343ED8[arg0] + i * stride;
            record = (Type1 *)base;
            record->f14 = D_004B49B8;
            record->f10 = i == 0 ? 0 : (s32)(D_00343ED8[arg0] + (i - 1) * stride);
            if (i == count - 1) {
                record->fC = 0;
            } else {
                record->fC = (s32)(D_00343ED8[arg0] + (i + 1) * stride);
            }
            i++;
        } while (i < D_004B4998[arg0]);
    }
}
