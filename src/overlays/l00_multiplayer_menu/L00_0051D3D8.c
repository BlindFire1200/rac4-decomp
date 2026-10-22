#include "common.h"

extern char D_00530340[];
extern char D_004AE210[];
extern s32 func_L00_0051D410(char *, char *, s32, s32, s32);

/* Passes two data addresses plus the three incoming arguments to func_L00_0051D410 */
void func_L00_0051D3D8(s32 arg0, s32 arg1, s32 arg2) {
    func_L00_0051D410(D_00530340, D_004AE210, arg0, arg1, arg2);
}
