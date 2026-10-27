/* Not matching yet: BYTES 6/40 (tools/try_func.py func_01EED500 --diff). Not part of the build. */
extern void func_01F0C090(void *, s32);
extern s32 D_0019C2D8;

/* Passes the global buffer and size 0xF8 to a helper, then returns 1. */
s32 func_01EED500(void) {
    func_01F0C090(&D_0019C2D8, 0xF8);
    return 1;
}
