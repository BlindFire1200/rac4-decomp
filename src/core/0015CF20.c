#include "common.h"

/* Declared without a size so the compiler addresses them with lui/lw, not $gp (-G8). */
extern void (*D_00211FD0[])(void);
extern void (*D_00212090[])(void);
#define D_00211FD0 (D_00211FD0[0])
#define D_00212090 (D_00212090[0])

void func_0015CF20(void) {
    if (D_00211FD0) {
        D_00211FD0();
    }
}
