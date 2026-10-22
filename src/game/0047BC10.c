#include "common.h"

extern void *func_00476690();

/* Return field 0x2C of the object, or zero when there is none. */
s16 func_0047BC10(void) {
    void *temp_v0;

    temp_v0 = func_00476690();
    return temp_v0 != NULL ? *(s16 *)((u8 *)temp_v0 + 0x2C) : 0;
}
