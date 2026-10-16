#include "common.h"
extern u8 func_L00_00529C50[];
void func_L00_00529620(u8 *object) {
    *(u64 *)(object + 0x0) = 0x67452301ULL;
    *(u64 *)(object + 0x8) = 0xEFCDAB89ULL;
    *(u64 *)(object + 0x10) = 0x98BADCFEULL;
    *(u64 *)(object + 0x18) = 0x10325476ULL;
    *(u64 *)(object + 0x20) = 0xC3D2E1F0ULL;
    *(u64 *)(object + 0x28) = 0;
    *(u64 *)(object + 0x30) = 0;
    *(s32 *)(object + 0xB8) = 0;
    *(u32 *)(object + 0xBC) = (u32)(func_L00_00529C50 + 8);
}
