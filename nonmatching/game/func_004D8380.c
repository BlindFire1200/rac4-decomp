/* Not matching yet: BYTES 8/336 (tools/try_func.py func_004D8380 --diff). Not part of the build. */
typedef struct __attribute__((packed)) Type1 { u64 f00; u64 f08; } Type1;
u8 D_00221B00_pad[0x195] __attribute__((section(".sdata"), aligned(1))) = { 0 };
u8 D_00221B14[4] = { 0 };
u8 D_00221B18[4] = { 0 };
u8 D_00221B1C[4] = { 0 };
u8 D_00221B20[4] = { 0 };
void func_00501458(void *, void *, void *, void *, void *, void *);
void func_004D8598(void);
void func_004D8658(void);
void func_004D86B0(void);
extern u8 D_3200E8[];
extern u8 D_320100[];
extern u8 D_320118[];
extern u8 D_320130[];
extern Type1 D_0021FC20[];

s32 func_004D8380(s32 arg0) {
    Type1 local;
    if (*(s32 *)D_00221B14 == 0) { func_00501458(D_3200E8, func_004D8598, func_004D8658, func_004D86B0, 0, 0); *(s32 *)D_00221B14 = 1; }
    if (*(s32 *)D_00221B18 == 0) { func_00501458(D_320100, func_004D8598, func_004D8658, func_004D86B0, 0, 0); *(s32 *)D_00221B18 = 1; }
    if (*(s32 *)D_00221B1C == 0) { func_00501458(D_320118, func_004D8598, func_004D8658, func_004D86B0, 0, 0); *(s32 *)D_00221B1C = 1; }
    if (*(s32 *)D_00221B20 == 0) { func_00501458(D_320130, func_004D8598, func_004D8658, func_004D86B0, 0, 0); *(s32 *)D_00221B20 = 1; }
    local = D_0021FC20[0];
    return *(s32 *)((u8 *)&local + (arg0 << 2));
}
