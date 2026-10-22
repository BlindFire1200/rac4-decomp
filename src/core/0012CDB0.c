#include "common.h"

extern s32 func_00126FB0(s32);
extern void func_00127020(void);
extern void func_0012ED80(s32, s32);

/* Returns 1 when func_00126FB0(4) reports flag 0x40000, else 0; that path also
   calls func_00127020() and sets two state flags via func_0012ED80(1,1)/(0,1). */
s32 func_0012CDB0(void) {
    if (func_00126FB0(4) & 0x40000) {
        func_00127020();
        func_0012ED80(1, 1);
        func_0012ED80(0, 1);
        return 1;
    }
    return 0;
}
