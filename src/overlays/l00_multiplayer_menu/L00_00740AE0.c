#include "common.h"

void func_L00_0071B478(void);
void func_L00_0071BC68(void *);
void func_L00_0071BB58(void *);
void func_L00_007647B0(s32);

void func_L00_00740AE0(void *object) {
    func_L00_0071B478();
    func_L00_0071BC68(object);
    func_L00_0071BB58(object);
    if (*((u8 *)object + 0x264) != 0) {
        if (*(s16 *)((u8 *)object + 0x274) != 0) {
            func_L00_007647B0(0xC);
            return;
        }
        func_L00_007647B0(0xB);
    }
}
