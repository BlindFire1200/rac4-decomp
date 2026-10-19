/* Not matching yet: BYTES 2/84 (tools/try_func.py func_L00_00696438 --diff). Not part of the build. */
extern void func_L00_00696490(s32, s32);
extern void func_L00_00696588(s32);
extern u8 D_1711A8[];

void func_L00_00696438(void) {
    if (D_1711A8[0x16] != 0) {
        func_L00_00696490(*(s32 *)(D_1711A8 + 0xC), 0);
        func_L00_00696588(0);
        D_1711A8[0x16] = 0;
        *(s32 *)(D_1711A8 + 0xC) = -1;
        D_1711A8[0x11] = 0;
    }
}
