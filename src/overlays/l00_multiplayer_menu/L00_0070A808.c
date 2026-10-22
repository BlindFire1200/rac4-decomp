#include "common.h"

extern s32 D_003F3D58[];
extern void func_L00_0070A010(s32, s32);

s8 D_00220A5C = 0;

/* Clears a flag byte and calls func_L00_0070A010 with a global value and -1 */
void func_L00_0070A808(void) {
    func_L00_0070A010(D_003F3D58[0], -1);
    D_00220A5C = 0;
}
