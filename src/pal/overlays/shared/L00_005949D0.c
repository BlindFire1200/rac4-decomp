#include "common.h"

extern void func_00126E20(s32);
extern void func_00163550(s32 repeat);
extern u32 func_001638B0(s32 a0, u32 a1, u32 a2, u32 a3, u32 a4, s32 a5, s32 a6);
extern void func_L00_005D4ED0(void *, void *);
extern void func_0046A500(s32, void *);
extern u8 D_00240000[];
extern u8 D_1C20C0[];
extern u8 D_00171DB8[];

typedef struct {
    u8 pad0[0xC];
    s32 fC[1];
} Type1;

// PAL version of func_L00_00593FD0: draw a table entry selected by the current index,
// then hand its subentry for the language byte to a handler; language 0 takes the
// second subentry on PAL.
void func_L00_005949D0(void) {
    u8 *g = D_00240000;
    u8 *s = D_1C20C0;
    s32 base;
    Type1 *entry;
    s32 local;

    base = *(s32 *)(g + 0xC);
    entry = (Type1 *)(base + (*(s32 *)(s + 0xCC0C) << 11));
    local = *(s32 *)(g + 0x80);
    func_00163550(1);
    func_001638B0(0, base, *(s32 *)(s + 0xCC08) + *(s32 *)(s + 0xCBB4),
                  *(s32 *)(s + 0xCC0C), 0, 0, 0);
    func_00126E20(0);
    func_0046A500(base, entry);
    func_00126E20(0);
    if (entry->fC[0] != 0) {
        if (D_00171DB8[0xBD] == 0) {
            func_L00_005D4ED0((u8 *)entry + entry->fC[1], &local);
        } else {
            func_L00_005D4ED0((u8 *)entry + entry->fC[D_00171DB8[0xBD]], &local);
        }
    }
}
