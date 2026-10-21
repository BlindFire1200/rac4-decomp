#include "common.h"

typedef struct {
    u8 pad0[0xBC];
    s16 fBC;
    u8 padBE[0x42];
} Type1;
typedef u8 *(*Fn)(Type1 *);
extern Fn *func_L00_005DEBD0(s32, s32, s32);
extern Type1 *D_00222D14;

// Return 1 when arg1 is one of the object's six byte ids (from its callback record, or local list).
s32 func_L01_0056DE68(u8 *arg0, s32 arg1) {
    Fn *action;
    u8 *p;
    s32 i;
    u8 *q;
    s32 j;

    if (arg0 == 0) return 0;
    if (arg1 == 0) return 1;
    if (*(s32 *)(arg0 + 4) != -1) {
        action = func_L00_005DEBD0(D_00222D14[*(s32 *)(arg0 + 4)].fBC, 0xE, 0x1C);
        if (action == 0) return 0;
        if (*action == 0) return 0;
        q = (*action)(&D_00222D14[*(s32 *)(arg0 + 4)]) + 0x44;
        j = 0;
        while (j < 6) {
            if (q[j++] == arg1) return 1;
        }
    } else {
        p = arg0 + 0x1D;
        for (i = 0; i < 6; i++) {
            if (p[i] == arg1) return 1;
        }
    }
    return 0;
}
