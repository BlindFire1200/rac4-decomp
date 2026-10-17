#include "common.h"
void func_L00_0071B478(void);
void func_L00_0071BB58(void *);
void func_L00_007647B0(s32);
extern void *D_00220D14;
void func_L00_00729D38(void *arg0) {
    s32 mode;
    func_L00_0071B478();
    func_L00_0071BB58(arg0);
    *(u8 *)((u8 *)D_00220D14 + 0x114) = 0;
    if (*(u8 *)((u8 *)arg0 + 0x269) == 0) {
        mode = *(s32 *)((u8 *)arg0 + 0x260);
        if (mode == 4 || mode == 1 || mode == 8 || mode == 0x40) {
            func_L00_007647B0(9);
        } else if (mode == 0x10 || mode == 2 || mode == 0x80) {
            func_L00_007647B0(8);
        }
    }
}
