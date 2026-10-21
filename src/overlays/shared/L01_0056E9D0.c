#include "common.h"
typedef struct {
    s32 f0;
    s32 f4;
    u8 pad8[0x10];
    s32 f18;
    s32 f1C;
    u8 f20;
    u8 f21;
    u8 f22;
} Type0;
extern Type0 *func_L00_005C8EB8(void *);
s32 func_L01_0056E9D0(void *arg0, void *arg1) {
    Type0 *record;
    if (arg0 && *(s32 *)(arg0 + 0x14)) *(s32 *)(arg0 + 0x14) = 0;
    if (!arg1) return 1;
    record = func_L00_005C8EB8(arg1);
    if (!record) return 1;
    record->f22 = 1;
    record->f18 = 0;
    record->f1C = 0;
    record->f20 = 0;
    record->f21 = 0;
    record->f4 = 0;
    return 1;
}
