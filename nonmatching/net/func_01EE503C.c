/* Not matching yet: BYTES 6/48 (tools/try_func.py func_01EE503C --diff). Not part of the build. */
extern s32 func_01EEE13C();
extern void func_01EF0550(s32, s32);

// Passes the result of func_01EEE13C and arg0 to func_01EF0550.
void func_01EE503C(s32 arg0) {
    func_01EF0550(func_01EEE13C(), arg0);
}
