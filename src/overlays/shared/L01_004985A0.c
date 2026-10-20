/* cflags: -mno-split-addresses */
#include "common.h"

extern void *func_00595D70(void *);
extern s32 func_L00_005E6560(u8 *);
extern s32 D_0021E824_[];
extern s32 D_0021E828_[];
extern unsigned char *D_00222D34;
#define D_0021E824 (D_0021E824_[0])
#define D_0021E828 (D_0021E828_[0])

// Check whether the owner's goal (+0x60 mode) is satisfied: count active list items or compare +0x4 against +0x64.
s32 func_L01_004985A0(u8 *arg0) {
    u8 *s3 = *(u8 **)(arg0 + 0xAC);
    u8 *item;
    s32 count;
    u8 *obj;

    if (D_0021E824 == 0 && D_0021E828 == 1 && *(s32 *)(s3 + 0x60) == D_0021E828) {
        return 1;
    }
    if (*(s32 *)(s3 + 0x60) == 5) {
        count = 0;
        for (item = D_00222D34; item != 0; item = *(u8 **)(item + 0x28)) {
            if (*(s32 *)(item + 0xAC) != 0) {
                obj = func_00595D70(item);
                if (obj != 0 && func_L00_005E6560(item) == 0) {
                    if (*(u16 *)(obj + 0x6C) != 0) {
                        count++;
                    }
                }
            }
        }
        if (count < *(s32 *)(s3 + 0x64)) {
            goto fail;
        }
        return 1;
    }
    if (*(s32 *)(s3 + 0x4) >= *(s32 *)(s3 + 0x64)) {
        return 1;
    }
fail:
    return 0;
}
