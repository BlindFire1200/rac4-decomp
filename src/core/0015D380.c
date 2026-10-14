#include "common.h"

/* Declared without a size so the compiler addresses them with lui/lw, not $gp (-G8). */
extern void (*D_00212078[])(void);
extern void (*D_00212090[])(void);
#define D_00212078 (D_00212078[0])
#define D_00212090 (D_00212090[0])

void func_0015D380(void) {
    if (D_00212078) {
        D_00212078();
    }
}
