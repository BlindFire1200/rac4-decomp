#include "common.h"

extern s32 *D_0021DDA4;
extern char D_00368F60[];
void func_L00_006FF1F8(s32 a, s32 b, s32 c);
s32 func_L00_00700708(s32 a, s32 b);

/* For each entry, apply func_L00_006FF1F8 to each of 20 slots func_L00_00700708 accepts. */
void func_L01_00666908(void) {
    char *p;
    s32 i;
    s32 j;
    s32 h;

    p = D_00368F60;
    i = 0;
    while (i < *D_0021DDA4) {
        h = *(s32 *)(p + 0x26E4);
        for (j = 0; j < 20; j++) {
            if (func_L00_00700708(h, j) != 0) {
                func_L00_006FF1F8(*(u8 *)(p + 0x2FEA), j, -1);
            }
        }
        i++;
        p = D_00368F60 + i * 0x31F0;
    }
}
