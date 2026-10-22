#include "common.h"

extern void func_0011A518(void *arg0, int arg1, int arg2);
extern int D_004C20A8[100];

typedef struct {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    char f14[0x3E8];
    int f3FC;
    unsigned char f400;
} L00Menu;

/* Sets up a multiplayer menu structure: clears its counters and flags, stores the entry-table pointer, and prepares the 1000-entry row array. */
void *func_L00_0077DF80(L00Menu *arg0) {
    arg0->f0 = 0;
    arg0->f4 = 0;
    arg0->f3FC = 0;
    arg0->f400 = 0;
    arg0->f10 = (int)(long)&D_004C20A8[0];
    func_0011A518(arg0->f14, 0, 0x3E8);
    return arg0;
}
