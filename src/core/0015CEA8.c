#include "common.h"

/* Declared without a size so the compiler addresses them with lui/lw, not $gp (-G8). */
extern void (*D_00211FC8[])(void);
extern void (*D_00212090[])(void);
#define D_00211FC8 (D_00211FC8[0])
#define D_00212090 (D_00212090[0])

void func_0015CEA8(void) {
    if (D_00211FC8) {
        D_00211FC8();
    }
}
