/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct { u8 pad[0x10]; s32 f10; } Type3;
typedef struct { u8 pad[0x24]; Type3 *f24; } Type2;
typedef struct { u8 pad[0x98]; s32 f98; } Type4;
typedef struct { u8 pad[0x1D0]; void *f1D0[4]; } Type1;

extern void func_005A8620(void);
extern void *func_L00_005F2FB8(void);
extern s32 D_0021E824;
extern s32 D_0021E828;
extern u8 D_00223A28[];
u8 D_00220854 = 0;

// Copies a field from each active slot's object in one table into the matching slot of another.
void func_L01_006B3270(void) {
    s32 i;

    func_005A8620();
    if (D_0021E824 == 0 && D_0021E828 == 0) {
        for (i = 0; i < 4; i++) {
            if (D_00223A28[i] != 0) {
                Type1 *dst = func_L00_005F2FB8();
                Type1 *src = func_L00_005F2FB8();
                ((Type4 *)dst->f1D0[i])->f98 = ((Type2 *)src->f1D0[i])->f24->f10;
            }
        }
    }
    D_00220854 = 0;
}
