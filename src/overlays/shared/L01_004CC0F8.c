#include "common.h"
extern void func_L01_004CFEC8(void);
extern void func_L01_004D2FD8(void);
void func_L01_004CC0F8(u8 *arg0) {
    s16 type = *(s16 *)(arg0 + 0xBC);
    if ((type == 0x1A63) || (type == 0x2555) || (type == 0x2556)) {
        func_L01_004D2FD8();
    } else if ((type == 0x20C7) || (type == 0x2107) || (type == 0x2557)) {
        func_L01_004CFEC8();
    }
}
