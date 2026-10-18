/* Not matching yet: BYTES 6/140 (tools/try_func.py func_L00_00596268 --diff). Not part of the build. */
extern void func_L00_00607710(void);
extern void func_L00_00607228(u8 *);
extern void func_L00_00676090(void);
extern void func_L00_0059A0B0(void);
extern s32 D_0021E730;
extern u8 *D_00343E78[];

void func_L00_00596268(void) {
    s32 count;
    u8 **cursor;
    u8 *object;
    if (D_0021E730 != 0) {
        func_L00_00607710();
    } else {
        count = 9;
        object = D_00343E78[0];
        cursor = D_00343E78;
        do {
            cursor++;
            if (object != 0) {
                u8 *entry = *(u8 **)(object + 0x2F00);
                if (entry != 0) func_L00_00607228(entry);
            }
            count--;
            object = *cursor;
        } while (count >= 0);
    }
    func_L00_00676090();
    func_L00_0059A0B0();
}
