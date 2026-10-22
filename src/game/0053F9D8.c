#include "common.h"

extern s32 D_0021EDD4;
extern s32 *D_0021DDA4;
extern u8 D_00339500[];

typedef struct Type2 {
    u8 pad0[0xC8];
    s32 (*fC8)(s32, s32, void *);
} Type2;

typedef struct Type1 {
    u8 pad0[0x2B0];
    s32 f2B0;
    u8 pad1[0x70];
    Type2 *f324;
} Type1;

/* Walks the table of records at 0x339500 and calls the first record's handler found at offset 0xC8, or returns 0. */
s32 func_0053F9D8(void) {
    s32 (*temp_v0)(s32, s32, void *);
    s32 temp_v1;
    s32 var_a1;
    Type1 *temp_a0;
    u8 *var_a0;
    u8 *var_a2;

    if (D_0021EDD4 == 1) {
        return 0;
    } else {
        var_a0 = D_00339500;
        temp_v1 = *D_0021DDA4;
        var_a1 = 0;
        if (temp_v1 > 0) {
            var_a2 = var_a0;
            for (;;) {
                temp_a0 = *(Type1 **)(var_a0 + 0x2EF4);
                if (temp_a0 != 0) {
                    temp_v0 = temp_a0->f324->fC8;
                    if (temp_v0 != 0) {
                        return temp_v0(temp_a0->f2B0, var_a1, (void *)var_a2);
                    }
                    return 0;
                }
                var_a2 += 0x31F0;
                var_a1 += 1;
                var_a0 = var_a2;
                if (var_a1 >= temp_v1) {
                    return 0;
                }
            }
        }
        return 0;
    }
}
