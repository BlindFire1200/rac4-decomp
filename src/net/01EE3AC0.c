#include "common.h"

/* net: returns 0 when arg0 is NULL, 1 when the word at offset 0x8 of arg0 is non-zero, else 0 */
s32 func_01EE3AC0(void *arg0) {
    if (arg0 != NULL) {
        if (*(s32 *)((u8 *)arg0 + 0x8) != 0) {
            return 1;
        }
    }
    return 0;
}
