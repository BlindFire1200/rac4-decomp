/* Not matching yet: BYTES 26/132 (tools/try_func.py func_L00_005E0ED0 --diff). Not part of the build. */
extern void func_L00_005E0E78(void *);
extern u8 D_0026CD00[];
extern u8 *D_0026CD40[];
s32 D_00221EB0 = 0;

void func_L00_005E0ED0(void) {
    s32 index = D_00221EB0;
    u8 *object;
    if (D_0026CD00[index] != 0) {
        object = D_0026CD40[index];
        if (object != 0 && (object[0x31] == 0 || (object[0x20] & 0x80) != 0)) {
            func_L00_005E0E78(object);
        }
    }
    index = D_00221EB0 + 1;
    D_00221EB0 = (index == 0x20) ? 0 : index;
}
