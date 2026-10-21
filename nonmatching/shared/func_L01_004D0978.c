/* Not matching yet: BYTES 9/136 (tools/try_func.py func_L01_004D0978 --diff). Not part of the build. */
extern void *func_L01_006B4FC0(void *, int, int, int);
extern void func_L00_006EC318(void *, int *, int);
void func_L01_004D0978(void *arg0, int arg1) {
    struct { int first; int second; } values;
    void *obj;
    if (arg1 == -1) obj = func_L01_006B4FC0(arg0, 1, 0, 0xFA);
    else obj = func_L01_006B4FC0(arg0, 1, 0, -1);
    values.first = arg1;
    func_L00_006EC318(obj, &values.first, 4);
    values.second = *(int *)0x172378;
    func_L00_006EC318(obj, &values.second, 4);
}
