#include "common.h"
s32 func_00505B20(void);
s32 func_004983E8(s32);
void func_004CC208(void);
void func_0049B208(s32);
void func_004CC2E8(s32);
void func_004CC420(void);
void func_004CC228(void) {
    s32 owner = func_00505B20();
    s32 state = func_004983E8(6) - 1;
    switch (state) {
    case 0: func_004CC208(); break;
    case 1: func_0049B208(owner); break;
    case 6: func_004CC2E8(2); break;
    case 7: func_004CC2E8(3); break;
    case 4: func_004CC2E8(0); break;
    case 5: func_004CC2E8(1); break;
    case 12: func_004CC420(); break;
    }
}
