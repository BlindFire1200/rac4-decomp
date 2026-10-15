#include "common.h"

extern s32 *D_0021DDA4;
extern void func_0061E400(s32);
extern void func_0061E4C8(s32, s32);

// Initialize and update each active entry.
void func_L00_0061E110(void) {
    s32 i = 0;
    func_0061E400(0);
    if (*D_0021DDA4 > 0) {
        do {
            func_0061E4C8(i, 1);
            i++;
        } while (i < *D_0021DDA4);
    }
}
