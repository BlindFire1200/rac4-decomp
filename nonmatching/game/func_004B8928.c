/* Not matching yet: BYTES 89/184 (tools/try_func.py func_004B8928 --diff). Not part of the build. */
extern u8 D_003D9370[];
extern s32 D_221790;
extern u8 D_30A160[];
extern s32 func_004A1A60();
extern void func_00505328(s32, s32);
extern s32 func_00505B20(void);

void func_004B8928(void) {
    u32 temp_s3 = 0x80404040;
    s32 temp_s2;
    u8 *temp_s0 = D_30A160;
    u8 *temp_s1 = D_003D9370;
    u8 *temp_a2;
    u8 temp_a3;
    s32 temp_v0;
    temp_s0 += func_00505B20() * 0x10;
    temp_s2 = *(s32 *)(temp_s0 + 4) * 0x14;
    temp_a2 = temp_s1 + temp_s2;
    temp_a3 = *temp_a2;
    if (temp_a3 != 0) {
        temp_s3 = 0x80808080;
    }
    temp_v0 = func_004A1A60(&D_221790, *(s32 *)(temp_a2 + 8), temp_a2, temp_a3);
    func_00505328(temp_v0, temp_s3);
    temp_v0 = func_004A1A60(&D_221790, *(s32 *)(temp_a2 + 0xC));
    func_00505328(temp_v0, temp_s3);
}
