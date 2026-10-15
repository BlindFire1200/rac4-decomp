#include "common.h"

extern void func_006EBB70(void);
extern void func_L00_006EAC00(void);
extern void func_L00_006EAF38(void);

// Run the handler selected by mode (0, 1 or 2).
void func_L00_006EAB90(s32 unused, s32 mode) {
    switch (mode) {
    case 0: func_L00_006EAC00(); break;
    case 1: func_L00_006EAF38(); break;
    case 2: func_006EBB70(); break;
    }
}
