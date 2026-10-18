#include "common.h"

struct Type0 {
    u8 pad0[0x618];
    u8 unk618;
    s32 unk61C;
    s32 unk620;
};

struct Type1 {
    u16 unk0;
    u8 pad2[0x16];
    s32 unk18;
    s32 unk1C;
};

extern struct Type0 D_00172160;
extern u16 D_0021DFB0[];
extern u64 func_0012E370(void);
extern void func_0015A028(void);
extern void func_0015A050(void);
extern void func_0015B548(s32);
extern s32 func_0015B558(void);
extern s32 func_01ED81F8(void *, void *, s32);
extern void func_0015C018(void);

s32 func_0015BEE8(s32 arg0, s32 arg1, s32 arg2) {
    struct Type1 req;
    s32 start;
    s32 result;

    req.unk18 = arg0;
    req.unk1C = arg1;
    req.unk0 = D_0021DFB0[0];
    D_00172160.unk618 = 1;
    start = (s32)(func_0012E370() / 0x24000);
    D_00172160.unk61C = arg2;
    func_0015B548(func_01ED81F8(&req, func_0015C018, 0));
    func_0015A028();
    result = 1;
    while (D_00172160.unk618 != 0) {
        if (func_0015B558() != 0) {
            result = 0;
            break;
        }
        func_0015A050();
        if ((s32)(func_0012E370() / 0x24000) - start > 5000) {
            result = 0;
            break;
        }
    }
    D_00172160.unk618 = 0;
    if (result != 0 && D_00172160.unk620 != 0) {
        result = 0;
    }
    return result;
}
