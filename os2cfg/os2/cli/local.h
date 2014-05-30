/*
 * This header file contains any #pragma, or other special definitions
 * that might be local OS/2 or C Set/2
 */

#ifdef IN_SYS_H
/*
 * Code moved from sys.h
 */

#include <conio.h>
/* get past IBM's stupid mistakes */
#undef getch
#undef getche
#undef kbhit
#pragma map(getch,"_getch")
#pragma map(getche,"_getche")
#pragma map(kbhit,"_kbhit")
#endif


#ifdef IN_ISTART_R
/*
 * Code moved from istart.r
 */
#passthru #pragma map(argp,  "_Iargp")
#passthru #pragma map(Ollist,"_IOllist")
#passthru #pragma map(error, "_Ierror")
#passthru #pragma map(sp,    "_Isp")
#passthru #pragma map(stack, "_Istack")

#endif
