#include "common.h"

typedef struct S_arg0 S_arg0;
typedef struct S_temp_s0 S_temp_s0;
struct S_temp_s0 {
    char _p0[0x280];
    f32 f280;
};
struct S_arg0 {
    char _p0[0xAC];
    S_temp_s0 *fAC;
};

void func_005A85F8(void *, s32, s32);
s32 func_L00_005EB750(void *, s32);
void func_L00_005F15B8(void *);
void func_L00_0066D220(s32, s32, void *);
void func_L01_00593D50(void *, f32, f32, f32);
void func_L01_005A1B38(void *);
s32 func_L01_005AE158(void *);

// Per-frame update: run func_L01_005AE158, start effect 5 (func_L00_0066D220)
// when the linked object's float at +0x280 is positive and changed, then run
// the follow-up calls and set state 5 (-1) through func_005A85F8.
void func_L01_004AC568(S_arg0 *object) {
    f32 temp_f1;
    f32 temp_f20;
    S_temp_s0 *temp_s0;

    temp_s0 = object->fAC;
    temp_f20 = temp_s0->f280;
    func_L01_005AE158(object);
    temp_f1 = temp_s0->f280;
    if ((temp_f1 > 0.0f) && (temp_f1 != temp_f20)) {
        func_L00_0066D220(5, 0, object);
    }
    func_L01_005A1B38(object);
    func_L00_005F15B8(object);
    func_L00_005EB750(object, 0);
    func_L01_00593D50(object, 32.0f, -1.0f, 0.0f);
    func_005A85F8(object, 5, -1);
}
