#include "common.h"
extern int D_003F0E80[];
extern unsigned char D_003D8CD0[];
extern unsigned char D_003F0E8C[];
extern unsigned char D_00243850[];
extern short D_00243570[];
extern unsigned char D_00243480[];
extern unsigned char D_00246250[];
/* Select a record from the active table. */
unsigned char *func_004897F8(int index) {
    int slot;
    if (D_003F0E80[0] == -1) return D_003D8CD0;
    slot = D_00243850[index];
    if (slot == 255) return D_003F0E8C;
    if (D_00243570[slot] != index) return D_003F0E8C + D_00246250[slot] * 32;
    return D_003F0E8C + D_00243480[slot] * 32;
}
