#include "common.h"

extern void func_00497980(s32);
extern u8 D_31E898[];

static u8 D_21FC11 = 0;

/* Marks an owner slot in the actor table as taken and asks the game to rebuild the roster when the request flag is clear */
void func_004D7448(s32 arg0) {
    u8 *root;
    u8 temp_a1;

    temp_a1 = D_21FC11;
    root = arg0 * 0x528 + D_31E898;
    *(s32 *)root = 1;
    if (temp_a1 == 0) {
        func_00497980(6);
    }
}
