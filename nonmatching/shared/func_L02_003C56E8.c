/* Not matching yet: BYTES 4/224 (tools/try_func.py func_L02_003C56E8 --diff). Not part of the build. */
extern void func_L00_005B0038(void *, void *, void *);
extern s32 func_L00_005E6058(void *, s32, s32);
extern void func_L02_003C6090(void *object);
extern s32 func_L02_003C6480;
extern u8 *D_0021E6D8;
extern u8 D_00222510[];
extern u8 D_0022CD40[];
extern s32 D_002664C0[];

void func_L02_003C56E8(void *object) {
    s32 *linked = *(s32 **)((u8 *)object + 0xAC);
    if (linked[0x5C / 4] != -1 && func_L00_005E6058(D_0022CD40, linked[0x5C / 4], 0) == 0) return;
    *(s16 *)(D_0021E6D8 + 0x3C6) = 3;
    if (*((u8 *)object + 0x20) == 0) func_L02_003C6090(object);
    if (D_002664C0[0] != linked[0x50 / 4]) return;
    if (func_L00_005E6058(D_0022CD40, linked[0x54 / 4], 0) != 0) return;
    if (func_L00_005E6058(D_0022CD40, linked[0x58 / 4], 0) != 0) return;
    func_L00_005B0038(D_00222510, &func_L02_003C6480, object);
}
