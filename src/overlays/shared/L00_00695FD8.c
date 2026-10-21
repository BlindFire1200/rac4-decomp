#include "common.h"

extern void func_L00_00695FF8(s32, s32, void *);
extern void func_L00_00695F60(void);

// Forward both arguments plus a pointer 0x10 bytes into func_L00_00695F60.
void func_L00_00695FD8(s32 arg0, s32 arg1) {
    func_L00_00695FF8(arg0, arg1, (u8 *)func_L00_00695F60 + 0x10);
}
