#include "common.h"

void func_00446AA0(void *);
void func_L01_0043FD08(void *);

// For type 0x20E3 run func_00446AA0; for type 0x20AB run func_L01_0043FD08.
void func_L01_0047EC30(u8 *object) {
    if (*(s16 *)(object + 0xBC) == 0x20E3) func_00446AA0(object);
    if (*(s16 *)(object + 0xBC) == 0x20AB) func_L01_0043FD08(object);
}
