#include "common.h"

typedef struct {
    u8 f00[0x64];
    s32 (*f64)();
} Type1;

extern s32 D_00167F34[];

/* Returns the result of the global net object's callback stored at offset 0x64. */
s32 func_01EA8C68(void) {
    return ((Type1 *)D_00167F34[0])->f64();
}
