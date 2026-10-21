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

void func_L00_00714A40(void *);
s32 func_L01_004E0230();
void func_00474368(void *, s32, s32);


// In state 0 only: set the +0x30 byte to 0xFF, convert the linked +0x70 and
// +0x74 words into the +0x7C and +0x80 entries scaled by 50, run
// func_L01_004E0230 and func_L00_00714A40 and move to state 1 (-1). Returns 1 when
// it ran.
s32 func_L01_004DFF68(S_arg0 *object) {
    S_temp_v0 *temp_v0;

    if (object->f20 != 0) {
        return 0;
    }
    temp_v0 = object->fAC;
    object->f30 = 0xFF;
    temp_v0->f7C = (f32)temp_v0->f70 * 50.0f;
    temp_v0->f80 = (f32) ((f32) temp_v0->f74 * 50.0f);
    func_L01_004E0230();
    func_L00_00714A40(object);
    func_00474368(object, 1, -1);
    return 1;
}
