/* Not matching yet: BYTES 20/124 (tools/try_func.py func_00505D30 --diff). Not part of the build. */
void func_004FFD60(s32, s32);
void *func_005010E0(void);
extern void *D_222038[];

s32 func_00505D30(s32 arg0) {
    void *var_v0;
    s32 var_a0;
    s32 var_s1;
    void *temp_v1;

    var_s1 = 0;
    if (*(s32 *)((u8 *)D_222038 + 4) != 0) {
        var_v0 = D_222038;
    } else {
        var_v0 = func_005010E0();
    }

    temp_v1 = *(void **)((u8 *)var_v0 + 4);
    var_a0 = 0;
    if (temp_v1 != NULL) {
        s32 v14 = *(s32 *)((u8 *)temp_v1 + 0x14);
        var_a0 = *(s32 *)((u8 *)temp_v1 + (v14 << 2));
    }

    if (var_a0 != 0) {
        var_s1 = 1;
        func_004FFD60(var_a0, arg0);
    }
    return var_s1;
}
