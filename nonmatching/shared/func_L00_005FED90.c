/* Not matching yet: BYTES 9/88 (tools/try_func.py func_L00_005FED90 --diff). Not part of the build. */
extern s32 func_L00_005E60D0(s32, s32);
extern void func_L00_005FF120(s32, s32);
extern void func_L00_005FEDE8(s32, s32, s32);
s32 D_0021EC08 = 0;
s32 D_0021EC0C = 0;

void func_L00_005FED90(s32 arg0, s32 arg1) {
    s32 result;
    D_0021EC08 = arg0;
    D_0021EC0C = arg1 - arg0 + 1;
    result = func_L00_005E60D0(arg0, arg1) * 2;
    if (*(s16 *)0x206996 != 0) {
        func_L00_005FF120(result, -1);
    } else {
        func_L00_005FEDE8(result, 1, 0x400);
    }
}
