#include "common.h"

/* Swaps the 0x6358/0x635C pointer pair depending on which buffer 0x635C holds. */
void func_01EE98B0(void *arg0) {
    u8 *temp_a1;
    u8 *temp_v1;

    temp_v1 = (u8 *)arg0 + 0x5B48;
    temp_a1 = (u8 *)arg0 + 0x5F50;
    if (*(u8 **)((u8 *)arg0 + 0x635C) == temp_v1) {
        *(u8 **)((u8 *)arg0 + 0x635C) = temp_a1;
        *(u8 **)((u8 *)arg0 + 0x6358) = temp_v1;
        return;
    }
    *(u8 **)((u8 *)arg0 + 0x635C) = temp_v1;
    *(u8 **)((u8 *)arg0 + 0x6358) = temp_a1;
}
