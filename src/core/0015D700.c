#include "common.h"

/* Declared without a size so the compiler addresses them with lui/lw, not $gp (-G8). */
extern void (*D_002120A8[])(void);
extern void (*D_00212090[])(void);
#define D_002120A8 (D_002120A8[0])
#define D_00212090 (D_00212090[0])

void func_0015D700(void) {
    if (D_002120A8) {
        D_002120A8();
    }
}
