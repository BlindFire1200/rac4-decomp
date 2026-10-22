#include "common.h"

extern s32 D_00530560[];
extern s32 D_00530340[];
extern void func_L00_00534CC8(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3);

/* Initializes the multiplayer menu tables: passes the two data block addresses plus the two caller arguments to the setup routine. */
void func_L00_0052DF18(s32 arg0, s32 arg1) {
    func_L00_00534CC8(D_00530560, D_00530340, arg0, arg1);
}
