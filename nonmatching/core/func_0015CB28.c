/* Not matching yet: BYTES 8/96 (tools/try_func.py func_0015CB28 --diff). Not part of the build. */
extern u8 D_00172160[];

/* Returns 1 when arg0 is one of the n words at the pointer stored at +0xC0 of the table at D_00172160 (n is the word the pointer at +0xBC leads to), else 0. */
s32 func_0015CB28(s32 arg0) {
    u8 *g = D_00172160;
    s32 *cnt;
    s32 *tbl;
    s32 *p;
    s32 i;

    cnt = *(s32 **)(g + 0xBC);
    if (cnt != 0) {
        tbl = *(s32 **)(g + 0xC0);
        if (tbl != 0) {
            if (*cnt > 0) {
                p = tbl;
                i = 0;
                do {
                    i++;
                    if (*p == arg0) {
                        return 1;
                    }
                    p++;
                } while (i < *cnt);
            }
        }
    }
    return 0;
}
