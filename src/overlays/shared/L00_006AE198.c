#include "common.h"

extern s32 D_002221E0;
extern void func_L00_006B1190();
extern void func_005B0038(void *a, void (*b)(), s32 c);

/* Sets the +0x25CA flag once and notifies func_005B0038 when the +0x266D flag is set. */
void func_L00_006AE198(u8 *player) {
    if (player[0x266D] != 0 && player[0x25CA] == 0) {
        player[0x25CA] = 1;
        func_005B0038(&D_002221E0, func_L00_006B1190, *(s32 *)(player + 0x2EF0));
    }
}
