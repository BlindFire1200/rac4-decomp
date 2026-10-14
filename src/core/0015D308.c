#include "common.h"

/* Declared without a size so the compiler addresses them with lui/lw, not $gp (-G8). */
extern void (*D_00212068[])(void);
extern void (*D_00212090[])(void);
#define D_00212068 (D_00212068[0])
#define D_00212090 (D_00212090[0])

void func_0015D308(void) {
    if (D_00212068) {
        D_00212068();
    }
}
