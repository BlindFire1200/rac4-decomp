#include "common.h"

extern s32 func_0049B2B8(s32);
extern void func_00497980(s32);
extern void func_00498048(s32);
extern void func_00498CF8(void);

extern s32 D_0021EDD4;
extern s32 D_0021EDD8;

/* Dispatcher with conditional cleanup. */
void func_0049B2F8(s32 arg0, s32 arg1) {
    if (func_0049B2B8(arg0) != 0) {
        if ((D_0021EDD4 == 0) && (D_0021EDD8 == 1)) {
            if (func_0049B2B8(arg0 == 0) == 0) {
                return;
            }
        }
        func_00498CF8();
        if (arg1 != -1) {
            func_00497980(arg1);
        }
        func_00498048(arg0);
    }
}
