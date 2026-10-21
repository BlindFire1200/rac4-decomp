/* Not matching yet: BYTES 44/276 (tools/try_func.py func_L00_006A97A8 --diff). Not part of the build. */
#include "common.h"
typedef struct Type1 { u8 pad0[0xBC]; s16 fBC; } Type1;
extern Type1 *D_00222454;
extern Type1 *D_00222470;
extern u32 D_002446C0[];
extern u32 D_00244740[];
extern u32 D_002447C0[];
extern u32 D_00244840[];
void func_L00_006A97A8(void) {
    s32 i;
    u32 *p;
    Type1 *entry;
    u32 *first;
    u32 *second;
    p = D_002446C0 + 31;
    i = 31;
    do { *p-- = 0; i--; } while (i >= 0);
    p = D_00244740 + 31;
    i = 31;
    do { *p-- = 0; i--; } while (i >= 0);
    p = D_002447C0 + 31;
    i = 31;
    do { *p-- = 0; i--; } while (i >= 0);
    p = D_00244840 + 31;
    i = 31;
    do { *p-- = 0; i--; } while (i >= 0);
    entry = D_00222454;
    first = D_002446C0;
    second = D_00244740;
    while (entry < D_00222470) {
        if (entry->fBC == 0x19C4) {
            *first++ = (u32)entry;
        } else if (entry->fBC == 0x2F6) {
            *second++ = (u32)entry;
        }
        entry = (Type1 *)((u8 *)entry + 0x100);
    }
}
