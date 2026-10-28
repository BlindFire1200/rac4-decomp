/* Not matching yet: BYTES 6/48 (tools/try_func.py func_004A1D58 --diff). Not part of the build. */
extern void func_0049EF30(s32 index);
s32 D_0021F658 = 0;

// Stores 4, or 1 after calling func_0049EF30(0), into a global chosen by arg0.
void func_004A1D58(s32 arg0) {
    s32 var_v0;

    if (arg0 != 0) {
        var_v0 = 4;
    } else {
        func_0049EF30(0);
        var_v0 = 1;
    }
    D_0021F658 = var_v0;
}
