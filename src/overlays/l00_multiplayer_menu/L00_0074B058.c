#include "common.h"

extern s8 D_00220A20;

void func_L00_0070A0C8();                             /* extern */
void func_L00_0070A138();                             /* extern */
void func_L00_0071B478(s32);                           /* extern */
void func_L00_0071BE80(s32);                           /* extern */
extern s8 D_00220A21;

void func_L00_0074B058(s32 arg0) {
    D_00220A20 = 0;
    D_00220A21 = 0;
    func_L00_0070A0C8(0);
    func_L00_0070A138(0);
    func_L00_0071B478(arg0);
    func_L00_0071BE80(arg0);
}
