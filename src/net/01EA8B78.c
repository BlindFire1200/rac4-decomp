#include "common.h"

typedef struct {
    u8 f00[0x50];
    void (*f50)(s32);
} Type1;

extern s32 D_00167F34[];

/* Calls the global net object's callback stored at offset 0x50, passing the incoming argument through. */
void func_01EA8B78(s32 a0) {
    ((Type1 *)D_00167F34[0])->f50(a0);
}
