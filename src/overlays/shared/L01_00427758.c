#include "common.h"

void func_L01_00427EF0();
void func_L01_006B3FE8(void *);

typedef struct { u8 pad0[0x20]; u8 f20; } Type1;

// In state 5 (+0x20) run func_L01_00427EF0 and func_L01_006B3FE8.
void func_L01_00427758(Type1 *object) {
    if (object->f20 == 5) {
        func_L01_00427EF0();
        func_L01_006B3FE8(object);
    }
}
