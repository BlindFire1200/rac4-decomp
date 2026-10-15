#include "common.h"

extern s32 D_004B5068[];
void func_006EBE18(void *);

// Set a field, then wait with busy loops around a call
void *func_L00_006EBB80(void *arg0) {
    *(void **)((u8 *)arg0 + 0x14) = D_004B5068;
    { s32 i = 5; do { i--; } while (i != -1); }
    { s32 i = 0x11; do { i--; } while (i != -1); }
    { s32 i = 6; do { i--; } while (i != -1); }
    { s32 i = 3; do { i--; } while (i != -1); }
    { s32 i = 3; do { i--; } while (i != -1); }
    func_006EBE18((u8 *)arg0 + 0x1970);
    { s32 i = 1; do { i--; } while (i != -1); }
    { s32 i = 1; do { i--; } while (i != -1); }
    { s32 i = 7; do { i--; } while (i != -1); }
    { s32 i = 7; do { i--; } while (i != -1); }
    { s32 i = 7; do { i--; } while (i != -1); }
    { s32 i = 7; do { i--; } while (i != -1); }
    { s32 i = 5; do { i--; } while (i != -1); }
    { s32 i = 7; do { i--; } while (i != -1); }
    { s32 i = 0x1F; do { i--; } while (i != -1); }
    { s32 i = 0xF; do { i--; } while (i != -1); }
    return arg0;
}
