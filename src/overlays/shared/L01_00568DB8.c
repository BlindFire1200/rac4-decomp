#include "common.h"

extern s32 func_L00_005C8CF0(s16);
extern void *func_L00_005DEBD0(s32, s32, s32);
extern void func_L01_005926C8(void *, s32, s32);

typedef s32 (*Fn0)();

void func_L01_00568DB8(u8 *arg0) {
    void **tbl;
    s32 id;

    tbl = func_L00_005DEBD0(0x20A3, 0x10, 0x1C);
    if (tbl != 0 && tbl[5] != 0 && ((Fn0)tbl[5])() != 0) {
        return;
    }
    id = func_L00_005C8CF0(*(s16 *)(arg0 + 0xBC));
    if (id != *(s16 *)(arg0 + 0xBC)) {
        func_L01_005926C8(arg0, id, id);
    }
}
