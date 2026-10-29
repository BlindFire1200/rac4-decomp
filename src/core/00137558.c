/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012AEA8 (NTSC-U func_0012AEA8, commit 403f30a9) */
#include "common.h"

/* libcdvd: init-style RPC bind under the sema (D_00165FEC); 2.9-ee-991111 */
typedef struct { u8 pad[0x24]; s32 f24; } Type1;

extern void func_00136F70(void);
extern s32 func_00126BF0(s32);
extern s32 func_00126BC0(s32);
extern void func_001294F0();
extern s32 func_001374E8(s32);
extern void func_00129D90(s32);
extern s32 func_0012A538(void *, s32, s32);
extern volatile s32 D_00165FEC;
extern s32 D_00165FD0;
extern s32 D_00165FD8;
extern s32 D_00166014;
extern Type1 D_00167B40;
extern char D_00194958[];
extern char D_00194980[];

s32 func_00137558(s32 arg0) {
    func_00136F70();
    if (D_00165FEC != func_00126BF0(D_00165FEC)) {
        if (D_00165FD0 > 0) {
            func_001294F0(D_00194958, arg0, D_00165FD8);
        }
        return 0;
    }
    D_00165FD8 = arg0;
    if (func_001374E8(1) != 0) {
        func_00126BC0(D_00165FEC);
        return 0;
    }
    func_00129D90(0);
    if (D_00166014 < 0) {
        while (1) {
            s32 i;
            if (func_0012A538(&D_00167B40, 0x80000593, 0) < 0) {
                if (D_00165FD0 > 0) {
                    func_001294F0(D_00194980);
                }
                i = 0x100000;
                while (--i != -1) {
                }
            } else if (D_00167B40.f24 != 0) {
                D_00166014 = 0;
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
