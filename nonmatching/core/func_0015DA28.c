/* Not matching yet: BYTES 13/156 (tools/try_func.py func_0015DA28 --diff). Not part of the build. */
extern void func_0015A750(void);
extern void func_0015C760(void);
extern void func_0015DA10(void);
extern s32 func_001615C0(void);
extern void func_00161C70(void);
extern void func_00162C50(s32);
extern s32 func_01E9DF88(void);
extern u8 D_00172160[];
extern s32 D_0021E0A4;
s32 func_0015DA28(void) {
    s32 value;
    func_00161C70();
    func_001615C0();
    func_00162C50(D_0021E0A4);
    D_0021E0A4 = 0;
    func_0015DA10();
    func_0015C760();
    value = *(s32 *)(D_00172160 + 0);
    if (*(s32 *)(D_00172160 + 8) != 0) {
        func_0015A750();
        *(s32 *)(D_00172160 + 8) = 0;
        *(s32 *)(D_00172160 + 4) = 1;
        *(s32 *)(D_00172160 + 0x14) = 1;
        value = *(s32 *)(D_00172160 + 0);
    }
    if (value >= 4) *(s32 *)(D_00172160 + 0) = 3;
    *(u8 *)(D_00172160 + 0x1681) = 0;
    *(u8 *)(D_00172160 + 0x250) = 0;
    *(u8 *)(D_00172160 + 0x251) = 0;
    return func_01E9DF88() != 0;
}
