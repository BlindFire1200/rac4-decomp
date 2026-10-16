#include "common.h"
typedef int u128 __attribute__((mode(TI)));
extern s32 func_L00_005E60A0(s32);
extern void func_L01_00406718(u128, u128);
void func_L01_00406810(u8 *arg0, u128 arg1, u128 arg2, s32 arg3) {
    u8 *entry;
    if (arg3 == 0 && func_L00_005E60A0(2) != 0) return;
    entry = *(u8 **)(*(u8 **)(arg0 + 0xAC) + 0x48);
    if (entry != 0 && entry[0x20] != 0xFE && entry[0x20] != 0xFD) {
        u8 *queue = *(u8 **)(entry + 0xAC);
        if (queue[0xF5] < 0xF) {
            ((u128 *)queue)[queue[0xF5]] = arg1;
            queue[0xF5]++;
        }
    }
    func_L01_00406718(arg1, arg2);
}
