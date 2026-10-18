#include "common.h"

extern void func_00126E20(s32);
extern void func_001634A8(s32 repeat);
extern u32 func_00163808(s32 a0, u32 a1, u32 a2, u32 a3, u32 a4, s32 a5, s32 a6);
extern void func_L00_005D2828(void *, void *);
extern void func_L00_005DB000(s32, void *);
extern u8 D_0023FF00[];
extern u8 D_1C2040[];
extern u8 D_00171DF5_[];
#define D_00171DF5 (D_00171DF5_[0])

typedef struct {
    u8 pad0[0xC];
    s32 fC[1];
} Type1;

// Draw a table entry selected by the current index, then hand its subentry to a handler.
void func_L00_00593FD0(void) {
    u8 *g = D_0023FF00;
    u8 *s = D_1C2040;
    s32 base;
    Type1 *entry;
    s32 local;

    base = *(s32 *)(g + 0xC);
    entry = (Type1 *)(base + (*(s32 *)(s + 0xCC0C) << 11));
    local = *(s32 *)(g + 0x80);
    func_001634A8(1);
    func_00163808(0, base, *(s32 *)(s + 0xCC08) + *(s32 *)(s + 0xCBB4),
                  *(s32 *)(s + 0xCC0C), 0, 0, 0);
    func_00126E20(0);
    func_L00_005DB000(base, entry);
    func_00126E20(0);
    if (entry->fC[0] != 0) {
        func_L00_005D2828((u8 *)entry + entry->fC[D_00171DF5], &local);
    }
}
