#include "common.h"

/* Declare the external function and global */
extern void func_L00_005AECE8(s32);
extern s32 D_00222188;

/* Set value and call function */
void func_L00_005AF550(void) {
    D_00222188 = 0x50;
    func_L00_005AECE8(0);
}
