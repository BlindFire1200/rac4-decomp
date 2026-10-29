/* Not matching yet: BYTES 5/60 (tools/try_func.py func_01ED6218 --diff). Not part of the build. */
extern s32 func_01E9E630(s32 *arg0);
extern s32 func_01ED5778(s32, s32);
extern s32 D_00169CD0_[];
#define D_00169CD0 (D_00169CD0_[0])

/* Net helper: runs a setup call on a zeroed local, then returns -15 unless the global flag is 1, in which case it calls func_01ED5778. */
s32 func_01ED6218(void) {
    s32 local = 0;

    func_01E9E630(&local);
    if (D_00169CD0 == 1) {
        return func_01ED5778(1, D_00169CD0);
    }
    return -0xF;
}
