#include "common.h"

// Extract and offset a field
s32 func_L00_006EC440(u32 *arg0) {
    return ((*arg0 >> 4) & 0x3F) + 0xC;
}
