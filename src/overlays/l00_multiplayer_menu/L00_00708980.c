#include "common.h"

extern s32 D_002233A4;
extern void func_L00_00779598(s32, s32);

/* Calls the multiplayer menu helper with the word at offset 0x64 of the global object and a zero flag. */
void func_L00_00708980(void) {
    func_L00_00779598(*(s32 *)((u8 *)D_002233A4 + 0x64), 0);
}
