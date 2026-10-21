#include "common.h"

s32 D_00220D18 = 0;
s32 D_00220D1C = 0;

extern s32 func_15DB80(s32, s32);
extern char *func_L00_0071A3E8(s32);
extern char *func_L00_0071C1C8(s32);
extern char *func_L00_0071C830(s32);
extern char *func_L00_0071D278(s32);
extern char *func_L00_0071EF40(s32);
extern char *func_L00_00720720(s32);
extern char *func_L00_00721C10(s32);
extern char *func_L00_007225B8(s32);
extern char *func_L00_00723520(s32);
extern char *func_L00_00725AF8(s32);
extern char *func_L00_00727530(s32);
extern char *func_L00_00729830(s32);
extern char *func_L00_0072A948(s32);
extern char *func_L00_0072F888(s32);
extern char *func_L00_00730CF0(s32);
extern char *func_L00_00732418(s32);
extern char *func_L00_00733D08(s32);
extern char *func_L00_00736220(s32);
extern char *func_L00_007392F0(s32);
extern char *func_L00_0073AAB8(s32);
extern char *func_L00_0073DED8(s32);
extern char *func_L00_0073FD98(s32);
extern char *func_L00_00741AB0(s32);
extern char *func_L00_00744CE0(s32);
extern char *func_L00_00746898(s32);
extern char *func_L00_007484D8(s32);
extern char *func_L00_00748E40(s32);
extern char *func_L00_00749FB8(s32);
extern char *func_L00_0074A5B8(s32);
extern char *func_L00_0074C1A0(s32);
extern char *func_L00_0074F4A8(s32);
extern char *func_L00_00751C28(s32);
extern char *func_L00_00753C68(s32);
extern char *func_L00_00755F88(s32);
extern char *func_L00_007576A8(s32);
extern char *func_L00_0075D118(s32);
extern char *func_L00_0075F148(s32);
extern char *func_L00_007621C0(s32);
extern char *func_L00_00762A48(s32);
extern char *func_L00_007634F8(s32);

/* Allocates and constructs the menu screen object for the given screen id. */
char *func_L00_00718C60(s32 arg0, s32 arg1) {
    char *p = 0;

    if (arg1 == 1) {
        p = func_L00_0071C1C8(func_15DB80(0x27C, D_00220D18));
    } else if (arg1 == 2) {
        p = func_L00_0071C830(func_15DB80(0x728, D_00220D18));
    } else if (arg1 == 3) {
        p = func_L00_0071D278(func_15DB80(0x2778, D_00220D18));
    } else if (arg1 == 4) {
        p = func_L00_0071EF40(func_15DB80(0x1344, D_00220D18));
    } else if (arg1 == 5) {
        p = func_L00_00720720(func_15DB80(0x394, D_00220D18));
    } else if (arg1 == 6) {
        p = func_L00_00721C10(func_15DB80(0x278, D_00220D18));
    } else if (arg1 == 7) {
        p = func_L00_007225B8(func_15DB80(0x380, D_00220D18));
    } else if (arg1 == 8) {
        p = func_L00_00723520(func_15DB80(0x47C, D_00220D18));
    } else if (arg1 == 9) {
        p = func_L00_00725AF8(func_15DB80(0x474, D_00220D18));
    } else if (arg1 == 10) {
        p = func_L00_00727530(func_15DB80(0x2884, D_00220D18));
    } else if (arg1 == 11) {
        p = func_L00_00729830(func_15DB80(0x26C, D_00220D18));
    } else if (arg1 == 12) {
        p = func_L00_0072A948(func_15DB80(0x750, D_00220D18));
    } else if (arg1 == 0) {
        p = func_L00_0072F888(func_15DB80(0x1130, D_00220D18));
    } else if (arg1 == 13) {
        p = func_L00_00730CF0(func_15DB80(0x260, D_00220D18));
    } else if (arg1 == 14) {
        p = func_L00_00732418(func_15DB80(0x13B0, D_00220D18));
    } else if (arg1 == 15) {
        p = func_L00_00733D08(func_15DB80(0x1960, D_00220D18));
    } else if (arg1 == 16) {
        p = func_L00_00736220(func_15DB80(0x320, D_00220D18));
    } else if (arg1 == 17) {
        p = func_L00_007392F0(func_15DB80(0xE6C, D_00220D18));
    } else if (arg1 == 18) {
        p = func_L00_0073AAB8(func_15DB80(0x3C4, D_00220D18));
    } else if (arg1 == 19) {
        p = func_L00_0073DED8(func_15DB80(0x370, D_00220D18));
    } else if (arg1 == 20) {
        p = func_L00_0073FD98(func_15DB80(0x360, D_00220D18));
    } else if (arg1 == 21) {
        p = func_L00_007484D8(func_15DB80(0x264, D_00220D18));
    } else if (arg1 == 22) {
        p = func_L00_00748E40(func_15DB80(0x678, D_00220D18));
    } else if (arg1 == 23) {
        p = func_L00_00741AB0(func_15DB80(0x2BC, D_00220D18));
    } else if (arg1 == 24) {
        p = func_L00_00744CE0(func_15DB80(0x504, D_00220D18));
    } else if (arg1 == 25) {
        p = func_L00_00746898(func_15DB80(0x29C, D_00220D18));
    } else if (arg1 == 26) {
        p = func_L00_00749FB8(func_15DB80(0x264, D_00220D18));
    } else if (arg1 == 27) {
        p = func_L00_0074A5B8(func_15DB80(0x2AEC, D_00220D18));
    } else if (arg1 == 28) {
        p = func_L00_0074C1A0(func_15DB80(0x754, D_00220D18));
    } else if (arg1 == 29) {
        p = func_L00_0074F4A8(func_15DB80(0x298, D_00220D18));
    } else if (arg1 == 30) {
        p = func_L00_00751C28(func_15DB80(0x288, D_00220D18));
    } else if (arg1 == 31) {
        p = func_L00_00753C68(func_15DB80(0x2EC, D_00220D18));
    } else if (arg1 == 32) {
        p = func_L00_00755F88(func_15DB80(0x26C, D_00220D18));
    } else if (arg1 == 33) {
        p = func_L00_007576A8(func_15DB80(0x4BC, D_00220D18));
    } else if (arg1 == 34) {
        p = func_L00_0075D118(func_15DB80(0x288, D_00220D18));
    } else if (arg1 == 35) {
        p = func_L00_007634F8(func_15DB80(0x280, D_00220D18));
    } else if (arg1 == 36) {
        p = func_L00_0075F148(func_15DB80(0xBCC8, D_00220D18));
    } else if (arg1 == 37) {
        p = func_L00_007621C0(func_15DB80(0x278, D_00220D18));
    } else if (arg1 == 38) {
        p = func_L00_00762A48(func_15DB80(0x27C, D_00220D18));
    } else if (arg1 == 39) {
        p = func_L00_0071A3E8(func_15DB80(0x364, D_00220D18));
    }

    if (p != 0) {
        *(s32 *)(p + 0x9C) = arg1;
        D_00220D18 = *(s32 *)(p + 0x244);
        D_00220D1C -= *(s32 *)(p + 0x248);
    }
    return p;
}
