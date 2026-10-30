/* Not matching yet: BYTES 6/48 (tools/try_func.py func_01F070D0 --diff). Not part of the build. */
s32 func_01F07100();
extern void func_01F072C8(s32 a, s32 b);

/* Passes the result of func_01F07100 and its own argument to func_01F072C8. */
void func_01F070D0(s32 arg0) {
    func_01F072C8(func_01F07100(), arg0);
}
