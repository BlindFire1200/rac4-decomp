/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012AEA8 (NTSC-U func_0012AEA8, commit 403f30a9) */
#include "common.h"

/* libcdvd: init-style RPC bind under the sema (D_00165FE8); 2.9-ee-991111 */
typedef struct { u8 pad[0x24]; s32 x24; } Type1;

extern void func_00136F70(void);
extern s32 func_00126BF0(s32);
extern s32 func_00126BC0(s32);
extern void func_001294F0();
extern s32 func_00137448(s32);
extern void func_00129D90(s32);
extern s32 func_0012A538(void *, s32, s32);
extern volatile s32 D_00165FE8;
extern s32 D_00165FD0;
extern s32 D_00165FDC;
extern s32 D_00165FFC;
extern Type1 D_00167190;
extern char D_001948F8[];
extern char D_00194920[];

s32 func_00137258(s32 arg0) {
    func_00136F70();
    if (D_00165FE8 != func_00126BF0(D_00165FE8)) {
        if (D_00165FD0 > 0) {
            func_001294F0(D_001948F8, arg0, D_00165FDC);
        }
        return 0;
    }
    D_00165FDC = arg0;
    if (func_00137448(1) != 0) {
        func_00126BC0(D_00165FE8);
        return 0;
    }
    func_00129D90(0);
    if (D_00165FFC < 0) {
        while (1) {
            s32 i;
            if (func_0012A538(&D_00167190, 0x80000595, 0) < 0) {
                if (D_00165FD0 > 0) {
                    func_001294F0(D_00194920);
                }
                i = 0x100000;
                while (--i != -1) {
                }
            } else if (D_00167190.x24 != 0) {
                D_00165FFC = 0;
                break;
            } else {
                i = 0x100000;
                while (--i != -1) {
                }
            }
        }
    }
    return 1;
}
