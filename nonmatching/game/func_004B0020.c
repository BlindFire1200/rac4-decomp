/* Not matching yet: BYTES 7/72 (tools/try_func.py func_004B0020 --diff). Not part of the build. */
extern void func_004B0D18(void);
extern void func_004B0970();
extern u8 D_3095B0[];

/* Sets the flags of the entry at D_3095B0, then calls func_004B0970 with the saved value if it is not negative. */
void func_004B0020(void) {
    s32 *p;
    s32 one;
    s32 v;

    func_004B0D18();
    one = 1;
    p = (s32 *)D_3095B0;
    v = p[4];
    *((u8 *)p + 0x8) = one;
    p[3] = -1;
    p[1] = one;
    if (v >= 0) {
        p[3] = v;
        func_004B0970(one, v);
    }
}
