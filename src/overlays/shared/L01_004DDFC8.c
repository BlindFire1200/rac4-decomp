#include "common.h"

typedef struct S_arg0 S_arg0;
typedef struct S_temp_v0 S_temp_v0;
struct S_temp_v0 {
    char _p0[0x70];
    s32 f70;
    s32 f74;
    char _p78[0x4];
    s32 f7C;
    s32 f80;
};
struct S_arg0 {
    char _p0[0x20];
    u8 f20;
    char _p21[0xF];
    u8 f30;
    char _p31[0x7B];
    S_temp_v0 *fAC;
};

void func_00585D88(void *);
s32 func_L01_004DE290();
void func_L01_00591BD8(void *, s32, s32);


s32 func_L01_004DDFC8(S_arg0 *arg0) {
    S_temp_v0 *temp_v0;

    if (arg0->f20 != 0) {
        return 0;
    }
    temp_v0 = arg0->fAC;
    arg0->f30 = 0xFF;
    temp_v0->f7C = (f32)temp_v0->f70 * 60.0f;
    temp_v0->f80 = (f32) ((f32) temp_v0->f74 * 60.0f);
    func_L01_004DE290();
    func_00585D88(arg0);
    func_L01_00591BD8(arg0, 1, -1);
    return 1;
}
