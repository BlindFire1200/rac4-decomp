#include "common.h"

extern void func_006EBB70();
extern void func_L00_006EAC00();
extern void func_L00_006EAF38();

/* Dispatches on the second argument to one of three handlers. */
void func_L00_006EAB90(s32 arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        func_L00_006EAC00();
        break;
    case 1:
        func_L00_006EAF38();
        break;
    case 2:
        func_006EBB70();
        break;
    }
}
