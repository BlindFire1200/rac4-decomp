#include "common.h"

extern u8 D_00244D00[];
extern u8 D_00171D3D[];
extern s32 *D_00222364;
extern void func_0061E508(s32, s32);

// Run the indexed action when the global state allows it.
void func_L00_005C95D0(void) {
    if (D_00244D00[0x26] != 0) {
        if (*(s32 *)D_00244D00 == 1) {
            if (*D_00171D3D != 0) {
                s32 index = *(s32 *)(D_00244D00 + 0x10);
                if (index != -1) {
                    func_0061E508(D_00222364[index * 4], 2);
                }
            }
        }
    }
}
