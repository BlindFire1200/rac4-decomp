#include "common.h"

extern s32 D_001723B8[];
extern s32 func_01EC9580(s32);
extern s32 func_01EC96C0(s32, s32);

typedef struct {
    u8 pad[0x1C0];
    s32 f1C0;
} Type1;

Type1 *D_0021DFE8 = 0;

// If D_001723B8 is zero, call func_01EC96C0(-1, D_0021DFE8->f1C0) and then
// func_01EC9580(D_0021DFE8->f1C0); otherwise do nothing.
void func_0015F0D0(void) {
    if (D_001723B8[0] == 0) {
        func_01EC96C0(-1, D_0021DFE8->f1C0);
        func_01EC9580(D_0021DFE8->f1C0);
    }
}
