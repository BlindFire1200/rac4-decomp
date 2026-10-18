#include "common.h"

extern s32 func_L00_005E60A0(s32);
extern s32 func_L00_006FDE10(s32);
extern s32 func_00446418(s32);
extern s32 D_00386128[];
extern u8 *D_0021DFF0;

s32 func_L41_00446E70(s32 arg0) {
    s32 found = 0;
    s32 i;
    s32 j;
    s32 count = 9;
    if (D_0021DFF0[0x21] == 0) count = 8;
    for (i = 0; i < 16; i++) {
        found = D_00386128[func_L00_005E60A0(count)];
        if (func_L00_006FDE10(func_00446418(found)) != 0 && found != arg0) break;
        found = 0;
    }
    if (found == 0) {
        for (j = 0; j < count; j++) {
            found = D_00386128[j];
            if (func_L00_006FDE10(func_00446418(found)) != 0 && found != arg0) break;
            found = 0;
        }
    }
    if (found != 0) return found;
    return arg0;
}
