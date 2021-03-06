#undef OS2_32
#undef OS2
#undef MSDOS	   /* Just to be sure... */
#define OS2    1
#define OS2_32 1
#define CSET2  1
#define CSET2V2 1

#undef Graphics
#undef PresentationManager
#define StackSize	6000
#define MStackSize	32000

/*
 * The following definitions assure the C compilers are defined with
 * the correct logical values for #if directives. The definitions
 * they use come from the C command line.
 */
#define FixedRegions
#define Standard
#define KeyboardFncs
#define Pipes
#define SystemFnc
#define DeBug
#define LoadFunc
#define ExternalFunctions

#define HostStr "OS/2 2.x (FR) ex VisualAge C Version 3"

/* remap some functions */
#define index strchr
#define rindex strrchr
/*
 * The following definitions are common to all C compilers (to date).
 */
#define IntBits 32
#define Precision 15	/* As per float.h DBL_DIGIT */
#define IcodeSuffix ".icx"
#define IcodeASuffix ".ICX"
#define DiffPtrs(p1,p2) ((uword)(p1)-(uword)(p2))
