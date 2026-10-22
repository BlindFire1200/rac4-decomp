#include "common.h"

/* Returns 0x80404040 when the first byte of arg0 is nonzero, else 0x80808080. */
s32 func_004D1D80(u8 *arg0) {
    return (*arg0 == 0) ? 0x80808080 : 0x80404040;
}
