#include "common.h"

extern void *func_L00_005DEBD0(s32, s32, s32);
extern void func_L01_005241D8(s32);
extern u8 *func_L01_00584068(s32);
s32 D_0021EBD8 = 0;
extern s32 D_00222D14;

// Looks up the current record; runs func_L01_005241D8 on its +0xC id, or else checks
// the +0x10 object's callbacks (tables 0x14 then 0x13).
s32 func_L01_00586750(void) {
    u8 *rec = func_L01_00584068(D_0021EBD8);
    s32 id;
    s32 id2;
    u8 *obj;
    void *a;
    void *b;

    if (rec != 0) {
        id = *(s32 *)(rec + 0xC);
        if (id != -1) {
            func_L01_005241D8(id);
            return 1;
        }
        id2 = *(s32 *)(rec + 0x10);
        if (id2 != -1) {
            obj = (u8 *)(D_00222D14 + (id2 << 8));
            a = func_L00_005DEBD0(*(s16 *)(obj + 0xBC), 0x13, 0xC);
            b = func_L00_005DEBD0(*(s16 *)(obj + 0xBC), 0x14, 8);
            if (a != 0) {
                if (*(void **)((u8 *)a + 4) == 0 || b == 0) return 0;
                if (*(void **)((u8 *)b + 4) == 0) return 0;
                if (((s32 (*)(void *))*(void **)((u8 *)b + 4))(obj) != 0) return 0;
                ((s32 (*)(void *))*(void **)((u8 *)a + 4))(obj);
                return 1;
            }
        }
    }
    return 0;
}
