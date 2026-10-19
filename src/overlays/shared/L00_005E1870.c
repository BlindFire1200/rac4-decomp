#include "common.h"

typedef struct {
    u32 id;
    u8 active;
    u8 pad[3];
} SlotFlags;
extern SlotFlags D_00270DC0[];

// Clear the active byte of the slot indexed by the owner.
void func_L00_005E1870(u8 *owner) {
    D_00270DC0[*(s16 *)(owner + 0xE)].active = 0;
}
