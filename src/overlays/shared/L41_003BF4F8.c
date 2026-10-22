#include "common.h"

// Returns 0 when the object's +0x67 byte is 7..11 or its +0x20 byte equals 5; otherwise 1.
s32 func_L41_003BF4F8(void *arg0) {
    s32 res = 1;
    s32 t = *(u8 *)((u8 *)arg0 + 0x67);

    if (t < 12) {
        if (t >= 7) {
            res = 0;
            goto end;
        }
    }
    if (*(u8 *)((u8 *)arg0 + 0x20) == 5) {
        res = 0;
    }
end:
    return res;
}
