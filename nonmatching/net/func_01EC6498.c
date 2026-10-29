/* Not matching yet: BYTES 3/44 (tools/try_func.py func_01EC6498 --diff). Not part of the build. */
/* Forwards its last three arguments to a callee with the first of them moved last, then returns 0. */
extern void func_01EC7920(s32, s32, s32, s32);

s32 func_01EC6498(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_01EC7920(arg0, arg2, arg3, arg1);
    return 0;
}
