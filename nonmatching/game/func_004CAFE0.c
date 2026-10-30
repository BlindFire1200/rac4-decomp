/* Not matching yet: BYTES 6/72 (tools/try_func.py func_004CAFE0 --diff). Not part of the build. */
extern void func_004CA1D0(int arg0, int arg1);
extern void func_004CA850(void);
extern u8 D_0021EE18;

/* Start the action for mode arg0 (6 when set, 0x13 otherwise); opens the pause menu when the flag is clear and no mode is given. */
void func_004CAFE0(s32 arg0) {
    if (arg0 != 0) {
        arg0 = 6;
    } else {
        arg0 = 0x13;
        if (D_0021EE18 == 0) {
            func_004CA850();
            return;
        }
    }
    func_004CA1D0(arg0, 0);
}
