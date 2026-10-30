/* Not matching yet: BYTES 1/80 (tools/try_func.py func_0047EC78 --diff). Not part of the build. */
extern void *func_00510BE8();
extern u8 D_354630[];

// Returns the byte at offset 0x5F0 into D_354630, indexed by the word at 0x2F14 of the object func_00510BE8 yields, or 0 when that index is out of range or the object is null.
u8 func_0047EC78(void) {
    u8 var_s0;
    void *temp_v0;
    u32 temp_v1;

    var_s0 = 0;
    temp_v0 = func_00510BE8();
    if (temp_v0 == 0) {
        return 0;
    }
    temp_v1 = *(u32 *)((u8 *)temp_v0 + 0x2F14);
    if (temp_v1 < 0xA) {
        var_s0 = D_354630[temp_v1 + 0x5F0];
    }
    return var_s0;
}
