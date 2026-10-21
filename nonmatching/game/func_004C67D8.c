/* Not matching yet: BYTES 27/144 (tools/try_func.py func_004C67D8 --diff). Not part of the build. */
extern s32 func_004C6868(void);
extern s32 func_00505B20(void);
extern s32 D_1F87F0[];
extern s32 D_30B9D8[];
extern s32 D_30D038[];

s32 func_004C67D8(void) {
    u8 *temp_s0;
    u8 *temp_v0;
    s32 a0, v1, v0;

    temp_s0 = (u8 *)D_30D038 + func_004C6868() * 0x34;
    v0 = func_00505B20();
    temp_v0 = (u8 *)D_30B9D8 + v0 * 0xB30;
    a0 = *(s32 *)(temp_s0 + 0x30);
    v1 = *(s32 *)(temp_v0 + 0xB2C);
    v1 = v1 - 1;
    v0 = ((v1 % 20) * 0x304);
    a0 = a0 * 0xC + v0;
    return (*(u8 *)((u8 *)D_1F87F0 + a0 + 0x9) != 0);
}
