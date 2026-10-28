#include "common.h"
extern void * D_00221F20;

typedef struct { char pad[0x150]; s16 x, y; } Type1;
extern Type1 D_00206AC0;
/* Write the bounded rectangle into the command buffer. */
void func_004E8998(s32 a, s32 b, s32 c, s32 d) {
 s32 x = D_00206AC0.x - 1;
 s32 y = D_00206AC0.y - 1;
 if (b > x) b = x;
 if (d > y) d = y;
 if (a < 0) a = 0;
 if (c < 0) c = 0;
 *(s32 *)((u8 *)D_00221F20 + 0) = 0x10000002;
 *(s32 *)((u8 *)D_00221F20 + 4) = 0;
 *(s32 *)((u8 *)D_00221F20 + 8) = 0;
 *(s32 *)((u8 *)D_00221F20 + 12) = 0x50000002;
 *(s32 *)((u8 *)D_00221F20 + 16) = 0x8001;
 *(s32 *)((u8 *)D_00221F20 + 20) = 0x10000000;
 *(s32 *)((u8 *)D_00221F20 + 24) = 14;
 *(s32 *)((u8 *)D_00221F20 + 28) = 0;
 *(s64 *)((u8 *)D_00221F20 + 32) = a | ((u64)(s64)b << 16) | ((u64)(s64)c << 32) | ((u64)(s64)d << 48);
 *(s32 *)((u8 *)D_00221F20 + 40) = 0x40;
 *(s32 *)((u8 *)D_00221F20 + 44) = 0;
 D_00221F20 = (u8 *)D_00221F20 + 48;
}
