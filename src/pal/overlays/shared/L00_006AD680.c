/* cflags: @ee29 -O2 -G8 */
#include "common.h"




s32 func_L00_006AD680(void) {
    s32 temp_v1;

    temp_v1 = *(s32 *)0x21DE98;
    if ((u32) (temp_v1 - 0x15) >= 0xFU) {
        return (u32) (temp_v1 - 0x3D) < 0xFU;
    }
    return 1;
}
