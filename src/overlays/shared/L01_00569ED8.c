#include "common.h"

s32 D_0021E924 = 0;
extern u8 *D_0021DDB8;
s32 func_L00_00500CE0(void *);
void func_L01_0056A978(void *, s32);
void func_L01_0056AA58(void *, s32);
s32 func_L01_0056B748(void *);
s32 func_L01_0056B900(void);
s32 func_L01_0056D560(void *);
s32 func_L01_0056D698(void *, s32);
void func_L01_005722C8(void *);
void func_L01_00572330(void *, void *);
s32 func_L01_005724C8(void *, void *, void *, void *);
s32 func_L01_005725D0(void *);
s32 func_L01_00572AE0(void *);
s32 func_L01_00572B08(void *, u16, void *, u16);
extern s32 D_0024B0A0[];
void func_L01_0056AAF8(void);
void func_L01_0056AD80(void);

// Per-frame update: set up a resource slot, process entries, then commit and flip the buffer index
void func_L01_00569ED8(u8 *arg0) {
    void *cb;
    void *s3;
    void *s2;
    s32 i;
    u8 *p;
    u8 v;

    if (arg0 == 0) {
        return;
    }
    if (func_L01_0056B900() == 0) {
        return;
    }
    s3 = arg0 + 0x340;
    if (*(void **)(arg0 + 0x3F8) == 0) {
        func_L01_005722C8(s3);
        if (func_L01_005725D0(arg0 + 0x3F8) == 0 ||
            func_L01_00572B08(*(void **)(arg0 + 0x3F8), *(u16 *)(arg0 + 0x3E2),
                              D_0021DDB8 + (D_0021E924 + 1), D_0021E924) == 0) {
            *(void **)(arg0 + 0x3F8) = D_0024B0A0;
            func_L01_00572B08(D_0024B0A0, *(u16 *)(arg0 + 0x3E2),
                              D_0021DDB8 + (D_0021E924 + 1), 1);
        }
        if (func_L00_00500CE0(arg0 + 0xD0) != 0) {
            for (i = 0; i < func_L00_00500CE0(arg0 + 0xD0); i++) {
                func_L01_0056AA58(arg0, func_L01_0056D698(arg0 + 0xD0, i));
            }
        }
        if (*(s32 *)(arg0 + 0x3E4) != -1) {
            func_L01_0056A978(arg0, *(s32 *)(arg0 + 0x3E4));
        }
        for (p = *(u8 **)(arg0 + 0x3F0); p != 0; p = *(u8 **)(p + 0x1AC)) {
            if (*(s32 *)(p + 0x1B4) != -1 && func_L01_0056B748(p) == 0 &&
                func_L01_0056D560(p) != 0) {
                func_L01_0056A978(arg0, *(s32 *)(p + 0x1B4));
            }
        }
        if (*(void **)(arg0 + 0x3F8) == 0) {
            return;
        }
    }
    v = arg0[0x3E0];
    if (v == 0) {
        cb = func_L01_0056AAF8;
    } else if (v == 1) {
        cb = func_L01_0056AD80;
    }
    if (func_L01_005724C8(*(void **)(arg0 + 0x3F8), cb, s3, arg0) != 0) {
        v = arg0[0x3E0];
        if (v == 0) {
            func_L01_00572330(arg0 + 0x200, s3);
        } else if (v == 1) {
            func_L01_00572330(arg0 + 0x2A0, s3);
        }
        func_L01_00572AE0(*(void **)(arg0 + 0x3F8));
        *(void **)(arg0 + 0x3F8) = 0;
        arg0[0x3E0] = (arg0[0x3E0] + 1) & 1;
    }
}
