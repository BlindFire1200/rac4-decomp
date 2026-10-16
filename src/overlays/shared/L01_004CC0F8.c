#include "common.h"

extern void func_L01_004CFEC8(void);
extern void func_L01_004D2FD8(void);

// Dispatch on the object's type halfword (+0xBC): three types run
// func_L01_004D2FD8, three others run func_L01_004CFEC8.
void func_L01_004CC0F8(u8 *object) {
    s16 type = *(s16 *)(object + 0xBC);
    if ((type == 0x1A63) || (type == 0x2555) || (type == 0x2556)) {
        func_L01_004D2FD8();
    } else if ((type == 0x20C7) || (type == 0x2107) || (type == 0x2557)) {
        func_L01_004CFEC8();
    }
}
