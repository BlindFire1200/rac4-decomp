#include "common.h"

typedef struct {
    char pad[4];
    s32 f4, f8, fC, f10, f14, f18;
} Type1;

// Initialize the record: store the three values and clear the three trailing
// fields (+0x10, +0x14, +0x18); +0 is left untouched.
void func_00510A78(Type1 *record, s32 val_0C, s32 val_04, s32 val_08) {
    record->f4 = val_04;
    record->f8 = val_08;
    record->fC = val_0C;
    record->f18 = 0;
    record->f10 = 0;
    record->f14 = 0;
}
