/* cflags: @ee29 -O2 -G8 */
#include "common.h"

extern u8 D_00220A52;
/* Read the old byte and replace it with the caller byte, returning the previous byte. */

u8 func_L00_0070BFD8(u8 arg0) {
    u8 temp_v0;

    temp_v0 = D_00220A52;
    D_00220A52 = arg0;
    return temp_v0;
}
