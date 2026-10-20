#include "common.h"

/* ORs a bit mask into the 32-bit word at offset 0x10 of the object passed in. */
void func_L00_0058E33C(volatile s32 *arg0, s32 arg1) {
    arg0[4] |= arg1;
}
