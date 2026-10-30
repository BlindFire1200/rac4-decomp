/* Not matching yet: BYTES 2/124 (tools/try_func.py func_004C3988 --diff). Not part of the build. */
extern s32 func_004A1A60(s32 *arg0, s32 arg1);
extern s32 func_004C3820(s32);
extern void func_00505328(s32, s32);
extern s32 func_00505B20(void);
extern u8 D_003D2298[];
extern u8 D_221888[];
extern u8 D_30B7F8[];

/* Looks up the owner's 0x74-byte entry, passes an entry of D_003D2298 and the owner's value from func_004C3820 to func_00505328. */
void func_004C3988(void) {
    s32 temp_s0;
    u8 *temp_s1;

    temp_s1 = D_30B7F8 + func_00505B20() * 0x74;
    temp_s0 = func_004A1A60((s32 *)D_221888, *(s32 *)(D_003D2298 + *(s32 *)(temp_s1 + 0x14) * 8));
    func_00505328(temp_s0, func_004C3820(*(s32 *)(temp_s1 + 0x14)));
}
