/* Not matching yet: BYTES 2/128 (tools/try_func.py func_004C2F78 --diff). Not part of the build. */
/* Looks up the record for the current owner in D_30B7F8, takes a value from D_003D2180 and D_221880, and passes the results to func_00505328. */
extern s32 func_004A1A60(s32 *arg0, s32 arg1);
extern u32 func_004C2EE0(s32 a0, s32 a1);
extern void func_00505328(s32, s32);
extern s32 func_00505B20(void);
extern u8 D_003D2180[];
extern u8 D_221880[];
extern u8 D_30B7F8[];

void func_004C2F78(void) {
    u8 *entry;
    s32 temp_s0;
    s32 temp_s1;

    entry = (u8 *)D_30B7F8;
    entry = entry + func_00505B20() * 0x74;
    temp_s1 = *(s32 *)(entry + 0xC);
    temp_s0 = func_004A1A60((s32 *)D_221880, *(s32 *)(D_003D2180 + temp_s1 * 0xC));
    func_00505328(temp_s0, func_004C2EE0(temp_s1, 0));
}
