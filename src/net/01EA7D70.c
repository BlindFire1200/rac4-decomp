#include "common.h"

#include "common.h"

typedef struct {
    u8 f00[0x38];
    s32 (*f38)(void);
} Type1;

extern s32 D_00167F34_[];

/* Returns the global net object's callback stored at offset 0x38. */
s32 func_01EA7D70(void) {
    return ((Type1 *)D_00167F34_[0])->f38();
}
