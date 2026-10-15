#include "common.h"

extern s32 D_002224A0;
extern s32 D_002224A4;
extern s32 D_00269DA0[];
extern s32 D_002224B4;

void func_L00_005DEC30(void) {
    s32 start = D_002224A4;
    s32 end = D_002224A0;
    if (start < end) {
        s32 count = end - start;
        s32 *ptr = D_00269DA0 + start;
        do {
            *ptr = 0;
            count--;
            ptr++;
        } while (count != 0);
    }
    D_002224B4 = 0;
}
