/* Not matching yet: BYTES 13/96 (tools/try_func.py func_0015CB28 --diff). Not part of the build. */
extern s32 D_00172160[];

// Search for value in array
s32 func_0015CB28(s32 arg0) {
    s32 *v0 = (s32 *)D_00172160;
    s32 *v1 = *(s32 **)((u32)v0 + 0xBC);

    if (v1 != NULL) {
        v0 = *(s32 **)((u32)v0 + 0xC0);
        if (v0 != NULL) {
            s32 count = *v1;
            if (count > 0) {
                s32 i;
                for (i = 0; i < count; i++) {
                    if (v0[i] == arg0) {
                        return 1;
                    }
                }
            }
        }
    }

    return 0;
}
