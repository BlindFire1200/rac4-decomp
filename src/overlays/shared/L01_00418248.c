/* cflags: -mno-split-addresses */
#include "common.h"

extern s32 D_0021E824;
extern s32 func_00669348(void);

typedef struct {
    u8 pad_000[0x2F10];
    s32 f2F10;
} Type1;

/* Returns 1 while the global mode flag equals 1 and the helper agrees, else 0/1 from the object's field at 0x2F10. */
s32 func_L01_00418248(Type1 *arg0) {
    s32 var_v1 = 1;

    if (D_0021E824 == 1) {
        var_v1 = func_00669348();
    } else if (arg0->f2F10 != 0) {
        var_v1 = 0;
    }
    return var_v1;
}
