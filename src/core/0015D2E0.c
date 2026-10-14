#include "common.h"

/* Declared without a size so the compiler addresses them with lui/lw, not $gp (-G8). */
extern void (*D_0021206C[])(void);
extern void (*D_00212090[])(void);
#define D_0021206C (D_0021206C[0])
#define D_00212090 (D_00212090[0])

void func_0015D2E0(void) {
    if (D_0021206C) {
        D_0021206C();
    }
}
