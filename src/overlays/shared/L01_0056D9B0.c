#include "common.h"

typedef int u128 __attribute__((mode(TI)));

extern void *func_00595D00(void *);
extern void *func_006658C0();
extern s32 func_L00_005F1208(u128, s32);
extern void *func_L00_005F2FB8(void);
extern s32 *D_0021DDA4;
extern s32 D_0021E824;
extern s32 D_0021E828;

s32 func_L01_0056D9B0(s32 arg0) {
    s32 i;
    u8 *obj;
    u8 *ent;
    u8 *p;
    s32 j;

    s32 ret;

    if (arg0 == -1) return 0;
    for (i = 0; i < *D_0021DDA4; i++) {
        ent = func_006658C0(i);
        if (ent != 0 && func_L00_005F1208(*(u128 *)(ent + 0xA0), arg0) != 0) { ret = 1; goto end; }
    }
    if (D_0021E824 == 1) goto fail;
    if (D_0021E824 == 0 && D_0021E828 == 1) goto fail;
    obj = func_L00_005F2FB8();
    p = obj + 0x1D0;
    for (j = 0; j < *(s32 *)(obj + 8); j++, p += 4) {
        if (*(void **)p == 0) continue;
        if (obj[0] == 0) continue;
        if (obj[3] == 0) continue;
        if (func_00595D00(*(void **)p) == 0) continue;
        if (*(s32 *)((u8 *)func_00595D00(*(void **)p) + 4) & 0x100) continue;
        if (!((p[0x10] ^ 1) & 1)) continue;
        if (func_L00_005F1208(*(u128 *)(*(u8 **)p + 0x10), arg0) != 0) { ret = 1; goto end; }
    }
fail:
    ret = 0;
end:
    return ret;
}
