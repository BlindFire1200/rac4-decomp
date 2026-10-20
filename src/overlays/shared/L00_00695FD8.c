#include "common.h"

extern void func_L00_00695FF8(int, int, void *);
extern u8 func_L00_00695F60[];

/* Calls the setup routine with a pointer 0x10 bytes into the table at 0x00695F60. */
void func_L00_00695FD8(int a, int b) {
    func_L00_00695FF8(a, b, &func_L00_00695F60[0x10]);
}
