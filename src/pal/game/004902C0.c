#include "common.h"
typedef struct { u8 pad[0x34C]; s32 cursor; s32 pad350; s32 values[7]; } Type1;
extern Type1 D_001EE680[];
// Returns the previous entry from a seven-element ring.
s32 func_004902C0(Type1 *arg0) {
    if (arg0 != 0) {
        return arg0->values[(arg0->cursor + 6) % 7];
    } else {
        return D_001EE680->values[(D_001EE680->cursor + 6) % 7];
    }
}
