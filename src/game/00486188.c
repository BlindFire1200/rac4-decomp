#include "common.h"

s32 func_004828B0(void);
void func_00481240(s32);
void func_00484710(s32, s32, s32);

void func_00486188(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_004828B0();
    if (temp_v0 & 1) {
        if (temp_v0 & 2) {
            func_00484710(arg0, -1, 1);
        }
    } else if (temp_v0 & 2) {
        func_00481240(arg0);
    }
}
