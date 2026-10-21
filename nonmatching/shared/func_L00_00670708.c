/* Not matching yet: BYTES 15/108 (tools/try_func.py func_L00_00670708 --diff). Not part of the build. */
#include "common.h"
extern u8 D_00222EA8[];
extern s32 D_00222EB8;
extern volatile s32 D_00222EBC;
extern u8 D_0032C400[];

void func_L00_00670708(void) {
    u8 *indices;
    s32 i;
    s32 count;
    D_00222EBC = 1;
    count = D_00222EB8;
    if (count > 0) {
        indices = D_00222EA8;
        i = 0;
        do {
            u8 *object = *(u8 **)(D_0032C400 + (*indices * 4));
            *(u16 *)(object + 0x3C) |= 1;
            indices++;
            i++;
        } while (i < D_00222EB8);
    }
}
