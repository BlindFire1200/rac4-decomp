/* cflags: -mno-split-addresses */
#include "common.h"

extern void func_0061E400(s32 arg0);
extern void func_0061E4C8(s32 arg0, s32 arg1);

/* Declared without a size so they are addressed with lui, not $gp (-G8). */
extern s32 *D_0021DDA4[];
#define D_0021DDA4 (D_0021DDA4[0])

/* Runs the init routine, then calls a callback once per entry of a global list. */
void func_L00_0061E110(void) {
    s32 i;

    func_0061E400(0);
    i = 0;
    if (*D_0021DDA4 > 0) {
        do {
            func_0061E4C8(i, 1);
            i += 1;
        } while (i < *D_0021DDA4);
    }
}
