#include "common.h"
void func_L00_00675FE0(void);
void func_L00_005C4BB0(s32);
void func_L00_005AD3A0(void);
void func_L00_00679210(s32, u64, s32);
void func_L00_005AF8B8(s32);
void func_0061E2A0(void);
void func_L00_0061E310(s32);
void func_0061E2D8(void);
void func_0012D420(void);
void func_L00_005DF160(void);
void func_0012D470(void);
void func_L00_005DF3A0(void);
void func_L00_005AF9E8(void);
extern void *D_00220D14;
void func_L00_00707F28(void) {
    void *object;
    func_L00_00675FE0();
    func_L00_005C4BB0(0);
    func_L00_005AD3A0();
    func_L00_00679210(0x47, 0x33001, 0);
    func_L00_005AF8B8(0);
    object = D_00220D14;
    if (object != 0) (*(void (**)(void *))((u8 *)*(void **)((u8 *)object + 0x58) + 0x1C))(object);
    func_0061E2A0();
    func_L00_0061E310(0);
    func_0061E2D8();
    func_0012D420();
    func_L00_005DF160();
    func_0012D470();
    func_L00_005DF3A0();
    func_L00_005AF9E8();
}
