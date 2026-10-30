/* Not matching yet: BYTES 6/48 (tools/try_func.py func_01F07720 --diff). Not part of the build. */
extern s32 func_01EEE13C(s32 arg0);
extern void func_01EF0550(s32 arg0, s32 arg1);

// Passes the result of func_01EEE13C(arg0) and arg0 on to func_01EF0550.
void func_01F07720(s32 arg0) {
    func_01EF0550(func_01EEE13C(arg0), arg0);
}
