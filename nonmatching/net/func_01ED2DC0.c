/* Not matching yet: BYTES 6/52 (tools/try_func.py func_01ED2DC0 --diff). Not part of the build. */
extern void func_01ED1D98();
extern void func_01ED2BB8(s32, s32);

/* Calls two helpers, passing the argument to the second one, and returns 1. */
s32 func_01ED2DC0(s32 arg0) {
    func_01ED1D98();
    func_01ED2BB8(arg0, 0xFFFE);
    return 1;
}
