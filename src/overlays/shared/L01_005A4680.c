/* cflags: -mno-split-addresses */
#include "common.h"

typedef unsigned int u128 __attribute__((mode(TI)));

typedef struct {
    s32 f0;
    s32 f4;
    s16 f8;
    u8 fA;
    u8 pad;
    s32 fC;
} Type1;

typedef struct {
    u8 pad0[0x10];
    u128 f10;
    u8 pad20[0xBC - 0x20];
    s16 fBC;
} Type2;

typedef struct {
    u8 pad0[0x30];
    u128 f30;
    u8 pad40[0x40];
} Type3;

typedef s32 (*ActionCallback)(Type2 *, u128);

extern Type1 *func_005A3780(void);
extern ActionCallback *func_L00_005DEBD0(s32, s32, s32);
extern s32 D_0021E824[];
extern s32 D_0021E828[];
extern Type3 *D_00222DA0[];
s32 func_L01_005A4680(Type2 *arg0) {
    Type1 *rec;
    ActionCallback *cb;
    s32 was;
    s32 ret;
    u128 v;

    rec = func_005A3780();
    ret = 0;
    if (rec != NULL) {
        was = rec->fA != 0;
        rec->fA = 1;
        if (D_0021E824[0] == 0 && D_0021E828[0] == 1 && rec->f8 == 2 && rec->f4 == 0) {
            cb = func_L00_005DEBD0(0x272F, 0, 4);
            if (cb != NULL) {
                if (arg0->fBC == 0x26EB) {
                    v = arg0->f10;
                } else {
                    v = D_00222DA0[0][rec->fC].f30;
                }
                rec->f4 = (*cb)(arg0, v);
            }
        }
        ret = was;
    }
    return ret;
}
