/* Not matching yet: BYTES 18/124 (tools/try_func.py func_L00_006AAE40 --diff). Not part of the build. */
extern u8 *D_003468F8[];
typedef void (*Type1)(void *);

void func_L00_006AAE40(void) {
    s32 i = 0;
    do {
        if (i != 0) {
            u8 *node = D_003468F8[i];
            if (node != 0) {
                do {
                    u8 *object = *(u8 **)(node + 0xC);
                    Type1 callback = *(Type1 *)(object + 0x10);
                    node = *(u8 **)(node + 4);
                    callback(node);
                } while (node != 0);
            }
        }
        i++;
    } while (i < 7);
}
