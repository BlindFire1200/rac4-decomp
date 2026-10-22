#include "common.h"

typedef struct {
    u8 f00[0x3C];
    s32 (*f3C)();
} Type1;

extern s32 D_00167F34[];

/* Returns the result of the global net object's callback stored at offset 0x3C. */
s32 func_01EA7D98(void) {
    return ((Type1 *)D_00167F34[0])->f3C();
}
