#include "common.h"

void func_L01_00427EF0();                              /* extern */
void func_L01_006B3FE8(void *);                        /* extern */

typedef struct { u8 pad0[0x20]; u8 f20; } Type1;
void func_L01_00427758(Type1 *arg0) {
    if (arg0->f20 == 5) {
        func_L01_00427EF0();
        func_L01_006B3FE8(arg0);
    }
}
