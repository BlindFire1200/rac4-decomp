#include "common.h"

extern s32 D_002224A0;
extern s32 D_002224A4;
extern s32 D_00269DA0[];
extern s32 D_002224B4;

// Clear the table entries between the two bounds and reset the counter.
void func_L00_005DEC30(void) {
    s32 first = D_002224A4;
    s32 limit = D_002224A0;
    if (first < limit) {
        s32 count = limit - first;
        s32 *ptr = D_00269DA0 + first;
        do {
            *ptr = 0;
            count--;
            ptr++;
        } while (count != 0);
    }
    D_002224B4 = 0;
}
