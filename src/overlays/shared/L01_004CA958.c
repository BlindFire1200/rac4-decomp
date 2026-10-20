#include "common.h"

extern void func_L00_006EC390(s32 *, void *, s32);
extern void func_L01_004CEFF0(u8 *);
extern void func_L01_004CF188(void *, s32);
extern void func_L01_004CF6B0(u8 *object);
extern void func_L01_004CF868(u8 *);
extern u8 *D_0021DFF0;

// Handle a message (type in the low 4 bits of *msg) for the object's state block (+0xAC).
void func_L01_004CA958(u8 *object, s32 *msg) {
    u8 *state = *(u8 **)(object + 0xAC);
    switch (*msg & 0xF) {
    case 0:
        *(s32 *)(state + 0x2E0) = 1;
        func_L00_006EC390(msg, state + 0x2D8, 4);
        break;
    case 1:
        *(s32 *)(state + 0x2E0) = 1;
        func_L01_004CEFF0(object);
        state[0x2DC] |= 1;
        break;
    case 2:
        *(s32 *)(state + 0x2E0) = 1;
        state[0x2DC] |= 2;
        break;
    case 3:
        *(s32 *)(state + 0x2E0) = 1;
        func_L01_004CEFF0(object);
        state[0x2DC] |= 4;
        break;
    case 4:
        *(s32 *)(state + 0x2E0) = 1;
        state[0x2DC] |= 8;
        break;
    case 5:
        *(s32 *)(state + 0x2E0) = 1;
        state[0x2DC] |= 0x10;
        break;
    case 6:
        *(s32 *)(state + 0x2E0) = 1;
        func_L01_004CEFF0(object);
        break;
    case 7:
        *(s32 *)(state + 0x2E0) = 1;
        func_L00_006EC390(msg, state + 0x2DD, 1);
        func_L01_004CF6B0(object);
        break;
    case 8:
        *(s32 *)(state + 0x2E0) = 1;
        func_L00_006EC390(msg, state + 0x2E7, 1);
        func_L00_006EC390(msg, state + 0x2E4, 1);
        func_L01_004CF868(object);
        break;
    case 9:
        *(s32 *)(state + 0x2E0) = 1;
        func_L01_004CF188(object, 1);
        state[0x2DF] = 1;
        if (*(s8 *)(D_0021DFF0 + 0x23) != 0 && state[0x2DD] == 0) {
            state[0x2DD] = 1;
            func_L01_004CF6B0(object);
        }
        break;
    }
}
