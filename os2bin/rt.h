/***** do not edit -- this file was generated mechanically *****/



/****************************************  from ..\h/rt.h:  */

#ifndef RT_DOT_H	/* only include once */
#define RT_DOT_H 1

/*
 * Include files.
 */



/****************************************  from ../h/define.h:  */

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
#define IconCalling

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

/****************************************   end ../h/define.h   */
#if VMS
/* don't need path.h */
#else					/* VMS */


/****************************************  from ../h/path.h:  */

#define BinPath "/tmp_mnt/home/icon/v9/bin/"

/****************************************   end ../h/path.h   */
#endif					/* VMS */


/****************************************  from ../h/config.h:  */

/*
 * Icon configuration.
 */

/*
 * System-specific definitions are in define.h
 */

/*
 *  A number of symbols are defined here.  Some are specific to individual
 *  to operating systems.  Examples are:
 *
 *	MSDOS		MS-DOS for PCs
 *	UNIX		any UNIX system
 *	VMS		VMS for the VAX
 *
 *  These are defined to be 1 or 0 depending on which operating system
 *  the installation is being done under.  They are all defined and only
 *  one is defined to be 1.  (They are used in the form #if VAX || MSDOS.)
 *
 *  There also are definitions of symbols for specific computers and
 *  versions of operating systems.  These include:
 *
 *	SUN		code specific to the Sun Workstation
 *	MICROSOFT	code specific to the Microsoft C compiler for MS-DOS
 *
 *  Other definitions may occur for different configurations. These include:
 *
 *	DeBug		debugging code
 *	MultiThread	support for multiple programs under the interpreter
 *
 *  Other definitions perform configurations that are common to several
 *  systems. An example is:
 *
 *	Double		align reals at double-word boundaries
 *
 */

/*
 * If COMPILER is not defined, code for the interpreter is compiled.
 */

#ifndef COMPILER
#define COMPILER 0
#endif

/*
 * The following definitions insure that all the symbols for operating
 * systems that are not relevant are defined to be 0 -- so that they
 * can be used in logical expressions in #if directives.
 */

#ifndef PORT
#define PORT 0
#endif					/* PORT */

#ifndef AMIGA
#define AMIGA 0
#endif					/* AMIGA */

#ifndef ARM
#define ARM 0
#endif					/* ARM */

#ifndef ATARI_ST
#define ATARI_ST 0
#endif					/* ATARI_ST */

#ifndef MACINTOSH
#define MACINTOSH 0
#endif					/* MACINTOSH */

#ifndef MSDOS
#define MSDOS 0
#endif					/* MSDOS */

#ifndef SCCX_MX
#define SCCX_MX 0
#endif					/* SCCX_MX */

#ifndef MVS
#define MVS 0
#endif					/* MVS */

#ifndef OS2
#define OS2 0
#endif					/* OS2 */

#ifndef OS2_32
#define OS2_32 0
#endif					/* OS32 */

#ifndef UNIX
#define UNIX 0
#endif					/* UNIX */

#ifndef VM
#define VM 0
#endif					/* VM */

#ifndef VMS
#define VMS 0
#endif					/* VMS */


/*
 * The following definitions serve to cast common conditionals is
 *  a positive way, while allowing defaults for the cases that
 *  occur most frequently.  That is, if co-expressions are not supported,
 *  NoCoexpr is defined in define.h, but if they are supported, no
 *  definition is needed in define.h; nonetheless subsequent conditionals
 *  can be cast as #ifdef Coexpr.
 */

/*
 *  The mysterious Garden of Eden; not supported under the compiler.
 */

#ifndef NoCoexpr
#undef Coexpr
#define Coexpr
#endif					/* NoCoexpr */

#ifdef NoCoexpr
#undef MultiThread
#undef EventMon
#undef Eve
#endif					/* NoCoexpr */

#if COMPILER
#undef Eve
#undef MultiThread
#undef EventMon
#endif					/* COMPILER */

#ifdef Eve
#undef EventMon
#undef MultiThread
#define EventMon
#define MultiThread
#endif					/* Eve */

#ifndef NoEnvVars
#undef EnvVars
#define EnvVars
#endif					/* NoEnvVars */

#ifndef NoStrInvoke
#undef StrInvoke
#define StrInvoke
#endif					/* NoStrInvoke */

#ifndef NoLargeInts
#undef LargeInts
#define LargeInts
#endif					/* NoLargeInts */

#ifdef EventMon
#undef MultiThread
#define MultiThread
#endif					/* EventMon */

#ifndef RefPath
#define RefPath BinPath
#endif					/* RefPath */

#if UNIX
#ifndef NoShellHeader
#undef ShellHeader
#define ShellHeader
#endif					/* NoShellHeader */
#endif					/* UNIX */

/*
 * Names for standard environment variables, if they are supported.
 * The standard names are used unless they are overridden.
 */

#ifdef EnvVars

#ifndef NOERRBUF
#define NOERRBUF "NOERRBUF"
#endif

#ifndef TRACE
#define TRACE "TRACE"
#endif

#ifndef COEXPSIZE
#define COEXPSIZE "COEXPSIZE"
#endif

#ifndef STRSIZE
#define STRSIZE "STRSIZE"
#endif

#ifndef HEAPSIZE
#define HEAPSIZE "HEAPSIZE"
#endif

#ifndef BLOCKSIZE
#define BLOCKSIZE "BLOCKSIZE"
#endif

#ifndef BLKSIZE
#define BLKSIZE "BLKSIZE"
#endif

#ifndef MSTKSIZE
#define MSTKSIZE "MSTKSIZE"
#endif

#ifndef QLSIZE
#define QLSIZE "QLSIZE"
#endif

#ifndef ICONCORE
#define ICONCORE "ICONCORE"
#endif

#ifndef IPATH
#define IPATH "IPATH"
#endif

#endif					/* EnvVars */

#ifdef MSWindows
#undef Graphics
#define Graphics 1
#ifndef NTConsole
#define ConsoleWindow 1
#endif					/* NTConsole */
#endif					/* MSWindows */
#ifdef MacGraph
#undef Graphics
#define Graphics 1
#endif					/* MacGraph */
#ifdef PresentationManager
#define Graphics 1
#define ConsoleWindow 1
#endif					/* PresentationManager */

#ifdef Graphics
#ifndef NoXpmFormat
#if UNIX
#undef HaveXpmFormat
#define HaveXpmFormat
#endif					/* UNIX */
#endif					/* NoXpmFormat */
#ifndef MSWindows
#ifndef PresentationManager
#ifndef MacGraph
#undef XWindows
#define XWindows 1
#endif					/* MacGraph */
#endif					/* PresentationManager */
#endif					/* MSWindows */
#undef LineCodes
#define LineCodes
#undef Polling
#define Polling
#ifndef NoIconify
#define Iconify
#endif					/* NoIconify */
#ifndef ICONC_XLIB
#define ICONC_XLIB "-lX11"
#endif					/* ICONC_XLIB */

#ifdef ConsoleWindow
/*
 * knock out fprintf and putc; these are here so that consoles may be used
 * in icont and rtt, not just iconx
 */
#undef fprintf
#define fprintf Consolefprintf
#undef putc
#define putc Consoleputc
#undef fflush
#define fflush Consolefflush
#undef printf
#define printf Consoleprintf
#undef exit
#define exit c_exit
#endif					/* Console Window */

#endif					/* Graphics */

#ifndef NoExternalFunctions
#undef ExternalFunctions
#define ExternalFunctions
#endif					/* NoExternalFunctions */

/*
 * EBCDIC == 0 corresponds to ASCII.  EBCDIC == 1 corresponds to EBCDIC
 *  collating sequence, while EBCDIC == 2 provides the ASCII collating
 *  sequence for EBCDIC systems.
 */
#ifndef EBCDIC
#define EBCDIC 0
#endif					/* EBCDIC */

/*
 * Other defaults.
 */

#ifdef DeBug
#undef DeBugTrans
#undef DeBugLinker
#undef DeBugIconx
#define DeBugTrans
#define DeBugLinker
#define DeBugIconx
#endif					/* DeBug */

#ifndef AllocType
#define AllocType unsigned int
#endif					/* AllocType */

#ifndef ErrorExit
#define ErrorExit 1
#endif					/* ErrorExit */

#ifndef NormalExit
#define NormalExit 0
#endif					/* NormalExit */

#ifndef Hz
#define Hz 60
#endif					/* Hz */

#ifndef MaxHdr
#define MaxHdr 4096
#endif					/* MaxHdr */

#ifndef MaxPath
#define MaxPath 200
#endif					/* MaxPath */

#ifndef StackAlign
#define StackAlign 2
#endif					/* StackAlign */

#ifndef SysTime
#define SysTime <time.h>
#endif					/* SysTime */

#ifndef WordBits
#define WordBits 32
#endif					/* WordBits */

#ifndef IntBits
#define IntBits WordBits
#endif					/* IntBits */

#ifndef SourceSuffix
#define SourceSuffix ".icn"
#endif					/* SourceSuffix */

/*
 * Representations of directories. LocalDir is the "current working directory".
 *  SourceDir is where the source file is.
 */

#define LocalDir ""
#define SourceDir (char *)NULL

#ifndef TargetDir
#define TargetDir LocalDir
#endif					/* TargetDir */


#ifndef Pipes
#if ARM || OS2 || UNIX || VMS
#define Pipes
#endif					/* ARM || OS2 || UNIX || VMS */
#endif					/* Pipes */

#if UNIX || VMS
#define SystemFnc
#endif					/* UNIX || VMS */


/*
 * Default sizing and such.
 */

#define WordSize sizeof(word)

#ifndef ByteBits
#define ByteBits 8
#endif					/* ByteBits */

/*
 * Change the name of gcvt() if we're supplying our own version,
 * to avoid complaints under VMS and others with shared libraries.
 */

#ifndef NoIconGcvt
#undef IconGcvt
#define IconGcvt
#define gcvt icon_gcvt
#endif					/* IconGcvt */

/*
 *  The following definitions depend on whether or not the ANSI C standard
 *  is supported.
 */

#ifdef Standard
#undef StandardC
#undef StandardPP
#undef StandardLib
#define StandardC
#define StandardPP
#define StandardLib
#endif					/* Standard */

#ifdef StandardPP
#define Cat(x,y) x##y
#define Lit(x) #x
#else					/* StandardPP */
#define Ident(x) x
#define Cat(x,y) Ident(x)y
#define Lit(x) "x"
#endif					/* StandardPP */

#ifdef StandardC
#undef Prototypes
#define Prototypes
#undef VoidType
#define VoidType
#define Bell '\a'
#else					/* StandardC */
#if EBCDIC
#define Bell '\x2F'
#else					/* EBCDIC */
#define Bell '\007'
#endif					/* EBCDIC */
#endif					/* StandardC */

#ifdef StandardLib
#undef SysMem
#define SysMem
#endif					/* StandardLib */

#if IntBits != WordBits
#undef SysMem
#endif					/* Intbits != WordBits */

#ifdef SysMem
#undef memcopy
#undef memfill
#define memcopy(to,from,len) memcpy(to,from,len)
#define memfill(to,from,len) memset(to,from,len)
#endif					/* SysMem */

#ifdef SysOpt
#define optindex optind
#endif					/* SysOpt */

/*
 * Provide definition to use void if it's supported (mainly avoids error
 *  messages with some C compilers.  Note: typedef does not work, so care
 *  is needed not to use compound declarations.
 */

#ifdef VoidType
#define novalue void
#define noargs void
#else					/* VoidType */
#define novalue int
#define noargs
#endif					/* VoidType */

/*
 * And something to handle a cast problem for signal().
 */

#ifndef SigFncCast
#ifdef VoidType
#define SigFncCast (void (*)(int))
#else					/* VoidType */
#define SigFncCast
#endif					/* VoidType */
#endif					/* SigFncCast */

/*
 * Customize output if not pre-defined.
 */

#ifndef TraceOut
#define TraceOut(s) fprintf(stderr,s)
#endif					/* TraceOut */

#if EBCDIC
#define BackSlash "\xe0"
#else					/* EBCDIC */
#define BackSlash "\\"
#endif					/* EBCDIC */

#ifndef WriteBinary
#define WriteBinary "wb"
#endif					/* WriteBinary */

#ifndef ReadBinary
#define ReadBinary "rb"
#endif					/* ReadBinary */

#ifndef ReadWriteBinary
#define ReadWriteBinary "wb+"
#endif					/* ReadWriteBinary */

#ifndef ReadEndBinary
#define ReadEndBinary "r+b"
#endif					/* ReadEndBinary */

#ifndef WriteText
#define WriteText "w"
#endif					/* WriteText */

#ifndef ReadText
#define ReadText "r"
#endif					/* ReadText */

/*
 * "hidden" is used to declare static functions;  "hidden" normally == "static",
 *  except with compilers that can't handle "static" in prototypes.
 */

#ifndef hidden
#define hidden static
#endif					/* hidden */

/*
 * The "Params" macro allows a single declaration to be used with both old- and
 *  new-style compilers.
 */

#ifdef Prototypes
#define Params(a) a
#else					/* Prototypes */
#define Params(a) ()
#endif					/* Prototypes */

/*
 * The following code is operating-system dependent [@config.01].
 *  Any configuration stuff that has to be done at this point.
 */

#if PORT
   /* Probably nothing is needed. */
Deliberate Syntax Error
#endif					/* PORT */

#if VMS
#define ExecSuffix ".exe"
#define ObjSuffix ".obj"
#define LibSuffix ".olb"
#endif					/* VMS */

#if AMIGA || ARM || ATARI_ST || MACINTOSH || MVS || VM
#endif					/* AMIGA || ARM || ... */

#if MSDOS || OS2

/*
 *  Define compiler-specific symbols to be zero if not already
 *  defined.
 */

#ifndef MICROSOFT
#define MICROSOFT 0
#endif					/* MICROSOFT */

#ifndef CSET2
#define CSET2 0
#endif					/* CSet/2 */

#ifndef CSET2V2
#define CSET2V2 0
#endif					/* CSet/2 version 2 */

#ifndef TURBO
#define TURBO 0
#endif					/* TURBO */

#ifndef HIGHC_386
#define HIGHC_386 0
#endif					/* HIGHC_386 */

#ifndef INTEL_386
#define INTEL_386 0
#endif					/* INTEL_386 */

#ifndef WATCOM
#define WATCOM 0
#endif					/* WATCOM */

#ifndef ZTC_386
#define ZTC_386 0
#endif					/* ZTC_386 */

#ifndef NT
#define NT 0
#endif					/* NT */

#ifndef BORLAND_286
#define BORLAND_286 0
#endif					/* BORLAND_286 (16-bit protected mode) */

#ifndef BORLAND_386
#define BORLAND_386 0
#endif					/* BORLAND_386 (32-bit protected mode) */

#if HIGHC_386
/*
 * MetaWare's HighC 386 macro putc doesn't handle putc('\n') correctly -
 * sometimes a CR is not written out before the LF.  So, redefine
 * macro putc to actually issue an fputc.
 */
#undef putc
#define putc(c,f) fputc(c,f)
#endif					/* HIGHC_386 */
#endif					/* MSDOS || OS2 */


#if MACINTOSH
#if LSC
/*
 * LightSpeed C requires that #define tokens appear after prototypes
 */
#define index strchr
#define malloc mlalloc
#define rindex strrchr
#define unlink remove
#endif					/* LSC */
#endif					/* MACINTOSH */

#if MVS || VM

/*
 *  Define compiler-specific symbols to be zero if not already
 *  defined.
 */

#ifndef SASC
#define SASC 0
#endif					/* SASC */

#ifndef __SASC
#define __SASC 0
#endif                                  /* __SASC */
 
#ifndef WATERLOO_C_V3_0
#define WATERLOO_C_V3_0 0
#endif					/* WATERLOO_C_V3_0 */
#endif					/* MVS || VM */

#if UNIX || (MACINTOSH && MPW)

#undef WriteBinary
#define WriteBinary "w"

#undef ReadBinary
#define ReadBinary "r"

#undef ReadEndBinary
#define ReadEndBinary "r+"

#ifndef NoHardWiredPaths
#define HardWiredPaths
#endif					/* NoHardWiredPaths */

#ifndef NoHeader
#undef Header
#define Header
#endif					/* NoHeader */

#endif					/* UNIX || (MACINTOSH && MPW) */

#ifndef NoWildCards
#if NT || BORLAND_286 || BORLAND_386 || MICROSOFT || SCCX_MX
#define WildCards 1
#else					/* NT || ... */
#define WildCards 0
#endif					/* NT || ... */
#else					/* NoWildCards */
#define WildCards 0
#endif					/* NoWildCards */


/*
 * End of operating-system specific code.
 */


#ifndef DiffPtrs
#define DiffPtrs(p1,p2) (word)((p1)-(p2))
#endif					/* DiffPtrs */

#ifndef AllocReg
#define AllocReg(n) malloc((msize)n)
#endif					/* AllocReg */

#define MaxFileName 256

#ifndef RttSuffix
#define RttSuffix ".r"
#endif					/* RttSuffix */

#ifndef DBSuffix
#define DBSuffix ".db"
#endif					/* DBSuffix */

#ifndef PPInit
#define PPInit ""
#endif					/* PPInit */

#ifndef PPDirectives
#define PPDirectives {"passthru", PpKeep},
#endif					/* PPDirectives */

#ifndef NoRanlib
#define Ranlib
#endif					/* NoRanlib */

#ifndef EventMon
#if IntBits == 16
#define NoSrcColumnInfo
#endif					/* IntBits == 16 */
#endif					/* EventMon */

#ifndef NoSrcColumnInfo
#define SrcColumnInfo
#endif					/* NoSrcColumnInfo */

#ifndef ExecSuffix
#define ExecSuffix ""
#endif					/* ExecSuffix */

#ifndef CSuffix
#define CSuffix ".c"
#endif					/* CSuffix */

#ifndef HSuffix
#define HSuffix ".h"
#endif					/* HSuffix */

#ifndef ObjSuffix
#define ObjSuffix ".o"
#endif					/* ObjSuffix */

#ifndef LibSuffix
#define LibSuffix ".a"
#endif					/* LibSuffix */

#ifndef CComp
#define CComp "cc"
#endif					/* CComp */

#ifndef COpts
#define COpts ""
#endif					/* COpts */

/*
 * Note, size of the hash table is a power of 2:
 */
#define IHSize 128
#define IHasher(x)	(((unsigned int)x)&(IHSize-1))

#if COMPILER

/*
 * Code for the compiler.
 */

#undef MultiThread		/* no way -- interpreter only */
#undef EventMon			/* presently not supported in the compiler */
#undef ExecImages               /* interpreter only */

#else					/* COMPILER */

/*
 * Code for the interpreter.
 */

#ifndef IcodeSuffix
#define IcodeSuffix ""
#endif					/* IcodeSuffix */

#ifndef IcodeASuffix
#define IcodeASuffix ""
#endif					/* IcodeASuffix */

#ifndef U1Suffix
#define U1Suffix ".u1"
#endif					/* U1Suffix */

#ifndef U2Suffix
#define U2Suffix ".u2"
#endif					/* U2Suffix */

#ifndef USuffix
#define USuffix ".u"
#endif					/* USuffix */

#endif					/* COMPILER */

#ifndef IconOptions

#if AMIGA
#define IconOptions "C:ELS:Tce:f:n:o:p:r:stuv:x"
#endif                                  /* AMIGA */

#if ARM || MPW || UNIX || VMS
#define IconOptions "C:ELS:Tce:f:mn:o:p:r:stuv:x"
#endif					/* ARM || MPW || UNIX || VMS */

#if THINK_C
#define IconOptions "C:ELS:XITce:f:mn:o:p:r:stuv:x"
#endif

#if MSDOS
#ifdef MSWindows
#define IconOptions "C:ELS:XITce:f:mn:o:p:qr:stuv:x"
#else					/* MSWindows */
#if SCCX_MX
#define IconOptions "C:ELS:AXITce:f:mn:o:p:r:stuv:x"
#else
#define IconOptions "C:ELS:XITce:f:mn:o:p:r:stuv:x"
#endif                  /* SCCX_MX */
#endif					/* MSWindows */
#endif					/* MSDOS */

#if OS2
#define IconOptions "C:ELS:Tce:f:in:o:p:r:stuv:x"
#endif					/* OS2 */

#endif					/* Options */

#if EBCDIC
#define CUsage "<-C C-comp> <-T> <-c> <-f{adelns}> <-n{acest}>\n\
 <-o ofile> <-p C-opts> <-r runtime> <-s> <-t> <-u> <-v i>"
#else                                   /* EBCDIC */
#ifndef CUsage
#if UNIX
#define CUsage "[-C C-comp] [-E] [-T] [-c] [-f{adelns}] [-m] [-n{acest}]\n\
 [-o ofile] [-p C-opts] [-r runtime] [-s] [-t] [-u] [-v i]"
#else					/* UNIX */
#define CUsage "[-C C-comp] [-E] [-T] [-c] [-f{adelns}] [-n{acest}]\n\
 [-o ofile] [-p C-opts] [-r runtime] [-s] [-t] [-u] [-v i]"
#endif					/* UNIX */
#endif					/* CUsage */
#endif					/* EBCDIC */

#ifndef TUsage

#if EBCDIC
#define TUsage "<-cstu> <-fs> <-e efile> <-o ofile>"
#endif                                   /* EBCDIC */

#if AMIGA
#define TUsage "[-cstuE] [-fs] [-e efile] [-o ofile]"
#endif                                  /* AMIGA */

#if ARM || UNIX
#define TUsage "[-cmstuE] [-fs] [-e efile] [-o ofile]"
#endif					/* ARM || UNIX */

#if MPW
#define TUsage "[-cstuE] [-fs] [-e efile] [-o ofile]"
#endif					/* MPW */

#if THINK_C
#define TUsage "[-cmstuE] [-fs] [-e efile] [-o ofile]"
#endif

#if OS2
#define TUsage "[-cistuEI] [-fs] [-e efile] [-o ofile]"
#endif					/* OS2 */

#if MVS || VM
#define TUsage "<-cstuE> <-fs> <-e efile> <-o ofile>"
#endif					/* MVS || VM */

#if MSDOS
#if SCCX_MX
#define TUsage "[-cstuAEIX] [-fs] [-e efile] [-o ofile]"
#else
#define TUsage "[-cstuEIX] [-fs] [-e efile] [-o ofile]"
#endif                  /* SCCX_MX */
#endif					/* MSDOS */

#endif					/* TUsage */

#if (MSDOS || OS2) && !NT
#undef DirectExecution
#define DirectExecution
#endif					/* (MSDOS || OS2) && !NT */

#ifdef Header
#undef DirectExecution
#define DirectExecution
#endif					/* Header */

/*
 * TEMPORARY
 */

/*
 *  Vsizeof is for use with variable-sized (i.e., indefinite)
 *   structures containing an array of descriptors declared of size 1
 *   to avoid compiler warnings associated with 0-sized arrays.
 */

#define Vsizeof(s)	(sizeof(s) - sizeof(struct descrip))

/*
 * Other sizeof macros:
 *
 *  Wsizeof(x)	-- Size of x in words.
 *  Vwsizeof(x) -- Size of x in words, minus the size of a descriptor.	Used
 *   when structures have a potentially null list of descriptors
 *   at their end.
 */

#define Wsizeof(x)	((sizeof(x) + sizeof(word) - 1) / sizeof(word))
#define Vwsizeof(x)	((sizeof(x) - sizeof(struct descrip) +\
			   sizeof(word) - 1) / sizeof(word))


/****************************************   end ../h/config.h   */


/****************************************  from ../h/sys.h:  */

/*
 * sys.h -- system include files.
 */

/*
 * The const storage-class qualifier causes conflicts between some of
 *  our prototypes and those from system include files on some platforms.
 *  In addition, some RTL code uses casts to const pointers to keep rtt
 *  from printing warnings about possible indirect modifications. However,
 *  these casts do not pass non-ANSI-standard C compilers.
 */
#ifndef AllowConst
#define const  /* make const disapear */
#endif					/* StandardLib */

/*
 * The following code is operating-system dependent [@sys.01].  Include files
 *  that are system-dependent.
 */

#if PORT
#include <signal.h>
   /* probably needs something more */
Deliberate Syntax Error
#endif					/* PORT */

#if AMIGA
#include <signal.h>
#include <fcntl.h>
#include <ios1.h>
#include <stdio.h>
#include <string.h>
#include <libraries/dosextens.h>
#include <libraries/dos.h>
#include <workbench/startup.h>
#if __SASC
#include <proto/dos.h>
#include <proto/icon.h>
#include <proto/wb.h>
#undef GLOBAL
#undef STATIC		/* defined in <exec/types.h> */
#endif					/* __SASC */
#if AZTEC_C
#include <ctype.h>
#endif					/* AZTEC_C */
#endif					/* AMIGA */

#if ARM
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#endif					/* ARM */

#if ATARI_ST
#include <fcntl.h>
#include <osbind.h>
#endif					/* ATARI_ST */

#if MACINTOSH
#include <signal.h>
#if LSC
#include <unix.h>
#endif					/* LSC */
#if MPW
#define create xx_create	/* prevent duplicate definition of create() */
#include <stdlib.h>
#include <stdio.h>
#include <Types.h>
#include <Events.h>
#include <Files.h>
#include <FCntl.h>
#include <Files.h>
#include <IOCtl.h>
#include <fp.h>
#include <OSUtils.h>
#include <Memory.h>
#include <Errors.h>


/****************************************  from time.h:  */

/* [file not found] */

/****************************************   end time.h   */
#include <Quickdraw.h>
#include <ToolUtils.h>
#include <CursorCtl.h>
#endif					/* MPW */
#if THINK_C
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#endif
#ifdef MacGraph
#include <console.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <AppleEvents.h>
#include <GestaltEqu.h>
#include <fp.h>
#include <QDOffscreen.h>
#include <Palettes.h>
#include <Quickdraw.h>
#endif					/* MacGraph */
#endif					/* MACINTOSH */

#if MSDOS
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <time.h>

#ifdef MSWindows
#define int_PASCAL int PASCAL
#define LRESULT_CALLBACK LRESULT CALLBACK
#define BOOL_CALLBACK BOOL CALLBACK
#if BORLAND_286
#include <time.h>
#include <dir.h>
#endif					/* BORLAND_286 */
#include <windows.h>
#include <mmsystem.h>


/****************************************  from ../wincap/dibutil.h:  */

/* [file not found] */

/****************************************   end ../wincap/dibutil.h   */
#endif					/* MSWindows */
#include <setjmp.h>
#endif					/* MSDOS */

#if MVS || VM
#ifdef RecordIO
#if SASC
#include <lcio.h>
#endif					/* SASC */
#endif					/* RecordIO */
#if SASC
#include <lcsignal.h>
#else					/* SASC */
#include <signal.h>
#endif					/* SASC */
#endif					/* MVS || VM */

#if OS2
#define INCL_DOS
#define INCL_ERRORS
#define INCL_RESOURCES
#define INCL_DOSMODULEMGR

#ifdef PresentationManager
#define INCL_PM
#endif					/* PresentationManager */

#include <os2.h>
#include <stdio.h>
#include <time.h>
#include <signal.h>
/* Pipe support for OS/2 */
#include <stddef.h>
#include <process.h>
#include <fcntl.h>
#include <errno.h>

#if CSET2V2
#include <io.h>
#include <direct.h>
#define IN_SYS_H


/****************************************  from ../h/local.h:  */

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

/****************************************   end ../h/local.h   */
#undef IN_SYS_H
#endif					/* CSet/2 version 2 */

#endif					/* OS2 */
#ifdef ConsoleWindow
/*
 * pull in variable arg lists
 */
#include <stdarg.h>
#endif					/* ConsoleWindow */

#if UNIX

#ifdef ATT3B
#include <sys/types.h>
#include <sys/stat.h>
#endif					/* ATT3B */

#ifdef MSWindows
#ifdef FAttrib
#include <sys/stat.h>
#include <grp.h>
#include <pwd.h>
#endif					/* FAttrib */
#endif					/* MSWindows */

#ifdef XENIX_386

#ifdef StandardLib
#include <unistd.h>
#endif					/* StandardLib */

#endif					/* XENIX_386 */

#ifdef SuppressAlignmentMsg
#include <sys/sysinfo.h>
#include <sys/proc.h>
#endif					/* SuppressAlignmentMsg */

#include <signal.h>

#ifndef XWindows
#include <sys/types.h>
#endif					/* XWindows */
#include <sys/time.h>

#ifdef UtsName
#include <sys/utsname.h>
#endif					/* UtsName */

#ifdef KeyboardFncs
#ifdef HaveTermio

#ifndef Linux
#include <sys/termio.h>
#else					/* Linux */
#include <termio.h>
#endif					/* Linux */

#include <sys/ioctl.h>
#include <sys/errno.h>
#include <sys/signal.h>
#endif					/* HaveTermio */

#ifdef HaveTioc
#include <sys/ioctl.h>
#include <errno.h>
#include <sys/signal.h>
#endif					/* HaveTioc */

#endif					/* KeyboardFncs */

#ifdef LoadFunc
#include <dlfcn.h>
#endif					/* LoadFunc */

#endif					/* UNIX */

#if VMS
#include <signal.h>
#include <types.h>
#include <dvidef>
#include <iodef>
#include <stsdef.h>
#endif					/* VMS */

#ifdef ConsoleWindow
#undef printf
#undef fprintf
#undef fflush
#endif					/* ConsoleWindow */

#include <stdio.h>

#ifdef ConsoleWindow
#define printf Consoleprintf
#define fprintf Consolefprintf
#define fflush Consolefflush
#endif					/* ConsoleWindow */

#ifdef XWindows
/*
 * DECstation X Window #includes check for #ifdef VMS, so if it's 0, undef it.
 * DECwindows #includes check for #ifdef UNIX, so if VMS is 1, undef UNIX.
 */

#if !VMS
#undef VMS
#endif					/* VMS */

#if VMS
#undef UNIX


/****************************************  from decw$include:Xlib.h:  */

/* [file not found] */

/****************************************   end decw$include:Xlib.h   */


/****************************************  from decw$include:Xutil.h:  */

/* [file not found] */

/****************************************   end decw$include:Xutil.h   */


/****************************************  from decw$include:Xos.h:  */

/* [file not found] */

/****************************************   end decw$include:Xos.h   */


/****************************************  from decw$include:Xatom.h:  */

/* [file not found] */

/****************************************   end decw$include:Xatom.h   */

#ifdef HaveXpmFormat


/****************************************  from ../xpm/xpm.h:  */

/* Copyright 1990-92 GROUPE BULL -- See license conditions in file COPYRIGHT */
/*****************************************************************************\
* xpm.h:                                                                      *
*                                                                             *
*  XPM library                                                                *
*  Include file                                                               *
*                                                                             *
*  Developed by Arnaud Le Hors                                                *
\*****************************************************************************/

#ifndef XPM_h
#define XPM_h

#ifdef VMS


/****************************************  from decw$include:Xlib.h:  */

/* [file not found] */

/****************************************   end decw$include:Xlib.h   */


/****************************************  from decw$include:Intrinsic.h:  */

/* [file not found] */

/****************************************   end decw$include:Intrinsic.h   */


/****************************************  from sys$library:stdio.h:  */

/* [file not found] */

/****************************************   end sys$library:stdio.h   */
#else
#include <stdio.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#endif

/* we keep the same codes as for Bitmap management */
#ifndef _XUTIL_H_
#ifdef VMS


/****************************************  from decw$include:Xutil.h:  */

/* [file not found] */

/****************************************   end decw$include:Xutil.h   */
#else
#include <X11/Xutil.h>
#endif
#endif

/* Return ErrorStatus codes:
 * null     if full success
 * positive if partial success
 * negative if failure
 */

#define XpmColorError    1
#define XpmSuccess       0
#define XpmOpenFailed   -1
#define XpmFileInvalid  -2
#define XpmNoMemory     -3
#define XpmColorFailed  -4


typedef struct {
    char *name;				/* Symbolic color name */
    char *value;			/* Color value */
    Pixel pixel;			/* Color pixel */
}      XpmColorSymbol;

typedef struct {
    char *name;				/* name of the extension */
    unsigned int nlines;		/* number of lines in this extension */
    char **lines;			/* pointer to the extension array of 
					   strings */
}      XpmExtension;

typedef struct {
    unsigned long valuemask;		/* Specifies which attributes are
					 * defined */

    Visual *visual;			/* Specifies the visual to use */
    Colormap colormap;			/* Specifies the colormap to use */
    unsigned int depth;			/* Specifies the depth */
    unsigned int width;			/* Returns the width of the created
					 * pixmap */
    unsigned int height;		/* Returns the height of the created
					 * pixmap */
    unsigned int x_hotspot;		/* Returns the x hotspot's
					 * coordinate */
    unsigned int y_hotspot;		/* Returns the y hotspot's
					 * coordinate */
    unsigned int cpp;			/* Specifies the number of char per
					 * pixel */
    Pixel *pixels;			/* List of used color pixels */
    unsigned int npixels;		/* Number of pixels */
    XpmColorSymbol *colorsymbols;	/* Array of color symbols to
					 * override */
    unsigned int numsymbols;		/* Number of symbols */
    char *rgb_fname;			/* RGB text file name */
    unsigned int nextensions;		/* number of extensions */
    XpmExtension *extensions;		/* pointer to array of extensions */

    /* Infos */
    unsigned int ncolors;		/* Number of colors */
    char ***colorTable;			/* Color table pointer */
    char *hints_cmt;			/* Comment of the hints section */
    char *colors_cmt;			/* Comment of the colors section */
    char *pixels_cmt;			/* Comment of the pixels section */
    unsigned int mask_pixel;		/* Transparent pixel's color table
					 * index */
    /* Color Allocation Directives */
    unsigned int exactColors;		/* Only use exact colors for visual */
    unsigned int closeness;		/* Allowable RGB deviation */

}      XpmAttributes;

/* Xpm attribute value masks bits */
#define XpmVisual	   (1L<<0)
#define XpmColormap	   (1L<<1)
#define XpmDepth	   (1L<<2)
#define XpmSize		   (1L<<3)	/* width & height */
#define XpmHotspot	   (1L<<4)	/* x_hotspot & y_hotspot */
#define XpmCharsPerPixel   (1L<<5)
#define XpmColorSymbols	   (1L<<6)
#define XpmRgbFilename	   (1L<<7)
#define XpmInfos	   (1L<<8)	/* all infos members */
#define XpmExtensions      (1L<<10)

#define XpmReturnPixels	   (1L<<9)
#define XpmReturnInfos	   XpmInfos
#define XpmReturnExtensions XpmExtensions

#define XpmExactColors     (1L<<11)
#define XpmCloseness	   (1L<<12)

/*
 * minimal portability layer between ansi and KR C 
 */

/* forward declaration of functions with prototypes */

#if __STDC__ || defined(__cplusplus) || defined(c_plusplus)
 /* ANSI || C++ */
#define FUNC(f, t, p) extern t f p
#define LFUNC(f, t, p) static t f p
#else					/* K&R */
#define FUNC(f, t, p) extern t f()
#define LFUNC(f, t, p) static t f()
#endif					/* end of K&R */


/*
 * functions declarations
 */

#ifdef __cplusplus
extern "C" {
#endif

    FUNC(XpmCreatePixmapFromData, int, (Display * display,
					Drawable d,
					char **data,
					Pixmap * pixmap_return,
					Pixmap * shapemask_return,
					XpmAttributes * attributes));

    FUNC(XpmCreateDataFromPixmap, int, (Display * display,
					char ***data_return,
					Pixmap pixmap,
					Pixmap shapemask,
					XpmAttributes * attributes));

    FUNC(XpmReadFileToPixmap, int, (Display * display,
				    Drawable d,
				    char *filename,
				    Pixmap * pixmap_return,
				    Pixmap * shapemask_return,
				    XpmAttributes * attributes));

    FUNC(XpmWriteFileFromPixmap, int, (Display * display,
				       char *filename,
				       Pixmap pixmap,
				       Pixmap shapemask,
				       XpmAttributes * attributes));

    FUNC(XpmCreateImageFromData, int, (Display * display,
				       char **data,
				       XImage ** image_return,
				       XImage ** shapemask_return,
				       XpmAttributes * attributes));

    FUNC(XpmCreateDataFromImage, int, (Display * display,
				       char ***data_return,
				       XImage * image,
				       XImage * shapeimage,
				       XpmAttributes * attributes));

    FUNC(XpmReadFileToImage, int, (Display * display,
				   char *filename,
				   XImage ** image_return,
				   XImage ** shapeimage_return,
				   XpmAttributes * attributes));

    FUNC(XpmWriteFileFromImage, int, (Display * display,
				      char *filename,
				      XImage * image,
				      XImage * shapeimage,
				      XpmAttributes * attributes));

    FUNC(XpmAttributesSize, int, ());
    FUNC(XpmFreeAttributes, int, (XpmAttributes * attributes));
    FUNC(XpmFreeExtensions, int, (XpmExtension * extensions, int nextensions));

#ifdef __cplusplus
}					/* for C++ V2.0 */

#endif


/* backward compatibility */

/* for version 3.0c */
#define XpmPixmapColorError  XpmColorError
#define XpmPixmapSuccess     XpmSuccess
#define XpmPixmapOpenFailed  XpmOpenFailed
#define XpmPixmapFileInvalid XpmFileInvalid
#define XpmPixmapNoMemory    XpmNoMemory
#define XpmPixmapColorFailed XpmColorFailed

#define XpmReadPixmapFile(dpy, d, file, pix, mask, att) \
    XpmReadFileToPixmap(dpy, d, file, pix, mask, att)
#define XpmWritePixmapFile(dpy, file, pix, mask, att) \
    XpmWriteFileFromPixmap(dpy, file, pix, mask, att)

/* for version 3.0b */
#define PixmapColorError  XpmColorError
#define PixmapSuccess     XpmSuccess
#define PixmapOpenFailed  XpmOpenFailed
#define PixmapFileInvalid XpmFileInvalid
#define PixmapNoMemory    XpmNoMemory
#define PixmapColorFailed XpmColorFailed

#define ColorSymbol XpmColorSymbol

#define XReadPixmapFile(dpy, d, file, pix, mask, att) \
    XpmReadFileToPixmap(dpy, d, file, pix, mask, att)
#define XWritePixmapFile(dpy, file, pix, mask, att) \
    XpmWriteFileFromPixmap(dpy, file, pix, mask, att)
#define XCreatePixmapFromData(dpy, d, data, pix, mask, att) \
    XpmCreatePixmapFromData(dpy, d, data, pix, mask, att)
#define XCreateDataFromPixmap(dpy, data, pix, mask, att) \
    XpmCreateDataFromPixmap(dpy, data, pix, mask, att)

#endif

/****************************************   end ../xpm/xpm.h   */
#endif					/* HaveXpmFormat */

#undef UNIX
#define UNIX 0
#else					/* VMS */

#ifdef HaveXpmFormat


/****************************************  from ../xpm/xpm.h:  */

/* Copyright 1990-92 GROUPE BULL -- See license conditions in file COPYRIGHT */
/*****************************************************************************\
* xpm.h:                                                                      *
*                                                                             *
*  XPM library                                                                *
*  Include file                                                               *
*                                                                             *
*  Developed by Arnaud Le Hors                                                *
\*****************************************************************************/

#ifndef XPM_h
#define XPM_h

#ifdef VMS


/****************************************  from decw$include:Xlib.h:  */

/* [file not found] */

/****************************************   end decw$include:Xlib.h   */


/****************************************  from decw$include:Intrinsic.h:  */

/* [file not found] */

/****************************************   end decw$include:Intrinsic.h   */


/****************************************  from sys$library:stdio.h:  */

/* [file not found] */

/****************************************   end sys$library:stdio.h   */
#else
#include <stdio.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#endif

/* we keep the same codes as for Bitmap management */
#ifndef _XUTIL_H_
#ifdef VMS


/****************************************  from decw$include:Xutil.h:  */

/* [file not found] */

/****************************************   end decw$include:Xutil.h   */
#else
#include <X11/Xutil.h>
#endif
#endif

/* Return ErrorStatus codes:
 * null     if full success
 * positive if partial success
 * negative if failure
 */

#define XpmColorError    1
#define XpmSuccess       0
#define XpmOpenFailed   -1
#define XpmFileInvalid  -2
#define XpmNoMemory     -3
#define XpmColorFailed  -4


typedef struct {
    char *name;				/* Symbolic color name */
    char *value;			/* Color value */
    Pixel pixel;			/* Color pixel */
}      XpmColorSymbol;

typedef struct {
    char *name;				/* name of the extension */
    unsigned int nlines;		/* number of lines in this extension */
    char **lines;			/* pointer to the extension array of 
					   strings */
}      XpmExtension;

typedef struct {
    unsigned long valuemask;		/* Specifies which attributes are
					 * defined */

    Visual *visual;			/* Specifies the visual to use */
    Colormap colormap;			/* Specifies the colormap to use */
    unsigned int depth;			/* Specifies the depth */
    unsigned int width;			/* Returns the width of the created
					 * pixmap */
    unsigned int height;		/* Returns the height of the created
					 * pixmap */
    unsigned int x_hotspot;		/* Returns the x hotspot's
					 * coordinate */
    unsigned int y_hotspot;		/* Returns the y hotspot's
					 * coordinate */
    unsigned int cpp;			/* Specifies the number of char per
					 * pixel */
    Pixel *pixels;			/* List of used color pixels */
    unsigned int npixels;		/* Number of pixels */
    XpmColorSymbol *colorsymbols;	/* Array of color symbols to
					 * override */
    unsigned int numsymbols;		/* Number of symbols */
    char *rgb_fname;			/* RGB text file name */
    unsigned int nextensions;		/* number of extensions */
    XpmExtension *extensions;		/* pointer to array of extensions */

    /* Infos */
    unsigned int ncolors;		/* Number of colors */
    char ***colorTable;			/* Color table pointer */
    char *hints_cmt;			/* Comment of the hints section */
    char *colors_cmt;			/* Comment of the colors section */
    char *pixels_cmt;			/* Comment of the pixels section */
    unsigned int mask_pixel;		/* Transparent pixel's color table
					 * index */
    /* Color Allocation Directives */
    unsigned int exactColors;		/* Only use exact colors for visual */
    unsigned int closeness;		/* Allowable RGB deviation */

}      XpmAttributes;

/* Xpm attribute value masks bits */
#define XpmVisual	   (1L<<0)
#define XpmColormap	   (1L<<1)
#define XpmDepth	   (1L<<2)
#define XpmSize		   (1L<<3)	/* width & height */
#define XpmHotspot	   (1L<<4)	/* x_hotspot & y_hotspot */
#define XpmCharsPerPixel   (1L<<5)
#define XpmColorSymbols	   (1L<<6)
#define XpmRgbFilename	   (1L<<7)
#define XpmInfos	   (1L<<8)	/* all infos members */
#define XpmExtensions      (1L<<10)

#define XpmReturnPixels	   (1L<<9)
#define XpmReturnInfos	   XpmInfos
#define XpmReturnExtensions XpmExtensions

#define XpmExactColors     (1L<<11)
#define XpmCloseness	   (1L<<12)

/*
 * minimal portability layer between ansi and KR C 
 */

/* forward declaration of functions with prototypes */

#if __STDC__ || defined(__cplusplus) || defined(c_plusplus)
 /* ANSI || C++ */
#define FUNC(f, t, p) extern t f p
#define LFUNC(f, t, p) static t f p
#else					/* K&R */
#define FUNC(f, t, p) extern t f()
#define LFUNC(f, t, p) static t f()
#endif					/* end of K&R */


/*
 * functions declarations
 */

#ifdef __cplusplus
extern "C" {
#endif

    FUNC(XpmCreatePixmapFromData, int, (Display * display,
					Drawable d,
					char **data,
					Pixmap * pixmap_return,
					Pixmap * shapemask_return,
					XpmAttributes * attributes));

    FUNC(XpmCreateDataFromPixmap, int, (Display * display,
					char ***data_return,
					Pixmap pixmap,
					Pixmap shapemask,
					XpmAttributes * attributes));

    FUNC(XpmReadFileToPixmap, int, (Display * display,
				    Drawable d,
				    char *filename,
				    Pixmap * pixmap_return,
				    Pixmap * shapemask_return,
				    XpmAttributes * attributes));

    FUNC(XpmWriteFileFromPixmap, int, (Display * display,
				       char *filename,
				       Pixmap pixmap,
				       Pixmap shapemask,
				       XpmAttributes * attributes));

    FUNC(XpmCreateImageFromData, int, (Display * display,
				       char **data,
				       XImage ** image_return,
				       XImage ** shapemask_return,
				       XpmAttributes * attributes));

    FUNC(XpmCreateDataFromImage, int, (Display * display,
				       char ***data_return,
				       XImage * image,
				       XImage * shapeimage,
				       XpmAttributes * attributes));

    FUNC(XpmReadFileToImage, int, (Display * display,
				   char *filename,
				   XImage ** image_return,
				   XImage ** shapeimage_return,
				   XpmAttributes * attributes));

    FUNC(XpmWriteFileFromImage, int, (Display * display,
				      char *filename,
				      XImage * image,
				      XImage * shapeimage,
				      XpmAttributes * attributes));

    FUNC(XpmAttributesSize, int, ());
    FUNC(XpmFreeAttributes, int, (XpmAttributes * attributes));
    FUNC(XpmFreeExtensions, int, (XpmExtension * extensions, int nextensions));

#ifdef __cplusplus
}					/* for C++ V2.0 */

#endif


/* backward compatibility */

/* for version 3.0c */
#define XpmPixmapColorError  XpmColorError
#define XpmPixmapSuccess     XpmSuccess
#define XpmPixmapOpenFailed  XpmOpenFailed
#define XpmPixmapFileInvalid XpmFileInvalid
#define XpmPixmapNoMemory    XpmNoMemory
#define XpmPixmapColorFailed XpmColorFailed

#define XpmReadPixmapFile(dpy, d, file, pix, mask, att) \
    XpmReadFileToPixmap(dpy, d, file, pix, mask, att)
#define XpmWritePixmapFile(dpy, file, pix, mask, att) \
    XpmWriteFileFromPixmap(dpy, file, pix, mask, att)

/* for version 3.0b */
#define PixmapColorError  XpmColorError
#define PixmapSuccess     XpmSuccess
#define PixmapOpenFailed  XpmOpenFailed
#define PixmapFileInvalid XpmFileInvalid
#define PixmapNoMemory    XpmNoMemory
#define PixmapColorFailed XpmColorFailed

#define ColorSymbol XpmColorSymbol

#define XReadPixmapFile(dpy, d, file, pix, mask, att) \
    XpmReadFileToPixmap(dpy, d, file, pix, mask, att)
#define XWritePixmapFile(dpy, file, pix, mask, att) \
    XpmWriteFileFromPixmap(dpy, file, pix, mask, att)
#define XCreatePixmapFromData(dpy, d, data, pix, mask, att) \
    XpmCreatePixmapFromData(dpy, d, data, pix, mask, att)
#define XCreateDataFromPixmap(dpy, data, pix, mask, att) \
    XpmCreateDataFromPixmap(dpy, data, pix, mask, att)

#endif

/****************************************   end ../xpm/xpm.h   */
#else					/* HaveXpmFormat */
#include <X11/Xlib.h>
#endif					/* HaveXpmFormat */

#include <X11/Xutil.h>
#include <X11/Xos.h>
#include <X11/Xatom.h>

#ifndef VMS
#define VMS 0
#endif					/* VMS */

#endif					/* VMS */

#endif					/* XWindows */

/*
 * End of operating-system specific code.
 */

#include <ctype.h>
#include <errno.h>
#include <math.h>


/*
 *  The following symbols should be in <stdio.h>; define them if they aren't.
 */
#ifndef SEEK_SET
#define SEEK_SET 0
#endif					/* SEEK_SET */
#ifndef SEEK_CUR
#define SEEK_CUR 1
#endif					/* SEEK_CUR */
#ifndef SEEK_END
#define SEEK_END 2
#endif					/* SEEK_END */

#ifdef Graphics
#define VanquishReturn(s) return s;
#endif					/* Graphics */

/*
 * The following depends on <sys/types.h>, which is included at different
 *  points above depending on XWindows.  It's unneeded but harmless if
 *  not Unix.
 */
#ifdef FD_SET
#define FD_NULL ((fd_set *) 0)
#else                                   /* FD_SET */
#define FD_NULL ((long *) 0)
#endif                                  /* FD_SET */

#if WildCards


/****************************************  from ../h/filepat.h:  */

/*
 * Typedefs and macros for filename wildcard expansion on some systems.
 *  The definitions provided here are:
 *
 *    typedef ... FINDFILE_T;
 *    // Current state of the filename wildcard expansion
 *
 *    int FINDFIRST Params(( char *pattern, FINDFILE_T *pfd ));
 *    // Initializes *pfd and returns 1 if a file is found that matches the
 *    // pattern, 0 otherwise
 *
 *    int FINDNEXT Params(( FINDFILE_T *pfd ));
 *    // Assuming that the last FINDFIRST/FINDNEXT call was successful,
 *    // updates *pfd and returns whether another match can be made.
 *
 *    char *FILENAME Params(( FINDFILE_T *pfd ));
 *    // Assuming that the last FINDFIRST/FINDNEXT call was successful,
 *    // returns pointer to last found file name.
 *
 *    novalue FINDCLOSE Params(( FINDFILE_T *pfd ));
 *    // Does any cleanup required after doing filenaame wildcard expansion.
 *
 * Also, the macro WildCards will be defined to be 1 if there is file
 * pattern matching is supported, 0 otherwise.  If !WildCards, then a
 * default set of typedef/macros will be provided that will return only one
 * match, the original pattern.
 */


#if WildCards

#if NT

#include <io.h>

typedef struct _FINDFILE_TAG {
   long			handle;
   struct _finddata_t	fileinfo;
   } FINDDATA_T;

#define FINDFIRST(pattern, pfd)	\
   ( ( (pfd)->handle = _findfirst ( (pattern), &(pfd)->fileinfo ) ) != -1L )
#define FINDNEXT(pfd) ( _findnext ( (pfd)->handle, &(pfd)->fileinfo ) != -1 )
#define FILENAME(pfd)	( (pfd)->fileinfo.name )
#define FINDCLOSE(pfd)	_findclose( (pfd)->handle )

#endif 					/* NT */

#if BORLAND_286 || BORLAND_386

#include <dos.h>

typedef struct ffblk FINDDATA_T;

#define FINDFIRST(pattern, pfd)	( !findfirst ( (pattern), (pfd), FA_NORMAL ) )
#define FINDNEXT(pfd)	( !findnext ( (pfd) ) )
#define FILENAME(pfd)	( (pfd)->ff_name )
#define FINDCLOSE(pfd)	( (void) 0 )

#endif		        /* BORLAND_286 || BORLAND_386 */

#if MICROSOFT || SCCX_MX

#include <dos.h>

typedef struct _find_t FINDDATA_T;

#define FINDFIRST(pattern, pfd)	(!_dos_findfirst ((pattern), _A_NORMAL, (pfd)))
#define FINDNEXT(pfd)	( !_dos_findnext ( (pfd) ) )
#define FILENAME(pfd)	( (pfd)->name )
#define FINDCLOSE(pfd)	( (void) 0 )

#endif					/* MICROSOFT || SCCX_MX */

#if PORT
Deliberate Syntax Error                 /* Give it some thought */
#endif                                  /* PORT */
#endif					/* WildCards */

/****************************************   end ../h/filepat.h   */
#endif					/* WildCards */

/****************************************   end ../h/sys.h   */


/****************************************  from ../h/typedefs.h:  */

/*
 * Type for an externally findable & setable integer, used by "setsize". CS
 */
#ifdef SCCX_MX

typedef union {
    char magicText[4];
    int  value;
} setint_t;

#endif 					/* SCCX_MX */

/*
 * typdefs for the run-time system.
 */

typedef AllocType msize;
typedef int ALIGN;		/* pick most stringent type for alignment */
typedef unsigned int DIGIT;

/*
 * Default sizing and such.
 */

/*
 * Set up typedefs and related definitions depending on whether or not
 * ints and pointers are the same size.
 */

#if IntBits != WordBits
typedef long int word;
typedef unsigned long int uword;
#else					/* IntBits != WordBits */
typedef int word;
#ifdef CDC_VXVE
typedef uword;
#else					/* CDC_VXVE */
typedef unsigned int uword;
#endif					/* CDC_VXVE */
#endif					/* IntBits != WordBits */

#ifdef StandardC
#ifndef PointerDef
typedef void *pointer;
#endif					/* PointerDef */
#else					/* StandardC */
#ifndef PointerDef
typedef char *pointer;
#endif					/* PointerDef */
#endif					/* StandardC */

/*
 * Typedefs to make some things easier.
 */

typedef int (*fptr)();
typedef struct descrip *dptr;

typedef word C_integer;

/*
 * A success continuation is referenced by a pointer to an integer function
 *  that takes no arguments.
 */
typedef int (*continuation) Params((noargs));

#if !COMPILER

/*
 * Typedefs for the interpreter.
 */

/*
 * Icode consists of operators and arguments.  Operators are small integers,
 *  while arguments may be pointers.  To conserve space in icode files on
 *  computers with 16-bit ints, icode is written by the linker as a mixture
 *  of ints and words (longs).  When an icode file is read in and processed
 *  by the interpreter, it looks like a C array of mixed ints and words.
 *  Accessing this "nonstandard" structure is handled by a union of int and
 *  word pointers and incrementing is done by incrementing the appropriate
 *  member of the union (see the interpreter).  This is a rather dubious
 *  method and certainly not portable.  A better way might be to address
 *  icode with a char *, but the incrementing code might be inefficient
 *  (at a place that experiences a lot of execution activity).
 *
 * For the moment, the dubious coding is isolated under control of the
 *  size of integers.
 */

#if IntBits != WordBits

typedef union {
   int *op;
   word *opnd;
   } inst;

#else					/* IntBits != WordBits */

typedef union {
   word *op;
   word *opnd;
   } inst;

#endif					/* IntBits != WordBits */

#endif					/* COMPILER */

/****************************************   end ../h/typedefs.h   */


/****************************************  from ../h/cstructs.h:  */

/*
 * cstructs.h - structures and accompanying manifest constants for functions
 *  in the common subdirectory.
 */

/*
 * cal_time holds a calendar time.
 */
struct cal_time {
   int year;		/* yyyy */
   int month_no;	/* month number: 1-12 */
   char *month_nm;	/* month name: "January", "February", ... */
   int mday;		/* day of the month */
   char *wday;		/* "Sunday", "Monday", ... */
   int hour;		/* hour by 24 hr clock */
   int minute;
   int second;
   };

/*
 * fileparts holds a file name broken down into parts.
 */


struct fileparts {			/* struct of file name parts */
   char *dir;				/* directory */
   char *name;				/* name */
   char *ext;				/* extension */

#if VMS
   char *version;
#endif					/* VMS */

#if MVS
   char *member;
#endif					/* MVS */

   };

/*
 * xval - holds references to literal constants
 */
union xval {
   long ival;		/* integer */
   double rval;		/*  real */
   word sval;		/*  offset into string space of string */
   };


/*
 * str_buf references a string buffer. Strings are built a character
 *  at a time. When a buffer "fragment" is filled, another is allocated
 *  and the the current string copied to it.
 */
struct str_buf_frag {
   struct str_buf_frag *next;     /* next buffer fragment */
   char s[1];                     /* variable size buffer, really > 1 */
   };

struct str_buf {
   unsigned int size;             /* total size of current buffer */
   char *strtimage;               /* start of string currently being built */
   char *endimage;                /* next free character in buffer */
   char *end;                     /* end of current buffer */
   struct str_buf_frag *frag_lst; /* list of buffer fragments */
   struct str_buf *next;          /* buffers can be put on free list */
   };

#define AppChar(sbuf, c) do {\
   if ((sbuf).endimage >= (sbuf).end)\
      new_sbuf(&(sbuf));\
   *((sbuf).endimage)++ = (c); } while (0)

/*
 * implement contains information about the implementation of an operation.
 */
#define NoRsltSeq  -1L	     /* no result sequence: {} */
#define UnbndSeq   -2L       /* unbounded result sequence: {*} */

#define DoesRet    01	     /* operation (or "body" function) returns */
#define DoesFail   02	     /* operation (or "body" function) fails */
#define DoesSusp   04	     /* operation (or "body" function) suspends */
#define DoesEFail 010        /* fails through error conversion */
#define DoesFThru 020	     /* only "body" functions can "fall through" */

struct implement {
   struct implement *blink;   /* link for bucket chain in hash tables */
   char oper_typ;             /* 'K'=keyword, 'F'=function, 'O'=operator */
   char prefix[2];	      /* prefix to make start of name unique */
   char *name;		      /* function/operator/keyword name */
   char *op;		      /* operator symbol (operators only) */
   int nargs;		      /* number of arguments operation requires */
   int *arg_flgs;             /* array of arg flags: deref/underef, var len*/
   long min_result;	      /* minimum result sequence length */
   long max_result;	      /* maiximum result sequence length */
   int resume;		      /* flag - resumption after last result */
   int ret_flag;	      /* DoesRet, DoesFail, DoesSusp */
   int use_rslt;              /* flag - explicitly uses result location */
   char *comment;	      /* description of operation */
   int ntnds;		      /* size of tnds array */
   struct tend_var *tnds;     /* pointer to array of info about tended vars */
   int nvars;                 /* size of vars array */
   struct ord_var  *vars;     /* pointer to array of info about ordinary vars */
   struct il_code *in_line;    /* inline version of the operation */
   int iconc_flgs;	      /* flags for internal use by the compiler */
   };

/*
 * These codes are shared between the data base and rtt. They are defined
 *  here, though not all are used by the data base.
 */
#define TndDesc   1  /* a tended descriptor */
#define TndStr    2  /* a tended character pointer */
#define TndBlk    3  /* a tended block pointer */
#define OtherDcl  4  /* a declaration that is not special */
#define IsTypedef 5  /* a typedef */
#define VArgLen   6  /* identifier for length of variable parm list */
#define RsltLoc   7  /* the special result location of an operation */
#define Label     8  /* label */
#define RtParm   16  /* undereferenced parameter of run-time routine */
#define DrfPrm   32  /* dereferenced parameter of run-time routine */
#define VarPrm   64  /* variable part of parm list (with RtParm or DrfPrm) */
#define PrmMark 128  /* flag - used while recognizing params of body fnc */
#define ByRef   256  /* flag - parameter to body function passed by reference */

/*
 * Flags to indicate what types are returned from the function implementing
 *  a body. These are unsed in determining the calling conventions 
 *  of the function.
 */
#define RetInt   1  /* body/function returns a C_integer */
#define RetDbl   2  /* body/function returns a C_double */
#define RetOther 4  /* body (not function itself) returns something else */
#define RetNoVal 8  /* function returns no value */
#define RetSig  16  /* function returns a signal */

/*
 * tend_var contains information about a tended variable in the "declare {...}"
 *  action of an operation.
 */
struct tend_var {
   int var_type;           /* TndDesc, TndStr, or TndBlk */
   struct il_c *init;      /* initial value from declaration */
   char *blk_name;         /* TndBlk: struct name of block */
   };

/*
 * ord_var contains information about an ordinary variable in the
 *  "declare {...}" action of an operation.
 */
struct ord_var {
   char *name;        /* name of variable */
   struct il_c *dcl;  /* declaration of variable (includes name) */
   };

/*
 * il_code has information about an action in an operation.
 */
#define IL_If1     1
#define IL_If2     2
#define IL_Tcase1  3
#define IL_Tcase2  4
#define IL_Lcase   5
#define IL_Err1    6
#define IL_Err2    7
#define IL_Lst     8
#define IL_Const   9
#define IL_Bang   10
#define IL_And    11
#define IL_Cnv1   12
#define IL_Cnv2   13
#define IL_Def1   14
#define IL_Def2   15
#define IL_Is     16
#define IL_Var    17
#define IL_Subscr 18
#define IL_Block  19
#define IL_Call   20
#define IL_Abstr  21
#define IL_VarTyp 22
#define IL_Store  23
#define IL_Compnt 24
#define IL_TpAsgn 25
#define IL_Union  26
#define IL_Inter  27
#define IL_New    28
#define IL_IcnTyp 29
#define IL_Acase  30

#define CM_Fields -1

union il_fld {
   struct il_code *fld;
   struct il_c *c_cd;
   int *vect;
   char *s;
   word n;
   };

struct il_code {
   int il_type;
   union il_fld u[1];   /* actual number of fields varies with type */
   };

/*
 * The following manifest constants are used to describe types, conversions,
 *   and returned values. Non-negative numbers are reserved for types described
 *   in the type specification system.
 */
#define TypAny    -1
#define TypEmpty  -2
#define TypVar    -3
#define TypCInt   -4
#define TypCDbl   -5
#define TypCStr   -6
#define TypEInt   -7
#define TypECInt  -8
#define TypTStr   -9
#define TypTCset -10
#define RetDesc  -11
#define RetNVar  -12
#define RetSVar  -13
#define RetNone  -14

/*
 * il_c describes a piece of C code.
 */
#define ILC_Ref    1   /* nonmodifying reference to var. in sym. tab. */
#define ILC_Mod    2   /* modifying reference to var. in sym. tab */
#define ILC_Tend   3   /* tended var. local to inline block */
#define ILC_SBuf   4   /* string buffer */
#define ILC_CBuf   5   /* cset buffer */
#define ILC_Ret    6   /* return statement */
#define ILC_Susp   7   /* suspend statement */
#define ILC_Fail   8   /* fail statement */
#define ILC_Goto   9   /* goto */
#define ILC_CGto  10   /* conditional goto */
#define ILC_Lbl   11   /* label */
#define ILC_LBrc  12   /* '{' */
#define ILC_RBrc  13   /* '}' */
#define ILC_Str   14   /* arbitrary string of code */
#define ILC_EFail 15   /* errorfail statement */

#define RsltIndx -1   /* symbol table index for "result" */

struct il_c {
   int il_c_type;
   struct il_c *code[3];
   word n;
   char *s;
   struct il_c *next;
   };
   
/*
 * The parameter value of a run-time operation may be in one of several
 *  different locations depending on what conversions have been done to it.
 *  These codes are shared by rtt and iconc.
 */
#define PrmTend    1   /* in tended location */
#define PrmCStr    3   /* converted to C string: tended location */
#define PrmInt     4   /* converted to C int: non-tended location */
#define PrmDbl     8   /* converted to C double: non-tended location */

/*
 * Kind of RLT return statement supported.
 */
#define TRetNone  0   /* does not support an RTL return statement */
#define TRetBlkP  1   /* block pointer */
#define TRetDescP 2   /* descriptor pointer */
#define TRetCharP 3   /* character pointer */
#define TRetCInt  4   /* C integer */
#define TRetSpcl  5   /* RLT return statement has special form & semenatics */

/*
 * Codes for dereferencing needs.
 */
#define DrfNone  0  /* not a variable type */
#define DrfGlbl  1  /* treat as a global variable */
#define DrfCnst  2  /* type of values in variable doesn't change */
#define DrfSpcl  3  /* special dereferencing: trapped variable */

/*
 * Information about an Icon type.
 */
struct icon_type {
   char *id;          /* name of type */
   int support_new;   /* supports RTL "new" construct */
   int deref;         /* dereferencing needs */
   int rtl_ret;       /* kind of RTL return supported if any */
   char *typ;         /* for variable: initial type */
   int num_comps;     /* for aggregate: number of type components */
   int compnts;       /* for aggregate: index of first component */
   char *abrv;        /* abreviation used for type tracing */
   char *cap_id;      /* name of type with first character capitalized */
   };

/*
 * Information about a component of an aggregate type.
 */
struct typ_compnt {
    char *id;      /* name of component */
    int n;         /* position of component within type aggragate */
    int var;       /* flag: this component is an Icon-level variable */
    int aggregate; /* index of type that owns the component */
    char *abrv;    /* abreviation used for type tracing */
    };

extern int num_typs;                 /* number of types in table */
extern struct icon_type icontypes[]; /* table of icon types */

/*
 * Type inference needs to know where most of the standard types
 *  reside. Some have special uses outside operations written in
 *  RTL code, such as the null type for initializing variables, and
 *  others have special semantics, such as trapped variables.
 */
extern int str_typ;                  /* index of string type */
extern int int_typ;                  /* index of integer type */
extern int rec_typ;                  /* index of record type */
extern int proc_typ;                 /* index of procedure type */
extern int coexp_typ;                /* index of co-expression type */
extern int stv_typ;                  /* index of sub-string trapped var type */
extern int ttv_typ;                  /* index of table-elem trapped var type */
extern int null_typ;                 /* index of null type */
extern int cset_typ;                 /* index of cset type */
extern int real_typ;                 /* index of real type */
extern int list_typ;                 /* index of list type */
extern int tbl_typ;                  /* index of table type */

extern int num_cmpnts;                 /* number of aggregate components */
extern struct typ_compnt typecompnt[]; /* table of aggregate components */
extern int str_var;                    /* index of trapped string variable */
extern int trpd_tbl;                   /* index of trapped table */
extern int lst_elem;                   /* index of list element */
extern int tbl_val;                    /* index of table element value */
extern int tbl_dflt;                   /* index of table default */

/*
 * minimum number of unsigned ints needed to hold the bits of a cset - only
 *  used in translators, not in the run-time system.
 */
#define BVectSize 16

/****************************************   end ../h/cstructs.h   */


/****************************************  from ../h/cpuconf.h:  */

/*
 *  Configuration parameters that depend on computer architecture.
 *  Some depend on values defined in config.h, which is always
 *  included before this file.
 */

#ifndef CStateSize
#define CStateSize 15			/* size of C state for co-expressions */
#endif					/* CStateSize */

/*
 * The following definitions depend on the sizes of ints and pointers.
 */

/*
 * Most of the present implementations use 32-bit "words".  Note that
 *  WordBits is the number of bits in an Icon integer, not necessarily
 *  the number of bits in an int (given by IntBits).  For example,
 *  in MS-DOS an Icon integer is a long, not an int.
 *
 *  MaxStrLen must not be so large as to overlap flags.
 */

/*
 * 64-bit words.
 */

#if WordBits == 64

#ifndef MinLong
#define MinLong  ((long int)0x8000000000000000) /* smallest long integer */
#endif

#ifndef MaxLong
#define MaxLong  ((long int)0x7fffffffffffffff) /* largest long integer */
#endif

#define MaxStrLen 017777777777L /* maximum string length */

#ifndef MaxNegInt
#define MaxNegInt "-9223372036854775808"
#endif

#ifndef F_Nqual
#define F_Nqual 0x8000000000000000	/* set if NOT string qualifier */
#endif					/* F_Nqual */
#ifndef F_Var
#define F_Var	0x4000000000000000	/* set if variable */
#endif					/* F_Var */
#ifndef F_Ptr
#define F_Ptr	0x1000000000000000	/* set if value field is pointer */
#endif					/* F_Ptr */
#ifndef F_Typecode
#define F_Typecode  0x2000000000000000	/* set if dword includes type code */
#endif					/* F_Typecode */

#endif					/* WordBits == 64 */

/*
 * 32-bit words.
 */

#if WordBits == 32

#define MaxLong  ((long int)017777777777L)   /* largest long integer */
#define MinLong  ((long int)020000000000L)   /* smallest long integer */

#define MaxNegInt "-2147483648"

#define MaxStrLen	     0777777777	/* maximum string length */

#define F_Nqual 0x80000000		/* set if NOT string qualifier */
#define F_Var	0x40000000		/* set if variable */
#define F_Ptr	0x10000000		/* set if value field is pointer */
#define F_Typecode  0x20000000	/* set if dword includes type code */
#endif					/* WordBits == 32 */

/* Values that depend on the number of bits in an int (not necessarily
 * the same as the number of bits in a word).
 */

#if IntBits == 64
#define LogIntBits		    6	/* log of IntBits */
#define MaxUnsigned 01777777777777777777777L /* largest unsigned integer */
#define MaxInt	     0777777777777777777777L /* largest int */
/*
 * Cset initialization and access macros.
 */
#define fwd(w0, w1, w2, w3) \
 ((w0)&0xffff | ((unsigned)(w1)&0xffff)<<16 | ((unsigned)(w2)&0xffff)<<32 \
 | ((unsigned)(w3)&0xffff)<<48)
#define cset_display(w0,w1,w2,w3,w4,w5,w6,w7,w8,w9,wa,wb,wc,wd,we,wf) \
 {fwd(w0,w1,w2,w3),fwd(w4,w5,w6,w7),fwd(w8,w9,wa,wb),fwd(wc,wd,we,wf)}
#define Cset32(b,c) (*CsetPtr(b,c)>>(32*CsetOff((b)>>5)))  /* 32 bits of cset */
#endif					/* IntBits == 64 */

#if IntBits == 32
#define LogIntBits		    5	/* log of IntBits */
#define MaxUnsigned 	 037777777777	/* largest unsigned integer */
#define MaxInt	 	  017777777777	/* largest int */
/*
 * Cset initialization and access macros.
 */
#define twd(w0,w1)	((w0)&0xffff | ((unsigned)w1)<<16)
#define cset_display(w0,w1,w2,w3,w4,w5,w6,w7,w8,w9,wa,wb,wc,wd,we,wf) \
	{twd(w0,w1),twd(w2,w3),twd(w4,w5),twd(w6,w7), \
	 twd(w8,w9),twd(wa,wb),twd(wc,wd),twd(we,wf)}
#define Cset32(b,c) (*CsetPtr(b,c))	/* 32 bits of cset */
#endif					/* IntBits == 32 */

#if IntBits == 16
#define LogIntBits	            4	/* log of IntBits */
#define MaxUnsigned ((unsigned int)0177777)	/* largest unsigned integer */
#define MaxInt		      077777	/* largest int */

#ifndef MaxListSlots
#define MaxListSlots 8000		/* largest list-element block */
#endif					/* MaxListSlots */

/*
 * Cset initialization and access macros.
 */
#define cset_display(w0,w1,w2,w3,w4,w5,w6,w7,w8,w9,wa,wb,wc,wd,we,wf) \
	{w0,w1,w2,w3,w4,w5,w6,w7,w8,w9,wa,wb,wc,wd,we,wf}
#define Cset32(b,c) (((unsigned long)(unsigned int)(*CsetPtr((b)+16,c))<<16) | \
   ((unsigned long)(unsigned int)(*CsetPtr(b,c))))  /* 32 bits of cset */
#endif					/* IntBits == 16 */

#ifndef LogHuge
#define LogHuge 309			/* maximum base-10 exp+1 of real */
#endif					/* LogHuge */

#ifndef Big
#define Big 9007199254740992.		/* larger than 2^53 lose precision */
#endif					/* Big */

#ifndef Precision
#define Precision 10			/* digits in string from real */
#endif					/* Precision */

/*
 * Parameters that configure tables and sets:
 *
 *  HSlots	Initial number of hash buckets; must be a power of 2.
 *  LogHSlots	Log to the base 2 of HSlots.
 *
 *  HSegs	Maximum number of hash bin segments; the maximum number of
 *		hash bins is HSlots * 2 ^ (HSegs - 1).
 *
 *		If Hsegs is increased above 12, the arrays log2h[] and segsize[]
 *		in the runtime system will need modification.
 *
 *  MaxHLoad	Maximum loading factor; more hash bins are allocated when
 *		the average bin exceeds this many entries.
 *
 *  MinHLoad	Minimum loading factor; if a newly created table (e.g. via
 *		copy()) is more lightly loaded than this, bins are combined.
 *
 *  Because splitting doubles the number of hash bins, and combining halves it,
 *  MaxHLoad should be at least twice MinHLoad.
 */

#ifndef HSlots
#if IntBits == 16
#define HSlots     4
#define LogHSlots  2
#else
#define HSlots     8
#define LogHSlots  3
#endif					/* IntBits */
#endif					/* HSlots */

#if ((1 << LogHSlots) != HSlots)
Deliberate Syntax Error -- HSlots and LogHSlots are inconsistent
#endif					/* HSlots / LogHSlots consistency */

#ifndef HSegs
#if IntBits == 16
#define HSegs	  6
#else
#define HSegs	 10
#endif					/* IntBits */
#endif					/* HSegs */

#ifndef MinHLoad
#define MinHLoad  1
#endif					/* MinHLoad */

#ifndef MaxHLoad
#define MaxHLoad  5
#endif					/* MaxHLoad */

/*
 * The number of bits in each base-B digit; the type DIGIT (unsigned int)
 *  in rt.h must be large enough to hold this many bits.
 *  It must be at least 2 and at most WordBits / 2.
 */

#define NB           (WordBits / 2)

/*
 * The number of decimal digits at which the image lf a large integer
 * goes from exact to approximate (to avoid possible long delays in
 * conversion from large integer to string because of its quadratic
 * complexity).
 */

#define MaxDigits	30

/*
 * Memory sizing. 
 */

#ifndef AlcMax
#define AlcMax 25
#endif					/* AlcMax */

/*
 * Maximum sized block that can be allocated (via malloc() or such).
 */

#ifndef MaxBlock
#if IntBits == 16
#define MaxBlock 65000			/* leaves room for malloc header */
#else					/* IntBits == 16 */
#define MaxBlock MaxUnsigned
#endif					/* IntBits == 16 */
#endif					/* MaxBlock */

/*
 * What follows is default memory sizing. Implementations with special
 *  requirements may specify these values in define.h.
 */

#ifndef MaxStrSpace
#if IntBits == 16
#define MaxStrSpace	        65000	/* size of the string space in bytes */
#else					/* IntBits == 16 */
#define MaxStrSpace	       500000	/* size of the string space in bytes */
#endif					/* IntBits == 16 */
#endif					/* MaxStrSpace */

#ifndef MaxAbrSize
#if IntBits == 16
#define MaxAbrSize	        65000	/* size of the block region in bytes */
#else					/* IntBits == 16 */
#define MaxAbrSize	       500000	/* size of the block region in bytes */
#endif					/* IntBits == 16 */
#endif					/* MaxAbrSize */

#ifndef MStackSize
#ifdef MultiThread
#define MStackSize		20000	/* size of the main stack in words */
#else					/* MultiThread */
#define MStackSize		10000	/* size of the main stack in words */
#endif					/* MultiThread */
#endif					/* MStackSize */

#ifndef StackSize
#define StackSize	 	 2000	/* words in co-expression stack */
#endif					/* StackSize */

#ifndef QualLstSize
#define QualLstSize		 5000	/* size of qualifier pointer region */
#endif					/* QualLstSize */

#ifndef ActStkBlkEnts
#ifdef Coexpr
#define ActStkBlkEnts		   25	/* number of entries in an astkblk */
#else					/* Coexpr */
#define ActStkBlkEnts		    1	/* number of entries in an astkblk */
#endif					/* Coexpr */
#endif					/* ActStkBlkEnts */

#ifndef RegionCushion
#define RegionCushion              10	/* % memory cushion to avoid thrashing*/
#endif					/* RegionCushion */

#ifndef RegionGrowth
#define RegionGrowth		  200	/* % region growth when full */
#endif					/* RegionGrowth */

/*
 * Minimum regions sizes (presently not used).
 */

#ifndef MinStatSize
#ifdef Coexpr
#define MinStatSize		10240	/* size of the static region in bytes*/
#else					/* Coexpr */
#define MinStatSize		 1024	/* size of static region in bytes */
#endif					/* Coexpr */
#endif					/* MinStatSize */

#ifndef MinStrSpace
#define MinStrSpace		 5000	/* size of the string space in bytes */
#endif					/* MinStrSpace */

#ifndef MinAbrSize
#define MinAbrSize		 5000	/* size of the block region in bytes */
#endif					/* MinAbrSize */

#ifndef MinMStackSize
#define MinMStackSize		 2000	/* size of the main stack in words */
#endif					/* MinMStackSize */

#ifndef MinStackSize
#define MinStackSize		 1000	/* words in co-expression stack */
#endif					/* MinStackSize */

#ifndef MinQualLstSize
#define MinQualLstSize		  500	/* size of qualifier pointer region */
#endif					/* MinQualLstSize */

#ifndef GranSize
#define GranSize	     	   64	/* storage allocation granule size */
#endif					/* GranSize */

#ifndef Sqlinc
#define Sqlinc	    128*sizeof(dptr *) 	/* qualifier pointer list increment */
#endif					/* Sqlinc */

/****************************************   end ../h/cpuconf.h   */


/****************************************  from ../h/monitor.h:  */

/*
 * This file contains definitions for the various event codes and values
 * that go to make up event streams.
 */

/*
 * Note: the blank character should *not* be used as an event code.
 */

#ifdef EventMon

/*
 * Allocation events use lowercase codes.
 */
#define E_Lrgint	'\114'		/* Large integer allocation */
#define E_Real		'\144'		/* Real allocation */
#define E_Cset		'\145'		/* Cset allocation */
#define E_File		'\147'		/* File allocation */
#define E_Record	'\150'		/* Record allocation */
#define E_Tvsubs	'\151'		/* Substring tv allocation */
#define E_External	'\152'		/* External allocation */
#define E_List		'\153'		/* List allocation */
#define E_Lelem		'\155'		/* List element allocation */
#define E_Table		'\156'		/* Table allocation */
#define E_Telem		'\157'		/* Table element allocation */
#define E_Tvtbl		'\160'		/* Table-element tv allocation */
#define E_Set		'\161'		/* Set allocation */
#define E_Selem		'\164'		/* Set element allocation */
#define E_Slots		'\167'		/* Hash header allocation */
#define E_Coexpr	'\170'		/* Co-expression allocation */
#define E_Refresh	'\171'		/* Refresh allocation */
#define E_Alien		'\172'		/* Alien allocation */
#define E_Free		'\132'		/* Free region */
#define E_String	'\163'		/* String allocation */

/*
 * Some other monitoring codes.
 */
#define	E_BlkDeAlc	'\055'		/* Block deallocation */
#define	E_StrDeAlc	'\176'		/* String deallocation */

/*
 * These are not "events"; they are provided for uniformity in tools
 *  that deal with types.
 */
#define E_Integer	'\100'		/* Integer value pseudo-event */
#define E_Null		'\044'		/* Null value pseudo-event */
#define E_Proc		'\045'		/* Procedure value pseudo-event */
#define E_Kywdint	'\136'		/* Integer keyword value pseudo-event */
#define E_Kywdpos	'\046'		/* Position value pseudo-event */
#define E_Kywdsubj	'\052'		/* Subject value pseudo-event */

/*
 * Codes for main sequence events
 */

   /*
    * Timing events
    */
#define E_Tick		'\056'		/* Clock tick */


   /*
    * Code-location event
    */
#define E_Loc		'\174'		/* Location change */
#define E_Line		'\355'		/* Line change */

   /*
    * Virtual-machine instructions
    */
#define E_Opcode	'\117'		/* Virtual-machine instruction */

   /*
    * Type-conversion events
    */
#define E_Aconv		'\111'		/* Conversion attempt */
#define E_Tconv		'\113'		/* Conversion target */
#define E_Nconv		'\116'		/* Conversion not needed */
#define E_Sconv		'\121'		/* Conversion success */
#define E_Fconv		'\112'		/* Conversion failure */

   /*
    * Structure events
    */
#define	E_Lbang		'\301'		/* List generation */
#define	E_Lcreate	'\302'		/* List creation */
#define	E_Lget		'\356'		/* List get/pop -- only E_Lget used */
#define	E_Lpop		'\356'		/* List get/pop */
#define	E_Lpull		'\304'		/* List pull */
#define	E_Lpush		'\305'		/* List push */
#define	E_Lput		'\306'		/* List put */
#define	E_Lrand		'\307'		/* List random reference */
#define	E_Lref		'\310'		/* List reference */
#define E_Lsub		'\311'		/* List subscript */
#define	E_Rbang		'\312'		/* Record generation */
#define	E_Rcreate	'\313'		/* Record creation */
#define	E_Rrand		'\314'		/* Record random reference */
#define	E_Rref		'\315'		/* Record reference */
#define E_Rsub		'\316'		/* Record subscript */
#define	E_Sbang		'\317'		/* Set generation */
#define	E_Screate	'\320'		/* Set creation */
#define	E_Sdelete	'\321'		/* Set deletion */
#define	E_Sinsert	'\322'		/* Set insertion */
#define	E_Smember	'\323'		/* Set membership */
#define	E_Srand		'\336'		/* Set random reference */
#define	E_Sval		'\324'		/* Set value */
#define	E_Tbang		'\325'		/* Table generation */
#define	E_Tcreate	'\326'		/* Table creation */
#define	E_Tdelete	'\327'		/* Table deletion */
#define	E_Tinsert	'\330'		/* Table insertion */
#define	E_Tkey		'\331'		/* Table key generation */
#define	E_Tmember	'\332'		/* Table membership */
#define	E_Trand		'\337'		/* Table random reference */
#define	E_Tref		'\333'		/* Table reference */
#define	E_Tsub		'\334'		/* Table subscript */
#define	E_Tval		'\335'		/* Table value */

   /*
    * Scanning events
    */

#define E_Snew		'\340'		/* Scanning environment creation */
#define E_Sfail		'\341'		/* Scanning failure */
#define E_Ssusp		'\342'		/* Scanning suspension */
#define E_Sresum	'\343'		/* Scanning resumption */
#define E_Srem		'\344'		/* Scanning environment removal */
#define E_Spos		'\346'		/* Scanning position */

   /*
    * Assignment
    */

#define E_Assign	'\347'		/* Assignment */
#define	E_Value		'\350'		/* Value assigned */


   /*
    * Sub-string assignment
    */

#define E_Ssasgn	'\354'		/* Sub-string assignment */
   /*
    * Interpreter stack events
    */

#define E_Intcall	'\351'		/* interpreter call */
#define E_Intret	'\352'		/* interpreter return */
#define E_Stack		'\353'		/* stack depth */

   /*
    * Expression events
    */
#define E_Ecall		'\143'		/* Call of operation */
#define E_Efail		'\146'		/* Failure from expression */
#define E_Bsusp		'\142'		/* Suspension from operation */
#define E_Esusp		'\141'		/* Suspension from alternation */
#define E_Lsusp		'\154'		/* Suspension from limitation */
#define E_Eresum	'\165'		/* Resumption of expression */
#define E_Erem		'\166'		/* Removal of a suspended generator */

   /*
    * Co-expression events
    */

#define E_Coact		'\101'		/* Co-expression activation */
#define E_Coret		'\102'		/* Co-expression return */
#define E_Cofail	'\104'		/* Co-expression failure */

   /*
    * Procedure events
    */

#define E_Pcall		'\103'		/* Procedure call */
#define E_Pfail		'\106'		/* Procedure failure */
#define E_Pret		'\122'		/* Procedure return */
#define E_Psusp		'\123'		/* Procedure suspension */
#define E_Presum	'\125'		/* Procedure resumption */
#define E_Prem		'\126'		/* Suspended procedure removal */

#define E_Fcall		'\072'		/* Function call */
#define E_Ffail		'\115'		/* Function failure */
#define E_Fret		'\120'		/* Function return */
#define E_Fsusp		'\127'		/* Function suspension */
#define E_Fresum	'\131'		/* Function resumption */
#define E_Frem		'\133'		/* Function suspension removal */

#define E_Ocall		'\134'		/* Operator call */
#define E_Ofail		'\135'		/* Operator failure */
#define E_Oret		'\140'		/* Operator return */
#define E_Osusp		'\173'		/* Operator suspension */
#define E_Oresum	'\175'		/* Operator resumption */
#define E_Orem		'\177'		/* Operator suspension removal */

   /*
    * Garbage collections
    */

#define E_Collect	'\107'		/* Garbage collection */
#define E_EndCollect	'\360'		/* End of garbage collection */
#define E_TenureString	'\361'		/* Tenure a string region */
#define E_TenureBlock	'\362'		/* Tenure a block region */

/*
 * Termination Events
 */
#define E_Error		'\105'		/* Run-time error */
#define E_Exit		'\130'		/* Program exit */

   /*
    * I/O events
    */
#define E_MXevent	'\370'		/* monitor input event */

#endif					/* EventMon */

/****************************************   end ../h/monitor.h   */


/****************************************  from ../h/rmacros.h:  */

/*
 *  Definitions for macros and manifest constants used in the compiler
 *  interpreter.
 */

/*
 *  Definitions common to the compiler and interpreter.
 */

/*
 * Constants that are not likely to vary between implementations.
 */

#define BitOffMask (IntBits-1)
#define CsetSize (256/IntBits)	/* number of ints to hold 256 cset
				 *  bits. Use (256/IntBits)+1 if
				 *  256 % IntBits != 0 */
#define MinListSlots	    8	/* number of elements in an expansion
				 * list element block  */

#define MaxCvtLen	   257	/* largest string in conversions; the extra
				 *  one is for a terminating null */
#define MaxReadStr	   512	/* largest string to read() in one piece */
#define MaxIn		  32767	/* largest number of bytes to read() at once */
#define RandA        1103515245	/* random seed multiplier */
#define RandC	      453816694	/* random seed additive constant */
#define RanScale 4.65661286e-10	/* random scale factor = 1/(2^31-1) */

#define Pi 3.14159265358979323846264338327950288419716939937511

/*
 * File status flags in status field of file blocks.
 */
#define Fs_Read		 01	/* read access */
#define Fs_Write	 02	/* write access */
#define Fs_Create	 04	/* file created on open */
#define Fs_Append	010	/* append mode */
#define Fs_Pipe		020	/* reading/writing on a pipe */
#define Fs_Untrans    01000	/* untranslated mode file */

#ifdef RecordIO
#define Fs_Record       040     /* record structured file */
#endif					/* RecordIO */

#ifdef StandardLib
#define Fs_Reading     0100     /* last file operation was read */
#define Fs_Writing     0200     /* last file operation was write */
#endif					/* StandardLib */

#ifdef Graphics
#define Fs_Window      0400	/* reading/writing on a window */

#define XKey_Window 0
#define XKey_Fg 1

#ifndef SHORT
#define SHORT int
#endif					/* SHORT */
#ifndef LONG
#define LONG int
#endif					/* LONG */

/*
 * Perform a "C" return, not processed by RTT
 */
#define VanquishReturn(s) return s;
#endif					/* Graphics */

/*
 * Codes returned by runtime support routines.
 *  Note, some conversion routines also return type codes. Other routines may
 *  return positive values other than return codes. sort() places restrictions
 *  on Less, Equal, and Greater.
 */

#define Less		-1
#define Equal		0
#define Greater		1
#define CvtFail		-2
#define Cvt		-3
#define NoCvt		-4
#define Failed		-5
#define Defaulted	-6
#define Succeeded		-7
#define Error		-8

#define GlobalName	0
#define StaticName	1
#define ParamName	2
#define LocalName	3

#undef ToAscii
#undef FromAscii
#if EBCDIC == 2
#define ToAscii(e) (FromEBCDIC[e])
#define FromAscii(e) (ToEBCDIC[e])
#else					/* EBCDIC == 2 */
#define ToAscii(e) (e)
#define FromAscii(e) (e)
#endif					/* EBCDIC == 2 */

/*
 * Pointer to block.
 */
#define BlkLoc(d)	((d).vword.bptr)

/*
 * Check for null-valued descriptor.
 */
#define ChkNull(d)	((d).dword==D_Null)

/*
 * Check for equivalent descriptors.
 */
#define EqlDesc(d1,d2)	((d1).dword == (d2).dword && BlkLoc(d1) == BlkLoc(d2))

/*
 * Integer value.
 */
#define IntVal(d)	((d).vword.integr)

/*
 * Offset from top of block to value of variable.
 */
#define Offset(d)	((d).dword & OffsetMask)

/*
 * Check for pointer.
 */
#define Pointer(d)	((d).dword & F_Ptr)

/*
 * Check for qualifier.
 */
#define Qual(d)		(!((d).dword & F_Nqual))

/*
 * Length of string.
 */
#define StrLen(q)	((q).dword)

/*
 * Location of first character of string.
 */
#define StrLoc(q)	((q).vword.sptr)

/*
 * Assign a C string to a descriptor. Assume it is reasonable to use the
 *   descriptor expression more than once, but not the string expression.
 */
#define AsgnCStr(d,s) (StrLoc(d) = (s), StrLen(d) = strlen(StrLoc(d)))

/*
 * Type of descriptor.
 */
#define Type(d)		(int)((d).dword & TypeMask)

/*
 * Check for variable.
 */
#define Var(d)		((d).dword & F_Var)

/*
 * Location of the value of a variable.
 */
#define VarLoc(d)	((d).vword.descptr)

/*
 *  Important note:  The code that follows is not strictly legal C.
 *   It tests to see if pointer p2 is between p1 and p3. This may
 *   involve the comparison of pointers in different arrays, which
 *   is not well-defined.  The casts of these pointers to unsigned "words"
 *   (longs or ints, depending) works with all C compilers and architectures
 *   on which Icon has been implemented.  However, it is possible it will
 *   not work on some system.  If it doesn't, there may be a "false
 *   positive" test, which is likely to cause a memory violation or a
 *   loop. It is not practical to implement Icon on a system on which this
 *   happens.
 */

#define InRange(p1,p2,p3) ((uword)(p2) >= (uword)(p1) && (uword)(p2) < (uword)(p3))

/*
 * Get floating-point number from real block.
 */
#ifdef Double
#define GetReal(dp,res) *((struct size_dbl *)&(res)) =\
      *((struct size_dbl *)&(BlkLoc(*dp)->realblk.realval))
#else					/* Double */
#define GetReal(dp,res)	res = BlkLoc(*dp)->realblk.realval
#endif					/* Double */

/*
 * Absolute value of x (word).
 */
#if (MVS || VM) && SASC
#define Abs(x) __builtin_abs(x)
#else					/* SASC */
#define Abs(x) (((x) < 0) ? (-(x)) : (x))
#endif					/* SASC */

/*
 * Maximum of x and y.
 */
#define Max(x,y)        ((x)>(y)?(x):(y))
#if (MVS || VM) && SASC
#undef Max
#define Max(x,y)     __builtin_max(x,y)
#endif					/* SASC */

/*
 * Minimum of x and y.
 */
#define Min(x,y)        ((x)<(y)?(x):(y))
#if (MVS || VM) && SASC
#undef Min
#define Min(x,y)     __builtin_min(x,y)
#endif					/* SASC */

/*
 * Number of elements of a C array, and element size.
 */
#define ElemCount(a) (sizeof(a)/sizeof(a[0]))
#define ElemSize(a) (sizeof(a[0]))

/*
 * Some C compilers take '\n' and '\r' to be the same, so the
 *  following definitions are used.
 */
#if EBCDIC
/*
 * Note that, in EBCDIC, "line feed" and "new line" are distinct
 *  characters.  Icon's use of "line feed" is really "new line" in
 *  C terms.
 */
#define LineFeed '\n' /* if really "line feed", that's 37 */
#define CarriageReturn '\r'
#else					/* EBCDIC */
#define LineFeed  10
#define CarriageReturn 13
#endif					/* EBCDIC */

/*
 * Construct an integer descriptor.
 */
#define MakeInt(i,dp)		do { \
                 	 (dp)->dword = D_Integer; \
                         IntVal(*dp) = (word)(i); \
			 } while (0)

/*
 * Construct a string descriptor.
 */
#define MakeStr(s,len,dp)      do { \
                 	 StrLoc(*dp) = (s); \
                         StrLen(*dp) = (len); \
			 } while (0)

/*
 * Offset in word of cset bit.
 */
#define CsetOff(b)	((b) & BitOffMask)
/*
 * Set bit b in cset c.
 */
#define Setb(b,c)	(*CsetPtr(b,c) |= (01 << CsetOff(b)))
/*
 * Test bit b in cset c.
 */
#define Testb(b,c)	((*CsetPtr(b,c) >> CsetOff(b)) & 01)
/*
 * Check whether a set or table needs resizing.
 */
#define SP(p) ((struct b_set *)p)
#define TooCrowded(p) \
   ((SP(p)->size > MaxHLoad*(SP(p)->mask+1)) && (SP(p)->hdir[HSegs-1] == NULL))
#define TooSparse(p) \
   ((SP(p)->hdir[1] != NULL) && (SP(p)->size < MinHLoad*(SP(p)->mask+1)))
/*
 * Definitions and declarations used for storage management.
 */

#define F_Mark		0100000 	/* bit for marking blocks */

/*
 * Argument values for the built-in Icon user function "collect()".
 */
#define Static  1			/* collection is for static region */
#define Strings	2			/* collection is for strings */
#define Blocks	3			/* collection is for blocks */

/*
 * Get type of block pointed at by x.
 */
#define BlkType(x)   (*(word *)x)

/*
 * BlkSize(x) takes the block pointed to by x and if the size of
 *  the block as indicated by bsizes[] is nonzero it returns the
 *  indicated size; otherwise it returns the second word in the
 *  block contains the size.
 */
#define BlkSize(x) (bsizes[*(word *)x & ~F_Mark] ? \
		     bsizes[*(word *)x & ~F_Mark] : *((word *)x + 1))

/*
 * Here are the events we support (in addition to keyboard characters)
 */
#define MOUSELEFT	(-1)
#define MOUSEMID	(-2)
#define MOUSERIGHT	(-3)
#define MOUSELEFTUP	(-4)
#define MOUSEMIDUP	(-5)
#define MOUSERIGHTUP	(-6)
#define MOUSELEFTDRAG	(-7)
#define MOUSEMIDDRAG	(-8)
#define MOUSERIGHTDRAG	(-9)
#define RESIZED		(-10)
#define LASTEVENTCODE	RESIZED

/*
 * Type codes (descriptors and blocks).
 */
#define T_String	-1	/* string -- for reference; not used */
#define T_Null		 0	/* null value */
#define T_Integer	 1	/* integer */

#ifdef LargeInts
#define T_Lrgint	 2	/* long integer */
#endif					/* LargeInts */

#define T_Real		 3	/* real number */
#define T_Cset		 4	/* cset */
#define T_File		 5	/* file */
#define T_Proc		 6	/* procedure */
#define T_Record	 7	/* record */
#define T_List		 8	/* list header */
#define T_Lelem		 9	/* list element */
#define T_Set		10	/* set header */
#define T_Selem		11	/* set element */
#define T_Table		12	/* table header */
#define T_Telem		13	/* table element */
#define T_Tvtbl		14	/* table element trapped variable */
#define T_Slots		15	/* set/table hash slots */
#define T_Tvsubs	16	/* substring trapped variable */
#define T_Refresh	17	/* refresh block */
#define T_Coexpr	18	/* co-expression */
#define T_External	19	/* external block */
#define T_Kywdint	20	/* integer keyword */
#define T_Kywdpos	21	/* keyword &pos */
#define T_Kywdsubj	22	/* keyword &subject */
#define T_Kywdwin	23	/* keyword &window */
#define T_Kywdstr	24	/* string keyword */
#define T_Kywdevent	25	/* keyword &eventsource, etc. */

#define MaxType		26	/* maximum type number */

/*
 * Definitions for keywords.
 */

#define k_pos kywd_pos.vword.integr	/* value of &pos */
#define k_random kywd_ran.vword.integr	/* value of &random */
#define k_trace kywd_trc.vword.integr	/* value of &trace */
#define k_dump kywd_dmp.vword.integr	/* value of &dump */

#ifdef FncTrace
#define k_ftrace kywd_ftrc.vword.integr	/* value of &ftrace */
#endif					/* FncTrace */

/*
 * Descriptor types and flags.
 */

#define D_Null		(T_Null     | D_Typecode)
#define D_Integer	(T_Integer  | D_Typecode)

#ifdef LargeInts
#define D_Lrgint	(T_Lrgint | D_Typecode | F_Ptr)
#endif					/* LargeInts */

#define D_Real		(T_Real     | D_Typecode | F_Ptr)
#define D_Cset		(T_Cset     | D_Typecode | F_Ptr)
#define D_File		(T_File     | D_Typecode | F_Ptr)
#define D_Proc		(T_Proc     | D_Typecode | F_Ptr)
#define D_List		(T_List     | D_Typecode | F_Ptr)
#define D_Lelem		(T_Lelem    | D_Typecode | F_Ptr)
#define D_Table		(T_Table    | D_Typecode | F_Ptr)
#define D_Telem		(T_Telem    | D_Typecode | F_Ptr)
#define D_Set		(T_Set      | D_Typecode | F_Ptr)
#define D_Selem		(T_Selem    | D_Typecode | F_Ptr)
#define D_Record	(T_Record   | D_Typecode | F_Ptr)
#define D_Tvsubs	(T_Tvsubs   | D_Typecode | F_Ptr | F_Var)
#define D_Tvtbl		(T_Tvtbl    | D_Typecode | F_Ptr | F_Var)
#define D_Kywdint	(T_Kywdint  | D_Typecode | F_Ptr | F_Var)
#define D_Kywdpos	(T_Kywdpos  | D_Typecode | F_Ptr | F_Var)
#define D_Kywdsubj	(T_Kywdsubj | D_Typecode | F_Ptr | F_Var)
#define D_Refresh	(T_Refresh  | D_Typecode | F_Ptr)
#define D_Coexpr	(T_Coexpr   | D_Typecode | F_Ptr)
#define D_External	(T_External | D_Typecode | F_Ptr)
#define D_Slots		(T_Slots    | D_Typecode | F_Ptr)
#define D_Kywdwin	(T_Kywdwin  | D_Typecode | F_Ptr | F_Var)
#define D_Kywdstr	(T_Kywdstr  | D_Typecode | F_Ptr | F_Var)
#define D_Kywdevent	(T_Kywdevent| D_Typecode | F_Ptr | F_Var)

#define D_Var		(F_Var | F_Nqual | F_Ptr)
#define D_Typecode	(F_Nqual | F_Typecode)

#define TypeMask	63	/* type mask */
#define OffsetMask	(~(D_Var)) /* offset mask for variables */

/*
 * "In place" dereferencing.
 */
#define Deref(d) if (Var(d)) deref(&d, &d)

/*
 * Construct a substring trapped variable.
 */
#define SubStr(dest,var,len,pos)\
   if ((var)->dword == D_Tvsubs)\
      (dest)->vword.bptr = (union block *)alcsubs(len, (pos) +\
         BlkLoc(*(var))->tvsubs.sspos - 1, &BlkLoc(*(var))->tvsubs.ssvar);\
   else\
      (dest)->vword.bptr = (union block *)alcsubs(len, pos, (var));\
   (dest)->dword = D_Tvsubs;

/*
 * Find debug struct in procedure frame, assuming debugging is enabled.
 *  Note that there is always one descriptor in array even if it is not
 *  being used.
 */
#define PFDebug(pf) ((struct debug *)((char *)(pf).tend.d +\
    sizeof(struct descrip) * ((pf).tend.num ? (pf).tend.num : 1)))

/*
 * Macro for initialized procedure block.
 */
#define B_IProc(n) struct {word title; word blksize; int (*ccode)();\
   word nparam; word ndynam; word nstatic; word fstatic;\
   struct sdescrip quals[n];}

#define ssize    (curstring->size)
#define strbase  (curstring->base)
#define strend   (curstring->end)
#define strfree  (curstring->free)

#define abrsize  (curblock->size)
#define blkbase  (curblock->base)
#define blkend   (curblock->end)
#define blkfree  (curblock->free)

#if COMPILER

#ifdef Graphics
#define Poll() if (!pollctr--) pollctr = pollevent()
#else					/* Graphics */
#define Poll()
#endif					/* Graphics */

#else					/* COMPILER */

/*
 * Definitions for the interpreter.
 */


/*
 * Codes returned by invoke to indicate action.
 */
#define I_Builtin	201	/* A built-in routine is to be invoked */
#define I_Fail		202	/* goal-directed evaluation failed */
#define I_Continue	203	/* Continue execution in the interp loop */
#define I_Vararg	204	/* A function with a variable number of args */

/*
 * Generator types.
 */
#define G_Csusp		1
#define G_Esusp		2
#define G_Psusp		3
#define G_Fsusp		4
#define G_Osusp		5


/*
 * Evaluation stack overflow margin
 */

#define PerilDelta 100

/*
 * Macro definitions related to descriptors.
 */

/*
 * The following code is operating-system dependent [@rt.01].  Define
 *  PushAval for computers that store longs and pointers differently.
 */

#if PORT
#define PushAVal(x) PushVal(x)
Deliberate Syntax Error
#endif					/* PORT */

#if AMIGA || ARM || ATARI_ST || MACINTOSH || MVS || UNIX || VM || VMS
#define PushAVal(x) PushVal(x)
#endif					/* AMIGA || ARM || ATARI_ST ... */

#if MSDOS || OS2
#if HIGHC_386 || ZTC_386 || INTEL_386 || WATCOM || BORLAND_386 || SCCX_MX
#define PushAVal(x) PushVal(x)
#else					/* HIGHC_386 || ZTC_386 || ... */
static union {
       pointer stkadr;
       word stkint;
   } stkword;

#define PushAVal(x)  {sp++; \
			stkword.stkadr = (char *)(x); \
			*sp = stkword.stkint;}
#endif					/* HIGHC_386 || ZTC_386 || ... */
#endif					/* MSDOS || OS2 */

/*
 * End of operating-system specific code.
 */

/*
 * Macros for pushing values on the interpreter stack.
 */

/*
 * Push descriptor.
 */
#define PushDesc(d)	{*++sp = ((d).dword); sp++;*sp =((d).vword.integr);}

/*
 * Push null-valued descriptor.
 */
#define PushNull	{*++sp = D_Null; sp++; *sp = 0;}

/*
 * Push word.
 */
#define PushVal(v)	{*++sp = (word)(v);}

/*
 * Macros related to function and operator definition.
 */

/*
 * Procedure block for a function.
 */


#if VMS
#define FncBlock(f,nargs,deref) \
	struct b_iproc Cat(B,f) = {\
	T_Proc,\
	Vsizeof(struct b_proc),\
	Cat(Y,f),\
	nargs,\
	-1,\
	deref, 0,\
	{sizeof(Lit(f))-1,Lit(f)}};
#else					/* VMS */
#define FncBlock(f,nargs,deref) \
	struct b_iproc Cat(B,f) = {\
	T_Proc,\
	Vsizeof(struct b_proc),\
	Cat(Z,f),\
	nargs,\
	-1,\
	deref, 0,\
	{sizeof(Lit(f))-1,Lit(f)}};
#endif					/* VMS */

/*
 * Procedure block for an operator.
 */
#define OpBlock(f,nargs,sname,xtrargs)\
	struct b_iproc Cat(B,f) = {\
	T_Proc,\
	Vsizeof(struct b_proc),\
	Cat(O,f),\
	nargs,\
	-1,\
	xtrargs,\
	0,\
	{sizeof(sname)-1,sname}};

/*
 * Operator declaration.
 */
#define OpDcl(nm,n,pn) OpBlock(nm,n,pn,0) Cat(O,nm)(cargp) register dptr cargp;

/*
 * Operator declaration with extra working argument.
 */
#define OpDclE(nm,n,pn) OpBlock(nm,-n,pn,0) Cat(O,nm)(cargp) register dptr cargp;

/*
 * Agent routine declaration.
 */
#define AgtDcl(nm) Cat(A,nm)(cargp) register dptr cargp;

/*
 * Macros to access Icon arguments in C functions.
 */

/*
 * n-th argument.
 */
#define Arg(n)	 	(cargp[n])

/*
 * Type field of n-th argument.
 */
#define ArgType(n)	(cargp[n].dword)

/*
 * Value field of n-th argument.
 */
#define ArgVal(n)	(cargp[n].vword.integr)

/*
 * Specific arguments.
 */
#define Arg0	(cargp[0])
#define Arg1	(cargp[1])
#define Arg2	(cargp[2])
#define Arg3	(cargp[3])
#define Arg4	(cargp[4])
#define Arg5	(cargp[5])
#define Arg6	(cargp[6])
#define Arg7	(cargp[7])
#define Arg8	(cargp[8])

/* Suspend has been eliminated.  I dare not axe the Xver. */

/* Forward is no more. This is an Xfer placeholder */

/*
 * Miscellaneous macro definitions.
 */

#ifdef MultiThread
#define glbl_argp (curpstate->Glbl_argp)
#define kywd_err  (curpstate->Kywd_err)
#define kywd_pos  (curpstate->Kywd_pos)
#define kywd_prog  (curpstate->Kywd_prog)
#define kywd_ran  (curpstate->Kywd_ran)
#define k_eventcode (curpstate->eventcode)
#define k_eventsource (curpstate->eventsource)
#define k_eventvalue (curpstate->eventval)
#define k_subject (curpstate->ksub)
#define kywd_trc  (curpstate->Kywd_trc)
#define mainhead (curpstate->Mainhead)
#define code (curpstate->Code)
#define ecode (curpstate->Ecode)
#define records (curpstate->Records)
#define ftabp (curpstate->Ftabp)
#ifdef FieldTableCompression
#define ftabwidth (curpstate->Ftabwidth)
#define foffwidth (curpstate->Foffwidth)
#define ftabcp (curpstate->Ftabcp)
#define ftabsp (curpstate->Ftabsp)
#define focp (curpstate->Focp)
#define fosp (curpstate->Fosp)
#define fo (curpstate->Fo)
#define bm (curpstate->Bm)
#endif					/* FieldTableCompression */
#define fnames (curpstate->Fnames)
#define efnames (curpstate->Efnames)
#define globals (curpstate->Globals)
#define eglobals (curpstate->Eglobals)
#define gnames (curpstate->Gnames)
#define egnames (curpstate->Egnames)
#define statics (curpstate->Statics)
#define estatics (curpstate->Estatics)
#define n_globals (curpstate->NGlobals)
#define n_statics (curpstate->NStatics)
#define strcons (curpstate->Strcons)
#define filenms (curpstate->Filenms)
#define efilenms (curpstate->Efilenms)
#define ilines (curpstate->Ilines)
#define elines (curpstate->Elines)
#define current_line_ptr (curpstate->Current_line_ptr)

#ifdef Graphics
#define amperX   (curpstate->AmperX)
#define amperY   (curpstate->AmperY)
#define amperRow (curpstate->AmperRow)
#define amperCol (curpstate->AmperCol)
#define amperInterval (curpstate->AmperInterval)
#define lastEventWin (curpstate->LastEventWin)
#define lastEvFWidth (curpstate->LastEvFWidth)
#define lastEvLeading (curpstate->LastEvLeading)
#define lastEvAscent (curpstate->LastEvAscent)
#define kywd_xwin (curpstate->Kywd_xwin)
#define xmod_control (curpstate->Xmod_Control)
#define xmod_shift (curpstate->Xmod_Shift)
#define xmod_meta (curpstate->Xmod_Meta)
#endif					/* Graphics */

#ifdef EventMon
#define linenum  (curpstate->Linenum)
#define column   (curpstate->Column)
#define lastline (curpstate->Lastline)
#define lastcol  (curpstate->Lastcol)
#endif					/* EventMon */

#define coexp_ser (curpstate->Coexp_ser)
#define list_ser  (curpstate->List_ser)
#define set_ser   (curpstate->Set_ser)
#define table_ser (curpstate->Table_ser)

#define curstring (curpstate->stringregion)
#define curblock  (curpstate->blockregion)
#define strtotal  (curpstate->stringtotal)
#define blktotal  (curpstate->blocktotal)

#define coll_tot  (curpstate->colltot)
#define coll_stat (curpstate->collstat)
#define coll_str  (curpstate->collstr)
#define coll_blk  (curpstate->collblk)

#define lastop    (curpstate->Lastop)
#define lastopnd  (curpstate->Lastopnd)

#define xargp     (curpstate->Xargp)
#define xnargs    (curpstate->Xnargs)

#define k_current     (curpstate->K_current)
#define k_errornumber (curpstate->K_errornumber)
#define k_errortext   (curpstate->K_errortext)
#define k_errorvalue  (curpstate->K_errorvalue)
#define have_errval   (curpstate->Have_errval)
#define t_errornumber (curpstate->T_errornumber)
#define t_have_val    (curpstate->T_have_val)
#define t_errorvalue  (curpstate->T_errorvalue)

#define k_main        (curpstate->K_main)
#define k_errout      (curpstate->K_errout)
#define k_input       (curpstate->K_input)
#define k_output      (curpstate->K_output)

#define ENTERPSTATE(p) if (((p)!=NULL)) { curpstate = (p); }
#endif					/* MultiThread */

#endif					/* COMPILER */
/*
 * Constants controlling expression evaluation.
 */
#if COMPILER
#define A_Resume	-1	/* expression failed: resume a generator */
#define A_Continue      -2	/* expression returned: continue execution */
#define A_FallThru      -3      /* body function: fell through end of code */
#define A_Coact		1	/* co-expression activation */
#define A_Coret		2	/* co-expression return */
#define A_Cofail	3	/* co-expression failure */
#else					/* COMPILER */
#define A_Resume	1		/* routine failed */
#define A_Pret_uw	2		/* interp unwind for Op_Pret */
#define A_Unmark_uw	3		/* interp unwind for Op_Unmark */
#define A_Pfail_uw	4		/* interp unwind for Op_Pfail */
#define A_Lsusp_uw	5		/* interp unwind for Op_Lsusp */
#define A_Eret_uw	6		/* interp unwind for Op_Eret */
#define A_Continue	7		/* routine returned */
#define A_Coact		8		/* co-expression activated */
#define A_Coret		9		/* co-expression returned */
#define A_Cofail	10		/* co-expression failed */
#ifdef MultiThread
#define A_MTEvent	11		/* multithread event */
#endif					/* MultiThread */
#endif					/* COMPILER */

/*
 * Address of word containing cset bit b (c is a struct descrip of type Cset).
 */
#define CsetPtr(b,c)	(BlkLoc(c)->cset.bits + (((b)&0377) >> LogIntBits))

#if MSDOS
#if (MICROSOFT && defined(M_I86HM)) || (TURBO && defined(__HUGE__))
#define ptr2word(x) ((uword)((char huge *)x - (char huge *)zptr))
#define word2ptr(x) ((char huge *)((char huge *)zptr + (uword)x))
#else					/* MICROSOFT ... */
#define ptr2word(x) (uword)x
#define word2ptr(x) ((char *)x)
#endif					/* MICROSOFT ... */
#endif					/* MSDOS */

/****************************************   end ../h/rmacros.h   */


/****************************************  from ../h/rstructs.h:  */

/*
 * Run-time data structures.
 */

/*
 * Structures common to the compiler and interpreter.
 */

/*
 * Run-time error numbers and text.
 */
struct errtab {
   int err_no;			/* error number */
   char *errmsg;		/* error message */
   };

/*
 * Descriptor
 */

struct descrip {		/* descriptor */
   word dword;			/*   type field */
   union {
      word integr;		/*   integer value */
      char *sptr;		/*   pointer to character string */
      union block *bptr;	/*   pointer to a block */
      dptr descptr;		/*   pointer to a descriptor */
      } vword;
   };

struct sdescrip {
   word length;			/*   length of string */
   char *string;		/*   pointer to string */
   };

#ifdef LargeInts
struct b_bignum {		/* large integer block */
   word title;			/*   T_Lrgint */
   word blksize;		/*   block size */
   word msd, lsd;		/*   most and least significant digits */
   int sign;			/*   sign; 0 positive, 1 negative */
   DIGIT digits[1];		/*   digits */
   };
#endif					/* LargeInts */

struct b_real {			/* real block */
   word title;			/*   T_Real */
   double realval;		/*   value */
   };

struct b_cset {			/* cset block */
   word title;			/*   T_Cset */
   word size;			/*   size of cset */
   unsigned int bits[CsetSize];		/*   array of bits */
   };

struct b_file {			/* file block */
   word title;			/*   T_File */
   FILE *fd;			/*   Unix file descriptor */
   word status;			/*   file status */
   struct descrip fname;	/*   file name (string qualifier) */
   };

struct b_lelem {		/* list-element block */
   word title;			/*   T_Lelem */
   word blksize;		/*   size of block */
   union block *listprev;	/*   previous list-element block */
   union block *listnext;	/*   next list-element block */
   word nslots;			/*   total number of slots */
   word first;			/*   index of first used slot */
   word nused;			/*   number of used slots */
   struct descrip lslots[1];	/*   array of slots */
   };

struct b_list {			/* list-header block */
   word title;			/*   T_List */
   word size;			/*   current list size */
   word id;			/*   identification number */
   union block *listhead;	/*   pointer to first list-element block */
   union block *listtail;	/*   pointer to last list-element block */
   };

struct b_proc {			/* procedure block */
   word title;			/*   T_Proc */
   word blksize;		/*   size of block */

#if COMPILER
   int (*ccode)();
#else					/* COMPILER */
   union {			/*   entry points for */
      int (*ccode)();		/*     C routines */
      uword ioff;		/*     and icode as offset */
      pointer icode;		/*     and icode as absolute pointer */
      } entryp;
#endif					/* COMPILER */

   word nparam;			/*   number of parameters */
   word ndynam;			/*   number of dynamic locals */
   word nstatic;		/*   number of static locals */
   word fstatic;		/*   index (in global table) of first static */

   struct descrip pname;	/*   procedure name (string qualifier) */
   struct descrip lnames[1];	/*   list of local names (qualifiers) */
   };

struct b_record {		/* record block */
   word title;			/*   T_Record */
   word blksize;		/*   size of block */
   word id;			/*   identification number */
   union block *recdesc;	/*   pointer to record constructor */
   struct descrip fields[1];	/*   fields */
   };

/*
 * Alternate uses for procedure block fields, applied to records.
 */
#define nfields	nparam		/* number of fields */
#define recnum nstatic		/* record number */
#define recid fstatic		/* record serial number */
#define recname	pname		/* record name */

struct b_selem {		/* set-element block */
   word title;			/*   T_Selem */
   union block *clink;		/*   hash chain link */
   uword hashnum;		/*   hash number */
   struct descrip setmem;	/*   the element */
   };

/*
 * A set header must be a proper prefix of a table header,
 *  and a set element must be a proper prefix of a table element.
 */
struct b_set {			/* set-header block */
   word title;			/*   T_Set */
   word size;			/*   size of the set */
   word id;			/*   identification number */
   word mask;			/*   mask for slot num, equals n slots - 1 */
   struct b_slots *hdir[HSegs];	/*   directory of hash slot segments */
   };

struct b_table {		/* table-header block */
   word title;			/*   T_Table */
   word size;			/*   current table size */
   word id;			/*   identification number */
   word mask;			/*   mask for slot num, equals n slots - 1 */
   struct b_slots *hdir[HSegs];	/*   directory of hash slot segments */
   struct descrip defvalue;	/*   default table element value */
   };

struct b_slots {		/* set/table hash slots */
   word title;			/*   T_Slots */
   word blksize;		/*   size of block */
   union block *hslots[HSlots];	/*   array of slots (HSlots * 2^n entries) */
   };

struct b_telem {		/* table-element block */
   word title;			/*   T_Telem */
   union block *clink;		/*   hash chain link */
   uword hashnum;		/*   for ordering chain */
   struct descrip tref;		/*   entry value */
   struct descrip tval;		/*   assigned value */
   };

struct b_tvsubs {		/* substring trapped variable block */
   word title;			/*   T_Tvsubs */
   word sslen;			/*   length of substring */
   word sspos;			/*   position of substring */
   struct descrip ssvar;	/*   variable that substring is from */
   };

struct b_tvtbl {		/* table element trapped variable block */
   word title;			/*   T_Tvtbl */
   union block *clink;		/*   pointer to table header block */
   uword hashnum;		/*   hash number */
   struct descrip tref;		/*   entry value */
   };

struct b_external {		/* external block */
   word title;			/*   T_External */
   word blksize;		/*   size of block */
   word exdata[1];		/*   words of external data */
   };

struct astkblk {		  /* co-expression activator-stack block */
   int nactivators;		  /*   number of valid activator entries in
				   *    this block */
   struct astkblk *astk_nxt;	  /*   next activator block */
   struct actrec {		  /*   activator record */
      word acount;		  /*     number of calls by this activator */
      struct b_coexpr *activator; /*     the activator itself */
      } arec[ActStkBlkEnts];
   };

/*
 * Structure for keeping set/table generator state across a suspension.
 */
struct hgstate {		/* hashed-structure generator state */
   int segnum;			/* current segment number */
   word slotnum;		/* current slot number */
   word tmask;			/* structure mask before suspension */
   word sgmask[HSegs];		/* mask in use when the segment was created */
   uword sghash[HSegs];		/* hashnum in process when seg was created */
   };


/*
 * Structure for chaining tended descriptors.
 */
struct tend_desc {
   struct tend_desc *previous;
   int num;
   struct descrip d[1]; /* actual size of array indicated by num */
   };

/*
 * Structure for mapping string names of functions and operators to block
 * addresses.
 */
struct pstrnm {
   char *pstrep;
   struct b_proc *pblock;
   };

struct dpair {
   struct descrip dr;
   struct descrip dv;
   };

/*
 * Allocated memory region structure.  Each program has linked lists of
 * string and block regions.
 */
struct region {
   word  size;				/* allocated region size in bytes */
   char *base;				/* start of region */
   char *end;				/* end of region */
   char *free;				/* free pointer */
   struct region *prev, *next;		/* forms a linked list of regions */
   struct region *Gprev, *Gnext;	/* global (all programs) lists */
   };

#ifdef Double
/*
 * Data type the same size as a double but without alignment requirements.
 */
   struct size_dbl {
       char s[sizeof(double)];
       };
#endif					/* Double */


#if COMPILER

/*
 * Structures for the compiler.
 */

struct p_frame {
   struct p_frame *old_pfp;
   struct descrip *old_argp;
   struct descrip *rslt;
   continuation succ_cont;
   struct tend_desc tend;
   };
#endif					/* COMPILER */

/*
 * when debugging is enabled a debug struct is placed after the tended
 *  descriptors in the procedure frame.
 */
struct debug {
   struct b_proc *proc;
   char *old_fname;
   int old_line;
   };

union numeric {			/* long integers or real numbers */
   long integer;
   double real;

#ifdef LargeInts
   struct b_bignum *big;
#endif				/* LargeInts */

   };

#if COMPILER
struct b_coexpr {		/* co-expression stack block */
   word title;			/*   T_Coexpr */
   word size;			/*   number of results produced */
   word id;			/*   identification number */
   struct b_coexpr *nextstk;	/*   pointer to next allocated stack */
   continuation fnc;		/*   function containing co-expression code */
   struct p_frame *es_pfp;	/*   current procedure frame pointer */
   dptr es_argp;		/*   current argument pointer */
   struct tend_desc *es_tend;	/*   current tended pointer */
   char *file_name;		/*   current file name */
   word line_num;		/*   current line_number */
   dptr tvalloc;		/*   where to place transmitted value */
   struct descrip freshblk;	/*   refresh block pointer */
   struct astkblk *es_actstk;	/*   pointer to activation stack structure */
   word cstate[CStateSize];	/*   C state information */
   struct p_frame pf;           /*   initial procedure frame */
   };

struct b_refresh {		/* co-expression block */
   word title;			/*   T_Refresh */
   word blksize;		/*   size of block */
   word nlocals;		/*   number of local variables */
   word nargs;			/*   number of arguments */
   word ntemps;                 /*   number of temporary descriptors */
   word wrk_size;		/*   size of non-descriptor work area */
   struct descrip elems[1];	/*   locals and arguments */
   };

#else					/* COMPILER */

/*
 * Structures for the interpreter.
 */

/*
 * Declarations for entries in tables associating icode location with
 *  source program location.
 */
struct ipc_fname {
   word ipc;		/* offset of instruction into code region */
   word fname;		/* offset of file name into string region */
   };

struct ipc_line {
   word ipc;		/* offset of instruction into code region */
   int line;		/* line number */
   };

#ifdef MultiThread
/*
 * Program state encapsulation.  This consists of the VARIABLE parts of
 * many global structures.
 */
struct progstate {
   long hsize;				/* size of the icode */
   struct progstate *parent;
   struct descrip parentdesc;		/* implicit "&parent" */
   struct descrip eventmask;		/* implicit "&eventmask" */
   struct descrip opcodemask;		/* implicit "&opcodemask" */
   struct descrip eventcode;		/* &eventcode */
   struct descrip eventval;		/* &eventval */
   struct descrip eventsource;		/* &eventsource */
   dptr Glbl_argp;			/* global argp */

   /*
    * trapped variable keywords' values
    */
   struct descrip Kywd_err;
   struct descrip Kywd_pos;
   struct descrip ksub;
   struct descrip Kywd_prog;
   struct descrip Kywd_ran;
   struct descrip Kywd_trc;
   struct b_coexpr *Mainhead;
   char *Code;
   char *Ecode;
   word *Records;
   int *Ftabp;
#ifdef FieldTableCompression
   short Ftabwidth, Foffwidth;
   unsigned char *Ftabcp, *Focp;
   short *Ftabsp, *Fosp;
   int *Fo;
   char *Bm;
#endif					/* FieldTableCompression */
   dptr Fnames, Efnames;
   dptr Globals, Eglobals;
   dptr Gnames, Egnames;
   dptr Statics, Estatics;
   int NGlobals, NStatics;
   char *Strcons;
   struct ipc_fname *Filenms, *Efilenms;
   struct ipc_line *Ilines, *Elines;
   struct ipc_line * Current_line_ptr;

#ifdef Graphics
   struct descrip AmperX, AmperY, AmperRow, AmperCol;	/* &x, &y, &row, &col */
   struct descrip AmperInterval;			/* &interval */
   struct descrip LastEventWin;				/* last Event() win */
   int LastEvFWidth;
   int LastEvLeading;
   int LastEvAscent;
   uword PrevTimeStamp;					/* previous timestamp */
   uword Xmod_Control, Xmod_Shift, Xmod_Meta;		/* control,shift,meta */
   struct descrip Kywd_xwin[2];				/* &window + ... */
#endif					/* Graphics */

#ifdef EventMon
   word Linenum, Column, Lastline, Lastcol;
#endif					/* EventMon */

   word Coexp_ser;			/* this program's serial numbers */
   word List_ser;
   word Set_ser;
   word Table_ser;

   uword stringtotal;			/* cumulative total allocation */
   uword blocktotal;			/* cumulative total allocation */
   word colltot;			/* total number of collections */
   word collstat;			/* number of static collect requests */
   word collstr;			/* number of string collect requests */
   word collblk;			/* number of block collect requests */
   struct region *stringregion;
   struct region *blockregion;

   word Lastop;

   dptr Xargp;
   word Xnargs;

   struct descrip K_current;
   int K_errornumber;
   char *K_errortext;
   struct descrip K_errorvalue;
   int Have_errval;
   int T_errornumber;
   int T_have_val;
   struct descrip T_errorvalue;

   struct descrip K_main;
   struct b_file K_errout;
   struct b_file K_input;
   struct b_file K_output;
   };

#endif				/* MultiThread */

/*
 * Frame markers
 */
struct ef_marker {		/* expression frame marker */
   inst ef_failure;		/*   failure ipc */
   struct ef_marker *ef_efp;	/*   efp */
   struct gf_marker *ef_gfp;	/*   gfp */
   word ef_ilevel;		/*   ilevel */
   };

struct pf_marker {		/* procedure frame marker */
   word pf_nargs;		/*   number of arguments */
   struct pf_marker *pf_pfp;	/*   saved pfp */
   struct ef_marker *pf_efp;	/*   saved efp */
   struct gf_marker *pf_gfp;	/*   saved gfp */
   dptr pf_argp;		/*   saved argp */
   inst pf_ipc;			/*   saved ipc */
   word pf_ilevel;		/*   saved ilevel */
   dptr pf_scan;		/*   saved scanning environment */

#ifdef MultiThread
   struct progstate *pf_prog;	/*   saved program state pointer */
#endif				/* MultiThread */

   struct descrip pf_locals[1];	/*   descriptors for locals */
   };

struct gf_marker {		/* generator frame marker */
   word gf_gentype;		/*   type */
   struct ef_marker *gf_efp;	/*   efp */
   struct gf_marker *gf_gfp;	/*   gfp */
   inst gf_ipc;			/*   ipc */
   struct pf_marker *gf_pfp;	/*   pfp */
   dptr gf_argp;		/*   argp */
   };

/*
 * Generator frame marker dummy -- used only for sizing "small"
 *  generator frames where procedure information need not be saved.
 *  The first five members here *must* be identical to those for
 *  gf_marker.
 */
struct gf_smallmarker {		/* generator frame marker */
   word gf_gentype;		/*   type */
   struct ef_marker *gf_efp;	/*   efp */
   struct gf_marker *gf_gfp;	/*   gfp */
   inst gf_ipc;			/*   ipc */
   };

/*
 * b_iproc blocks are used to statically initialize information about
 *  functions.	They are identical to b_proc blocks except for
 *  the pname field which is a sdescrip (simple/string descriptor) instead
 *  of a descrip.  This is done because unions cannot be initialized.
 */
	
struct b_iproc {		/* procedure block */
   word ip_title;		/*   T_Proc */
   word ip_blksize;		/*   size of block */
   int (*ip_entryp)();		/*   entry point (code) */
   word ip_nparam;		/*   number of parameters */
   word ip_ndynam;		/*   number of dynamic locals */
   word ip_nstatic;		/*   number of static locals */
   word ip_fstatic;		/*   index (in global table) of first static */

   struct sdescrip ip_pname;	/*   procedure name (string qualifier) */
   struct descrip ip_lnames[1];	/*   list of local names (qualifiers) */
   };

struct b_coexpr {		/* co-expression stack block */
   word title;			/*   T_Coexpr */
   word size;			/*   number of results produced */
   word id;			/*   identification number */
   struct b_coexpr *nextstk;	/*   pointer to next allocated stack */
   struct pf_marker *es_pfp;	/*   current pfp */
   struct ef_marker *es_efp;	/*   efp */
   struct gf_marker *es_gfp;	/*   gfp */
   struct tend_desc *es_tend;	/*   current tended pointer */
   dptr es_argp;		/*   argp */
   inst es_ipc;			/*   ipc */
   word es_ilevel;		/*   interpreter level */
   word *es_sp;			/*   sp */
   dptr tvalloc;		/*   where to place transmitted value */
   struct descrip freshblk;	/*   refresh block pointer */
   struct astkblk *es_actstk;	/*   pointer to activation stack structure */

#ifdef MultiThread
   struct progstate *program;
#endif				/* MultiThread */

   word cstate[CStateSize];	/*   C state information */
   };

struct b_refresh {		/* co-expression block */
   word title;			/*   T_Refresh */
   word blksize;		/*   size of block */
   word *ep;			/*   entry point */
   word numlocals;		/*   number of locals */
   struct pf_marker pfmkr;	/*   marker for enclosing procedure */
   struct descrip elems[1];	/*   arguments and locals, including Arg0 */
   };

#endif					/* COMPILER */

union block {			/* general block */

#ifdef LargeInts
   struct b_bignum bignumblk;
#endif					/* LargeInts */

   struct b_real realblk;
   struct b_cset cset;
   struct b_file file;
   struct b_proc proc;
   struct b_list list;
   struct b_lelem lelem;
   struct b_table table;
   struct b_telem telem;
   struct b_set set;
   struct b_selem selem;
   struct b_record record;
   struct b_tvsubs tvsubs;
   struct b_tvtbl tvtbl;
   struct b_refresh refresh;
   struct b_coexpr coexpr;
   struct b_external externl;
   struct b_slots slots;
   };

/****************************************   end ../h/rstructs.h   */

#ifdef Graphics


/****************************************  from ../h/graphics.h:  */

/*
 * graphics.h - macros and types used in Icon's graphics interface.
 */

#ifdef MacGraph


/****************************************  from ::h:macgraph.h:  */

/* [file not found] */

/****************************************   end ::h:macgraph.h   */
#endif					/* MacGraph */

#ifdef XWindows


/****************************************  from ../h/xwin.h:  */

#ifdef XWindows

#define DRAWOP_AND			GXand
#define DRAWOP_ANDINVERTED		GXandInverted
#define DRAWOP_ANDREVERSE		GXandReverse
#define DRAWOP_CLEAR			GXclear
#define DRAWOP_COPY			GXcopy
#define DRAWOP_COPYINVERTED		GXcopyInverted
#define DRAWOP_EQUIV			GXequiv
#define DRAWOP_INVERT			GXinvert
#define DRAWOP_NAND			GXnand
#define DRAWOP_NOOP			GXnoop
#define DRAWOP_NOR			GXnor
#define DRAWOP_OR			GXor
#define DRAWOP_ORINVERTED		GXorInverted
#define DRAWOP_ORREVERSE		GXorReverse
#define DRAWOP_REVERSE			0x10
#define DRAWOP_SET			GXset
#define DRAWOP_XOR			GXxor

#define XLFD_Foundry	 1
#define XLFD_Family	 2
#define XLFD_Weight	 3
#define XLFD_Slant	 4
#define XLFD_SetWidth	 5
#define XLFD_AddStyle	 6
#define XLFD_Size	 7
#define XLFD_PointSize	 8
#define XLFD_Spacing	11
#define XLFD_CharSet	13

#define TEXTWIDTH(w,s,n) XTextWidth((w)->context->font->fsp, s, n)
#define SCREENDEPTH(w)\
	DefaultDepth((w)->window->display->display, w->window->display->screen)
#define ASCENT(w) ((w)->context->font->fsp->ascent)
#define DESCENT(w) ((w)->context->font->fsp->descent)
#define LEADING(w) ((w)->context->leading)
#define FHEIGHT(w) ((w)->context->font->height)
#define FWIDTH(w) ((w)->context->font->fsp->max_bounds.width)
#define LINEWIDTH(w) ((w)->context->linewidth)
#define DISPLAYHEIGHT(w)\
	DisplayHeight(w->window->display->display, w->window->display->screen)
#define DISPLAYWIDTH(w)\
	DisplayWidth(w->window->display->display, w->window->display->screen)
#define FS_SOLID FillSolid
#define FS_STIPPLE FillStippled
#define hidecrsr(x) /* noop */
#define UpdateCursorPos(x, y) /* noop */
#define showcrsr(x) /* noop */
#define SysColor XColor
#define ARCWIDTH(arc) ((arc).width)
#define ARCHEIGHT(arc) ((arc).height)
#define RECX(rec) ((rec).x)
#define RECY(rec) ((rec).y)
#define RECWIDTH(rec) ((rec).width)
#define RECHEIGHT(rec) ((rec).height)
#define ANGLE(ang) (-(ang) * 180 / Pi * 64)
#define EXTENT(ang) (-(ang) * 180 / Pi * 64)
#define ISICONIC(w) ((w)->window->iconic == IconicState)
#define ISFULLSCREEN(w) (0)
#define ISROOTWIN(w) ((w)->window->iconic == RootState)
#define ISNORMALWINDOW(w) ((w)->window->iconic == NormalState)
#define ICONFILENAME(w) ((w)->window->iconimage)
#define ICONLABEL(w) ((w)->window->iconlabel)
#define WINDOWLABEL(w) ((w)->window->windowlabel)
#define RootState IconicState+1
#define MaximizedState IconicState+2
#define HiddenState IconicState+3

/*
 * The following constants define limitations in the system, gradually being
 * removed as this code is rewritten to use dynamic allocation.
 */
#define DMAXCOLORS	256
#define WMAXCOLORS	256
#define MAXCOLORNAME	40
#define MAXDISPLAYNAME	64
#define SHARED          0
#define MUTABLE         1
#define NUMCURSORSYMS	78

/*
 * Macros to ease coding in which every X call must be done twice.
 */
#define RENDER2(func,v1,v2) {\
   if (stdwin) func(stddpy, stdwin, stdgc, v1, v2); \
   func(stddpy, stdpix, stdgc, v1, v2);}
#define RENDER3(func,v1,v2,v3) {\
   if (stdwin) func(stddpy, stdwin, stdgc, v1, v2, v3); \
   func(stddpy, stdpix, stdgc, v1, v2, v3);}
#define RENDER4(func,v1,v2,v3,v4) {\
   if (stdwin) func(stddpy, stdwin, stdgc, v1, v2, v3, v4); \
   func(stddpy, stdpix, stdgc, v1, v2, v3, v4);}
#define RENDER6(func,v1,v2,v3,v4,v5,v6) {\
   if (stdwin) func(stddpy, stdwin, stdgc, v1, v2, v3, v4, v5, v6); \
   func(stddpy, stdpix, stdgc, v1, v2, v3, v4, v5, v6);}
#define RENDER7(func,v1,v2,v3,v4,v5,v6,v7) {\
   if (stdwin) func(stddpy, stdwin, stdgc, v1, v2, v3, v4, v5, v6, v7); \
   func(stddpy, stdpix, stdgc, v1, v2, v3, v4, v5, v6, v7);}

#define MAXDESCENDER(w) (w->context->font->fsp->max_bounds.descent)

/*
 * Macros to perform direct window system calls from graphics routines
 */
#define STDLOCALS(w) \
   wcp wc = (w)->context; \
   wsp ws = (w)->window; \
   wdp wd = ws->display; \
   GC      stdgc  = wc->gc; \
   Display *stddpy = wd->display; \
   Window  stdwin  = ws->win; \
   Pixmap  stdpix  = ws->pix;

#define drawarcs(w, arcs, narcs) \
   { STDLOCALS(w); RENDER2(XDrawArcs,arcs,narcs); }
#define drawlines(w, points, npoints) \
   { STDLOCALS(w); RENDER3(XDrawLines,points,npoints,CoordModeOrigin); }
#define drawpoints(w, points, npoints) \
   { STDLOCALS(w); RENDER3(XDrawPoints,points,npoints,CoordModeOrigin); }
#define drawrectangles(w, recs, nrecs) { \
   STDLOCALS(w); \
   for(i=0; i<nrecs; i++) { \
     RENDER4(XDrawRectangle,recs[i].x,recs[i].y,recs[i].width,recs[i].height);\
     }}

#define drawsegments(w, segs, nsegs) \
   { STDLOCALS(w); RENDER2(XDrawSegments,segs,nsegs); }
#define drawstrng(w, x, y, s, slen) \
   { STDLOCALS(w); RENDER4(XDrawString, x, y, s, slen); }
#define fillarcs(w, arcs, narcs) \
   { STDLOCALS(w); RENDER2(XFillArcs, arcs, narcs); }
#define fillpolygon(w, points, npoints) \
   { STDLOCALS(w); RENDER4(XFillPolygon, points, npoints, Complex, CoordModeOrigin); }

/*
 * "get" means remove them from the Icon list and put them on the ghost queue
 */
#define EVQUEGET(w,d) { \
  int i;\
  wsp ws = (w)->window; \
  if (!c_get((struct b_list *)BlkLoc(ws->listp),&d)) fatalerr(0,NULL); \
  if (Qual(d)) {\
      ws->eventQueue[ws->eQfront++] = *StrLoc(d); \
      if (ws->eQfront >= EQUEUELEN) ws->eQfront = 0; \
      ws->eQback = ws->eQfront; \
      } \
  }
#define EVQUEEMPTY(w) (BlkLoc((w)->window->listp)->list.size == 0)

/*
 * Colors.  These are allocated within displays; they are currently
 * statically bounded to DMAXCOLORS colors per display.  Pointers
 * into the display's color table are also kept on a per-window
 * basis so that they may be (de)allocated when a window is cleared.
 * Colors are aliased by r,g,b value.  Allocations by name and r,g,b
 * share when appropriate.
 *
 * Color (de)allocation comprises a simple majority of the space
 * requirements of the current implementation.  A monochrome-only
 * version would take a lot less space.
 *
 * The name field is the string returned by WAttrib.  For a mutable
 * color this is of the form "-47" followed by a second C string
 * containing the current color setting.
 */
typedef struct wcolor {
  int		refcount;
  char		name[6+MAXCOLORNAME];	/* name for WAttrib & WColor reads */
  unsigned short r, g, b;		/* rgb for colorsearch */
  unsigned long	c;			/* X pixel value */
  int           type;			/* SHARED or MUTABLE */
} *wclrp;

/*
 * macros performing row/column to pixel y,x translations
 * computation is 1-based and depends on the current font's size.
 * exception: XTOCOL as defined is 0-based, because that's what its
 * clients seem to need.
 */
#define ROWTOY(w,row) ((row-1) * LEADING(w) + ASCENT(w))
#define COLTOX(w,col) ((col-1) * FWIDTH(w))
#define YTOROW(w,y)   ((y>0) ? ((y) / LEADING(w) + 1) : ((y) / LEADING(w)))
#define XTOCOL(w,x)  (!FWIDTH(w) ? (x) : ((x) / FWIDTH(w)))

#define STDLOCALS(w) \
   wcp wc = (w)->context; \
   wsp ws = (w)->window; \
   wdp wd = ws->display; \
   GC      stdgc  = wc->gc; \
   Display *stddpy = wd->display; \
   Window  stdwin  = ws->win; \
   Pixmap  stdpix  = ws->pix;

#endif					/* XWindows */

/****************************************   end ../h/xwin.h   */
#endif					/* XWindows */

#ifdef PresentationManager


/****************************************  from ../h/pmwin.h:  */

/* [file not found] */

/****************************************   end ../h/pmwin.h   */
#endif					/* PresentationManager */

#ifdef MSWindows


/****************************************  from ../h/mswin.h:  */

/* [file not found] */

/****************************************   end ../h/mswin.h   */
#endif					/* MSWindows */

#ifndef MAXXOBJS
#define MAXXOBJS 256
#endif					/* MAXXOBJS */

#ifndef DMAXCOLORS
#define DMAXCOLORS 256
#endif					/* DMAXCOLORS */

#ifndef MAXCOLORNAME
#define MAXCOLORNAME 40
#endif					/* MAXCOLORNAME */

#ifndef MAXFONTWORD
#define MAXFONTWORD 40
#endif					/* MAXFONTWORD */

#define DEFAULTFONTSIZE 14

#define FONTATT_SPACING		0x01000000
#define FONTFLAG_MONO		0x00000001
#define FONTFLAG_PROPORTIONAL	0x00000002

#define FONTATT_SERIF		0x02000000
#define FONTFLAG_SANS		0x00000004
#define FONTFLAG_SERIF		0x00000008

#define FONTATT_SLANT		0x04000000
#define FONTFLAG_ROMAN		0x00000010
#define FONTFLAG_ITALIC		0x00000020
#define FONTFLAG_OBLIQUE	0x00000040

#define FONTATT_WEIGHT		0x08000000
#define FONTFLAG_LIGHT		0x00000100
#define FONTFLAG_MEDIUM		0x00000200
#define FONTFLAG_DEMI		0x00000400
#define FONTFLAG_BOLD		0x00000800

#define FONTATT_WIDTH		0x10000000
#define FONTFLAG_CONDENSED	0x00001000
#define FONTFLAG_NARROW		0x00002000
#define FONTFLAG_NORMAL		0x00004000
#define FONTFLAG_WIDE		0x00008000
#define FONTFLAG_EXTENDED	0x00010000

/*
 * EVENT HANDLING
 *
 * Each window keeps an associated queue of events waiting to be
 * processed.  The queue consists of <eventcode,x,y> triples,
 * where eventcodes are strings for normal keyboard events, and
 * integers for mouse and special keystroke events.
 *
 * The main queue is an icon list.  In addition, there is a queue of
 * old keystrokes maintained for cooked mode operations, maintained
 * in a little circular array of chars.
 */
#define EQ_MOD_CONTROL (1L<<16L)
#define EQ_MOD_META    (1L<<17L)
#define EQ_MOD_SHIFT   (1L<<18L)

#define EVQUESUB(w,i) *evquesub(w,i)
#define EQUEUELEN 256

/*
 * mode bits for the Icon window context (as opposed to X context)
 */

#ifdef XWindows
#define ISZOMBIE(w)     ((w)->window->bits & 1)
#endif					/* XWindows */
#define ISINITIAL(w)    ((w)->window->bits & 1)
#define ISINITIALW(ws)   ((ws)->bits & 1)
#define ISCURSORON(w)   ((w)->window->bits & 2)
#define ISCURSORONW(ws) ((ws->bits) & 2)
#define ISMAPPED(w)	((w)->window->bits & 4)
#define ISREVERSE(w)    ((w)->context->bits & 8)
#define ISXORREVERSE(w)	((w)->context->bits & 16)
#define ISXORREVERSEW(w) ((w)->bits & 16)
#define ISCLOSED(w)	((w)->window->bits & 64)
#define ISRESIZABLE(w)	((w)->window->bits & 128)
#define ISEXPOSED(w)    ((w)->window->bits & 256)
#define ISCEOLON(w)     ((w)->window->bits & 512)
#define ISECHOON(w)     ((w)->window->bits & 1024)
#ifdef PresentationManager
#define ISMINPEND(w)    ((w)->window->bits & 2048)
#define ISMINPENDW(ws)   ((ws)->bits & 2048)
#endif					/* PresentationManager */
#ifdef MSWindows
#define ISTOBEHIDDEN(ws)  ((ws)->bits & 4096)
#endif					/* MSWindows */

#ifdef XWindows
#define SETZOMBIE(w)    ((w)->window->bits |= 1)
#endif					/* XWindows */
#ifdef PresentationManager
#define SETINITIAL(w)   ((w)->window->bits |= 1)
#endif					/* PresentationManager */
#define SETCURSORON(w)  ((w)->window->bits |= 2)
/* 4 is available */
#define SETMAPPED(w)   ((w)->window->bits |= 4)
#define SETREVERSE(w)   ((w)->context->bits |= 8)
#define SETXORREVERSE(w) ((w)->context->bits |= 16)
#define SETCLOSED(w)	((w)->window->bits |= 64)
#define SETRESIZABLE(w)	((w)->window->bits |= 128)
#define SETEXPOSED(w)   ((w)->window->bits |= 256)
#define SETCEOLON(w)    ((w)->window->bits |= 512)
#define SETECHOON(w)    ((w)->window->bits |= 1024)
#ifdef PresentationManager
#define SETMINPEND(w)   ((w)->window->bits |= 2048)
#endif					/* PresentationManager */
#ifdef MSWindows
#define SETTOBEHIDDEN(ws)  ((ws)->bits |= 4096)
#endif					/* MSWindows */

#ifdef XWindows
#define CLRZOMBIE(w)    ((w)->window->bits &= ~1)
#endif					/* XWindows */
#ifdef PresentationManager
#define CLRINITIAL(w)   ((w)->window->bits &= ~1)
#define CLRINITIALW(w)  ((w)->bits &= ~1)
#endif					/* PresentationManager */
#define CLRCURSORON(w)  ((w)->window->bits &= ~2)
#define CLRMAPPED(w)    ((w)->window->bits &= ~4)
#define CLRREVERSE(w)   ((w)->context->bits &= ~8)
#define CLRXORREVERSE(w) ((w)->context->bits &= ~16)
#define CLRCLOSED(w)	((w)->window->bits &= ~64)
#define CLRRESIZABLE(w)	((w)->window->bits &= ~128)
#define CLREXPOSED(w)   ((w)->window->bits &= ~256)
#define CLRCEOLON(w)    ((w)->window->bits &= ~512)
#define CLRECHOON(w)    ((w)->window->bits &= ~1024)
#ifdef PresentationManager
#define CLRMINPEND(w)   ((w)->window->bits &= ~2048)
#define CLRMINPENDW(w)  ((w)->bits &= ~2048)
#endif					/* PresentationManager */
#ifdef MSWindows
#define CLRTOBEHIDDEN(ws)  ((ws)->bits &= ~4096)
#endif					/* MSWindows */



/*
 * Window Resources
 * Icon "Resources" are a layer on top of the window system resources,
 * provided in order to facilitate resource sharing and minimize the
 * number of calls to the window system.  Resources are reference counted.
 * These data structures are simple sets of pointers
 * into internal window system structures.
 */



/*
 * Fonts are allocated within displays.
 */
typedef struct _wfont {
  int		refcount;
  int		serial;			/* serial # */
  struct _wfont *previous, *next;
#ifdef MacGraph
  short     fontNum;
  Style     fontStyle;
  int       fontSize;
  FontInfo  fInfo;              /* I-173 */
#endif					/* MacGraph */
#ifdef XWindows
  char	      *	name;			/* name for WAttrib and fontsearch */
  int		height;			/* font height */
  XFontStruct *	fsp;			/* X font pointer */
#endif					/* XWindows */
#ifdef PresentationManager
/* XXX replace this HUGE structure with single fields later - when we know
   conclusively which ones we need */
  FONTMETRICS	metrics;		/* more than you ever wanted to know */
#endif					/* PresentationManager */
#ifdef MSWindows
  char		*name;			/* name for WAttrib and fontsearch */
  HFONT		font;
  LONG		ascent;
  LONG		descent;
  LONG		charwidth;
  LONG		height;
#endif					/* MSWindows */
} wfont, *wfp;

/*
 * These structures and definitions are used for colors and images.
 */
typedef struct {
   long red, green, blue;		/* color components, linear 0 - 65535*/
   } LinearColor;

struct palentry {			/* entry for one palette member */
   LinearColor clr;			/* RGB value of color */
   char used;				/* nonzero if char is used */
   char valid;				/* nonzero if entry is valid & opaque */
   char transpt;			/* nonzero if char is transparent */
   };

struct imgdata {			/* image loaded from a file */
   int width, height;			/* image dimensions */
   struct palentry *paltbl;		/* pointer to palette table */
   unsigned char *data;			/* pointer to image data */
   };

struct imgmem {
   int x, y, width, height;
#ifdef XWindows
   XImage *im;
#endif					/* XWindows */
#ifdef MSWindows
   COLORREF *crp;
#endif					/* MSWindows */
   };

#define TCH1 '~'			/* usual transparent character */
#define TCH2 0377			/* alternate transparent character */
#define PCH1 ' '			/* punctuation character */
#define PCH2 ','			/* punctuation character */


#ifdef MacGraph 
typedef struct _wctype {
   Pattern bkPat;
   Pattern fillPat;
   Point pnLoc;
   Point pnSize;
   short pnMode;
   Pattern pnPat;
   short txFont;
   Style txFace;
   short txMode;
   short txSize;
   Fixed spExtra;
   RGBColor fgColor;
   RGBColor bgColor;
} ContextType, *ContextPtrType;
#endif					/* MacGraph */


#ifdef XWindows
/*
 * Displays are maintained in a global list in rwinrsc.r.
 */
typedef struct _wdisplay {
  int		refcount;
  int		serial;			/* serial # */
  char		name[MAXDISPLAYNAME];
  Display *	display;
  GC		icongc;
  Colormap	cmap;
  double	gamma;
  int		screen;
  int		numFonts;
  wfp		fonts;
  int           numColors;		/* allocated color info */
  struct wcolor	colors[DMAXCOLORS];
  Cursor	cursors[NUMCURSORSYMS];
  struct _wdisplay *previous, *next;
} *wdp;
#endif					/* XWindows */

#ifdef PresentationManager
/*
 * Presentation space local id's are used to identify fonts, bitmaps
 * and markers.  Since we have 2 presentation spaces for each window,
 * and contexts can be associated with different windows through bindings,
 * the local identifier map must be identical throughout all ps (since the
 * context can identify a font as ID 2 on one space and that must be valid
 * on each space it is bound to).  This will be handled by a global array
 * of lclIdentifier.
 */
#define MAXLOCALS               255
#define IS_FONT                 1
#define IS_PATTERN              2
#define IS_MARKER               4               /* unused for now */

typedef struct _lclIdentifier {
  SHORT idtype;         /* type of the id, either font or pattern */
  SHORT refcount;       /* reference count, when < 1, deleted */
  union {
     wfont font;    /* font info */
     HBITMAP   hpat;    /* pattern bitmap handle */
     } u;
  struct _lclIdentifier *next,          /* dbl linked list */
                        *previous;
  } lclIdentifier;

#endif					/* PresentationManager */


/*
 * "Context" comprises the graphics context, and the font (i.e. text context).
 * Foreground and background colors (pointers into the display color table)
 * are stored here to reduce the number of window system queries.
 * Contexts are allocated out of a global array in rwinrsrc.c.
 */
typedef struct _wcontext {
  int		refcount;
  int		serial;			/* serial # */
  struct _wcontext *previous, *next;
  int		clipx, clipy, clipw, cliph;
  char		*patternname;
  wfp		font;
  int		dx, dy;
  int		fillstyle;
  int		drawop;
  double	gamma;			/* gamma correction value */
  int		bits;			/* context bits */
#ifdef MacGraph
  ContextPtrType   contextPtr;
#endif					/* MacGraph */
#ifdef XWindows
  wdp		display;
  GC		gc;			/* X graphics context */
  wclrp		fg, bg;
  int		linestyle;
  int		linewidth;
  int		leading;		/* inter-line leading */
#endif					/* XWindows */
#ifdef PresentationManager
  /* attribute bundles */
  CHARBUNDLE	charBundle;		/* text attributes */
  LINEBUNDLE	lineBundle;		/* line/arc attributes */
  AREABUNDLE	areaBundle;		/* polygon attributes... */
  IMAGEBUNDLE	imageBundle;		/* attributes use in blit of mono bms */
  LONG 		fntLeading;		/* external leading for font - user */
  SHORT		currPattern;		/* id of current pattern */
  LONG		numDeps;		/* number of window dependants */
  LONG		maxDeps;		/* maximum number of deps in current table */
  struct _wstate **depWindows;           /* array of window dependants */
#endif					/* PresentationManager */
#ifdef MSWindows
  LOGPEN	pen;
  LOGPEN	bgpen;
  LOGBRUSH	brush;
  LOGBRUSH	bgbrush;
  HRGN          cliprgn;
  HBITMAP	pattern;
  SysColor	fg, bg;
  char		*fgname, *bgname;
  int		leading, bkmode;
#endif					/* MSWindows*/
} wcontext, *wcp;

/*
 * Native facilities include the following child controls (windows) that
 * persist on the canvas and intercept various events.
 */
#ifdef MSWindows
#define CHILD_BUTTON 0
#define CHILD_SCROLLBAR 1
#define CHILD_EDIT 2
typedef struct childcontrol {
   int  type;				/* what kind of control? */
   HWND win;				/* child window handle */
   HFONT font;
   char *id;				/* child window string id */
} childcontrol;
#endif					/* MSWindows */

/*
 * "Window state" includes the actual X window and references to a large
 * number of resources allocated on a per-window basis.  Windows are
 * allocated out of a global array in rwinrsrc.c.  Windows remember the
 * first WMAXCOLORS colors they allocate, and deallocate them on clearscreen.
 */
typedef struct _wstate {
  int		refcount;		/* reference count */
  int		serial;			/* serial # */
  struct _wstate *previous, *next;
  int		pixheight;		/* backing pixmap height, in pixels */
  int		pixwidth;		/* pixmap width, in pixels */
  char		*windowlabel;		/* window label */
  char		*iconimage;		/* icon pixmap file name */
  char		*iconlabel;		/* icon label */
  struct imgdata initimage;		/* initial image data */
  struct imgdata initicon;		/* initial icon image data */
  int		y, x;			/* current cursor location, in pixels*/
  int		pointery,pointerx;	/* current mouse location, in pixels */
  int		posy, posx;		/* desired upper lefthand corner */
  unsigned int	height;			/* window height, in pixels */
  unsigned int	width;			/* window width, in pixels */
  int		bits;			/* window bits */
  int		theCursor;		/* index into cursor table */
  word		timestamp;		/* last event time stamp */
  char		eventQueue[EQUEUELEN];  /* queue of cooked-mode keystrokes */
  int		eQfront, eQback;
  char		*cursorname;
  struct descrip filep, listp;		/* icon values for this window */
#ifdef MacGraph
  WindowPtr theWindow;      /* pointer to the window */
  PicHandle windowPic;      /* handle to backing pixmap */
  GWorldPtr offScreenGWorld;  /* offscreen graphics world */
  CGrafPtr   origPort;
  GDHandle  origDev;
  PixMapHandle offScreenPMHandle;
  Rect      sourceRect;
  Rect      destRect;
  Rect      GWorldRect;
  Boolean   lockOK;
  Boolean   visible;
#endif					/* MacGraph */
#ifdef XWindows
  wdp		display;
  Window	win;			/* X window */
  Pixmap	pix;			/* current screen state */
  Pixmap	initialPix;		/* an initial image to display */
  Window        iconwin;		/* icon window */
  Pixmap	iconpix;		/* icon pixmap */
  int		normalx, normaly;	/* pos to remember when maximized */
  int		normalw, normalh;	/* size to remember when maximized */
  int           numColors;		/* allocated color info */
  short		*theColors;		/* indices into display color table */
  int           numiColors;		/* allocated color info for the icon */
  short		*iconColors;		/* indices into display color table */
  int		iconic;			/* window state; icon, window or root*/
  int		iconx, icony;           /* location of icon */
  unsigned int	iconw, iconh;		/* width and height of icon */
  long		wmhintflags;		/* window manager hints */
#endif					/* XWindows */
#ifdef PresentationManager
  HWND		hwnd;			/* handle to the window (client) */
  HWND		hwndFrame;		/* handle to the frame window */
  HMTX		mutex;			/* window access mutex sem */
  HDC		hdcWin;			/* handle to window device context */
  HPS		hpsWin;			/* pres space for window */
  HPS		hpsBitmap;		/* pres space for the backing bitmap */
  HBITMAP	hBitmap;		/* handle to the backing bitmap */
  HDC		hdcBitmap;		/* handle to the bit, memory DC */
  wcontext	*charContext;		/* context currently loaded in PS's */
  wcontext	*lineContext;		
  wcontext 	*areaContext;
  wcontext	*imageContext;
  wcontext	*clipContext;
  LONG 		winbg;			/* window background color */
  HBITMAP	hInitialBitmap;		/* the initial image to display */
  HPOINTER	hPointer;		/* handle to window's current pointer*/
  CURSORINFO	cursInfo;		/* cursor information stored on lose focus */
  LONG		numDeps;		/* number of context dependants */
  LONG		maxDeps;
  wcontext      **depContexts;          /* array of context dependants */
  /* XXX I don't like this next line, but it will do for now - until I figure
     out something better.  Following the charContext pointer to find the
     descender value is not enough as it could be NULL */
  SHORT         lastDescender;          /* the font descender value from last wc */
  HRGN		hClipWindow;		/* clipping regions */
  HRGN		hClipBitmap;
  BYTE		winState;               /* window state: icon, window, maximized */
  HBITMAP       hIconBitmap;            /* bitmap to display when iconized */
#endif					/* PresentationManager */
#ifdef MSWindows
  HWND		win;			/* client window */
  HWND		iconwin;		/* client window when iconic */
  HBITMAP	pix;			/* backing bitmap */
  HBITMAP	iconpix;		/* backing bitmap */
  HBITMAP	initialPix;		/* backing bitmap */
  HBITMAP	theOldPix;
  int		hasCaret;
  HCURSOR	curcursor;
  HCURSOR	savedcursor;
  HMENU		menuBar;
  int		nmMapElems;
  char **       menuMap;
  HWND		focusChild;
  int           nChildren;
  childcontrol *child;
#endif					/* MSWindows */
} wstate, *wsp;

/*
 * Icon window file variables are actually pointers to "bindings"
 * of a window and a context.  They are allocated out of a global
 * array in rwinrsrc.c.  There is one binding per Icon window value.
 */
typedef struct _wbinding {
  int refcount;
  int serial;
  struct _wbinding *previous, *next;
  wcp context;
  wsp window;
} wbinding, *wbp;

#ifdef MacGraph
typedef struct  
   {
   Boolean wasDown; 
   uword when; 
   Point where; 
   int whichButton; 
   int modKey; 
   wsp ws;
   } MouseInfoType;
#endif					/* MacGraph */



typedef struct {
  char *s;
  int i;
} stringint, *siptr;

/*
 * Gamma Correction value to compensate for nonlinear monitor color response
 */
#ifndef GammaCorrection
#define GammaCorrection 2.5
#endif					/* GammaCorrection */

/*
 * Attributes
 */

#define A_ASCENT	1
#define A_BG		2
#define A_CANVAS	3
#define A_CEOL		4
#define A_CLIPH		5
#define A_CLIPW		6
#define A_CLIPX		7
#define A_CLIPY		8
#define A_COL		9
#define A_COLUMNS	10
#define A_CURSOR	11
#define A_DEPTH		12
#define A_DESCENT	13
#define A_DISPLAY	14
#define A_DISPLAYHEIGHT	15
#define A_DISPLAYWIDTH	16
#define A_DRAWOP	17
#define A_DX		18
#define A_DY		19
#define A_ECHO		20
#define A_FG		21
#define A_FHEIGHT	22
#define A_FILLSTYLE	23
#define A_FONT		24
#define A_FWIDTH	25
#define A_GAMMA		26
#define A_GEOMETRY	27
#define A_HEIGHT	28
#define A_ICONIC	29
#define A_ICONIMAGE     30
#define A_ICONLABEL	31
#define A_ICONPOS	32
#define A_IMAGE		33
#define A_LABEL		34
#define A_LEADING	35
#define A_LINES		36
#define A_LINESTYLE	37
#define A_LINEWIDTH	38
#define A_PATTERN	39
#define A_POINTERCOL	40
#define A_POINTERROW	41
#define A_POINTERX	42
#define A_POINTERY	43
#define A_POINTER	44
#define A_POS		45
#define A_POSX		46
#define A_POSY		47
#define A_RESIZE	48
#define A_REVERSE	49
#define A_ROW		50
#define A_ROWS		51
#define A_SIZE		52
#define A_VISUAL	53
#define A_WIDTH		54
#define A_WINDOWLABEL   55
#define A_X		56
#define A_Y		57

#define NUMATTRIBS	57

#define XICONSLEEP	20 /* milliseconds */

/* 
 * flags for ConsoleFlags
 */
/* I/O redirection flags */
#define StdOutRedirect        1
#define StdErrRedirect        2
#define StdInRedirect         4
#define OutputToBuf           8

/****************************************   end ../h/graphics.h   */
#endif					/* Graphics */



/****************************************  from ../h/rexterns.h:  */

/*
 * External declarations for the run-time system.
 */

/*
 * External declarations common to the compiler and interpreter.
 */
extern unsigned char allchars[];/* array for making one-character strings */
#ifndef MultiThread
extern dptr glbl_argp;		/* argument pointer */
extern struct region *curstring;
extern struct region *curblock;
#endif				/* MultiThread */
extern char *blkname[];		/* print names for block types. */
extern char *currend;		/* current end of memory region */
extern dptr *quallist;		/* start of qualifier list */
extern int bsizes[];		/* sizes of blocks */
extern int firstd[];		/* offset (words) of first descrip. */
extern uword segsize[];		/* size of hash bucket segment */
extern int k_level;		/* value of &level */
extern struct b_coexpr *stklist;/* base of co-expression stack list */
extern struct b_cset blankcs;   /* ' ' */
extern struct b_cset lparcs;    /* '(' */
extern struct b_cset rparcs;    /* ')' */
extern struct b_cset fullcs;    /* cset containing all characters */
extern struct descrip blank;	/* blank */
extern struct descrip emptystr;	/* empty string */

#ifndef MultiThread
extern struct descrip k_current;/* &current */
extern char *k_errortext;	/* value of &errortext */
extern int have_errval;		/* &errorvalue has a legal value */
extern int k_errornumber;	/* value of &errornumber */
extern int t_errornumber;	/* tentative k_errornumber value */
extern int t_have_val;		/* tentative have_errval flag */
extern struct b_file k_errout;	/* value of &errout */
extern struct b_file k_input;	/* value of &input */
extern struct b_file k_output;	/* value of &output */
extern struct descrip k_errorvalue;	/* value of &errorvalue */
extern struct descrip kywd_err; /* &error */
extern struct descrip kywd_pos; /* descriptor for &pos */
extern struct descrip kywd_prog; /* descriptor for &prog */
extern struct descrip kywd_ran; /* descriptor for &random */
extern struct descrip k_subject;/* &subject */
extern struct descrip kywd_trc; /* descriptor for &trace */
extern struct descrip k_eventcode; /* &eventcode */
extern struct descrip k_eventsource; /* &eventsource */
extern struct descrip k_eventvalue; /* &eventvalue */
extern struct descrip k_main;	/* value of &main */
#endif				/* MultiThread */

extern struct descrip kywd_dmp; /* descriptor for &dump */

#ifdef FncTrace
extern struct descrip kywd_ftrc; /* descriptor for &ftrace */
#endif					/* FncTrace */

extern struct descrip nullptr;	/* descriptor with null block pointer */
extern struct descrip lcase;	/* lowercase string */
extern struct descrip letr;	/* letter "r" */
extern struct descrip maps2;	/* second argument to map() */
extern struct descrip maps3;	/* third argument to map() */
extern struct descrip nulldesc;	/* null value */
extern struct descrip onedesc;	/* one */

#ifndef MultiThread
extern struct descrip t_errorvalue; /* tentative k_errorvalue value */
#endif					/* MultiThread */

extern struct descrip ucase;	/* uppercase string */
extern struct descrip zerodesc;	/* zero */

#ifndef MultiThread
extern uword blktotal;		/* cumulative total of all block allocations */
extern uword strtotal;		/* cumulative total of all string allocations */
#endif				/* MultiThread */

extern uword stattotal;		/* cumulative total of all static allocations */
				/* N.B. not currently set */

#ifndef MultiThread
extern word coll_tot;		/* total number of collections */
extern word coll_stat;		/* number of collections from static reqests */
extern word coll_str;		/* number of collections from string requests */
extern word coll_blk;		/* number of collections from block requests */
extern dptr globals; 		/* start of global variables */
extern dptr eglobals;		/* end of global variables */
extern dptr gnames;		/* start of global variable names */
extern dptr egnames; 		/* end of global variable names */
extern dptr estatics;		/* end of static variables */
#endif				/* MultiThread */

extern word mstksize;		/* size of main stack in words */
extern word qualsize;		/* size of string qualifier list */

extern word memcushion;		/* memory region cushion factor */
extern word memgrowth;		/* memory region growth factor */

extern word stksize;		/* size of co-expression stacks in words */
extern struct tend_desc *tend;  /* chain of tended descriptors */

#ifdef DosFncs
extern char *zptr;
#endif					/* DosFncs */

#if EBCDIC == 2
extern char ToEBCDIC[], FromEBCDIC[]; /* ASCII<->EBCDIC maps */
#endif					/* EBCDIC == 2 */

#ifdef StandardLib
#ifdef MacGraph
extern unsigned long starttime;	/* start time in milliseconds */
#else					/* MacGraph */
#if AMIGA
#ifdef __SASC
#include SysTime
#endif                                  /* __SASC */
#endif                                  /* AMIGA */
extern clock_t starttime;	/* start time in milliseconds */
#endif					/* MacGraph */
#else					/* StandardLib */
extern long starttime;		/* start time in milliseconds */
#endif					/* StandardLib */

#if !COMPILER
/*
 * External declarations for the interpreter.
 */

extern inst ipc;		/* interpreter program counter */
extern int ilevel;		/* interpreter level */
extern int ntended;		/* number of active tended descriptors */
extern struct b_cset k_ascii;	/* value of &ascii */
extern struct b_cset k_cset;	/* value of &cset */
extern struct b_cset k_digits;	/* value of &lcase */
extern struct b_cset k_lcase;	/* value of &lcase */
extern struct b_cset k_letters;	/* value of &letters */
extern struct b_cset k_ucase;	/* value of &ucase */
extern struct descrip tended[];	/* tended descriptors */
extern struct ef_marker *efp;	/* expression frame pointer */
extern struct gf_marker *gfp;	/* generator frame pointer */
extern struct pf_marker *pfp;	/* procedure frame pointer */
extern word *sp;		/* interpreter stack pointer */
extern word *stack;		/* interpreter stack base */
extern word *stackend;		/* end of evaluation stack */

#ifdef MultiThread
extern struct progstate *curpstate;
extern struct progstate rootpstate;
extern int noMTevents;		/* no MT events during GC */
#else					/* MultiThread */
extern char *code;		/* start of icode */
extern char *ecode;		/* end of icode */
extern dptr statics; 		/* start of static variables */
extern char *strcons;		/* start of the string constants */
extern dptr fnames;		/* field names */
extern dptr efnames;		/* end of field names */
extern word *records;
extern int *ftabp;		/* field table pointer */
#ifdef FieldTableCompression
extern word ftabwidth, foffwidth;
extern unsigned char *ftabcp;
extern short *ftabsp;
#endif					/* FieldTableCompression */
extern dptr xargp;
extern word xnargs;

extern word lastop;
#endif					/* MultiThread */

#ifdef ExecImages
extern int dumped;		/* the interpreter has been dumped */
#endif					/* ExecImages */


extern struct pstrnm pntab[];
extern int pnsize;

#else					/* COMPILER */
extern struct descrip statics[];/* array of static variables */
extern struct b_proc *builtins[];/* array of pointers to builtin functions */
extern int noerrbuf;		/* error buffering */
extern struct p_frame *pfp;	/* procedure frame pointer */
extern struct descrip trashcan; /* dummy descriptor that is never read */
extern int largeints;		/* flag: large integers supported */
#endif					/* COMPILER */

extern struct b_proc *op_tbl;   /* operators available for string invocation */
extern int op_tbl_sz;           /* number of operators in op_tbl */
extern int debug_info;		/* flag: debugging information is available */
extern int err_conv;		/* flag: error conversion is supported */
extern int dodump;		/* termination dump */
extern int line_info;		/* flag: line information is available */
extern char *file_name;		/* source file for current execution point */
extern int line_num;		/* line number for current execution point */
#ifndef MultiThread
extern int n_globals;		/* number of global variables */
extern int n_statics;		/* number of static variables */
extern struct b_coexpr *mainhead;	/* &main */
#endif				/* MultiThread */

#ifdef Polling
extern int pollctr;
#endif					/* Polling */

#ifdef Graphics
extern wbp wbndngs;
extern wcp wcntxts;
extern wsp wstates;
extern int GraphicsLeft, GraphicsUp, GraphicsRight, GraphicsDown;
extern int GraphicsHome, GraphicsPrior, GraphicsNext, GraphicsEnd;
extern int win_highwater, canvas_serial, context_serial;
#ifndef MultiThread
extern struct descrip kywd_xwin[];
extern struct descrip lastEventWin;
extern int lastEvFWidth, lastEvLeading, lastEvAscent;
extern struct descrip amperCol;
extern struct descrip amperRow;
extern struct descrip amperX;
extern struct descrip amperY;
extern struct descrip amperInterval;
extern uword xmod_control, xmod_shift, xmod_meta;
#endif					/* MultiThread */

extern stringint attribs[], drawops[];
#ifdef XWindows
extern struct _wdisplay * wdsplys;
extern stringint cursorsyms[];
#endif					/* XWindows */
#ifdef MSWindows
extern HINSTANCE mswinInstance;
extern int ncmdShow;
#endif					/* MSWindows */
#ifdef PresentationManager
/* this is the handle to the interpreter thread's anchor block */
extern HAB HInterpAnchorBlock;
extern HAB HMainAnchorBlock;
extern HMQ HInterpMessageQueue;
extern HMQ HMainMessageQueue;
extern lclIdentifier *LocalIds;
extern stringint siMixModes[];
extern stringint siLineTypes[];
extern stringint siColorNames[];
extern stringint siCursorSyms[];
extern LONG ScreenWidth;
extern LONG ScreenHeight;
extern LONG NumWindows;
extern LONG MaxPSColors;
extern colorEntry *ColorTable;
extern ULONG areaAttrs;
extern ULONG lineAttrs;
extern ULONG charAttrs;
extern ULONG imageAttrs;
#endif					/* PresentationManager */
#ifdef ConsoleWindow
extern FILE *ConsoleBinding, *flog;
extern unsigned long ConsoleFlags;
extern char ConsoleStringBuf[];
extern char *ConsoleStringBufPtr;
#endif					/* ConsoleWindow */
#endif					/* Graphics */

#if UNIX
#ifdef KeyboardFncs
extern int keyboard_error;
#endif					/* KeyboardFncs */
#endif					/* UNIX */

#ifdef EventMon
extern char typech[];
extern word oldsum;
extern struct descrip csetdesc;		/* cset descriptor */
extern struct descrip eventdesc;	/* event descriptor */
extern struct b_iproc mt_llist;
extern struct descrip rzerodesc;	/* real descriptor */
extern struct b_real realzero;		/* real zero block */

#endif				/* EventMon */

/****************************************   end ../h/rexterns.h   */


/****************************************  from ../h/proto.h:  */

/*
 * proto.h -- prototypes for library functions.
 */

/*
 * The following code is operating-system dependent. [@proto.01].
 *  Prototypes for library functions.
 */

#if PORT
Deliberate Syntax Error
#endif					/* PORT */

#if AMIGA
#if LATTICE
#include <dos.h>
#endif					/* LATTICE */
#if __SASC
/* GLOBAL and STATIC are defined in tparse.c as well as
in <exec/types.h>, which is included in <dos.h>. */
#undef GLOBAL        
#undef STATIC
#include <dos.h>
#undef GLOBAL        
#undef STATIC
/* From tparse.c */
# define GLOBAL 273
# define STATIC 286
#include <stdlib.h>
#endif                                  /* __SASC */


/****************************************  from /h/dproto.h:  */

/* [file not found] */

/****************************************   end /h/dproto.h   */
#endif					/* AMIGA */

#if ATARI_ST


/****************************************  from ../h/dproto.h:  */

/*
 * Temporary prototypes in the absence of system include files.
 */

#ifdef _Exit
novalue	_exit		Params((int));
#endif					/* _Exit */

#if AMIGA &&__SASC
novalue	abort		Params((noargs));
double	atof		Params((const char *));
long	atol		Params((const char *));
pointer	calloc		Params((unsigned,unsigned));
int	execv		Params((char *, char **));
int	execvp		Params((char *, char **));
novalue	exit		Params((int));
double	fmod		Params((double, double));
char	*getenv		Params((const char *));
void	*getmem		Params((unsigned));
char	*index		Params((char *s, int c));
pointer	malloc		Params((msize));
pointer	realloc		Params((pointer, unsigned));
char	*strchr		Params((const char *s, int i));
int	strcmp		Params((const char *s1, const char *s2));
char	*strcpy		Params((char *s1, const char *s2));
char	*strncat	Params((char *s1, const char *s2, size_t n));
int	strncmp		Params((const char *s1, const char *s2, size_t n));
char	*strncpy	Params((char *s1, const char *s2, size_t n));
#else                                  /* AMIGA && __SASC */

#ifndef MacGraph
novalue	abort		Params((noargs));
double	atof		Params((char *));
long	atol		Params((char *));
pointer	calloc		Params((unsigned,unsigned));
int	execv		Params((char *, char **));
int	execvp		Params((char *, char **));
novalue	exit		Params((int));
double	fmod		Params((double, double));
char	*getenv		Params((char *));
char	*getmem		Params((unsigned));
char	*index		Params((char *s, int c));
pointer	malloc		Params((msize));
pointer	realloc		Params((pointer, unsigned));
char	*strchr		Params((char *s, int i));
int	strcmp		Params((char *s1, char *s2));
char	*strcpy		Params((char *s1, char *s2));
#if VMS
#ifndef Graphics
char	*strncat	Params((char *s1, char *s2, int n));
int	strncmp		Params((char *s1, char *s2, int n));
char	*strncpy	Params((char *s1, char *s2, int n));
#endif					/* Graphics */
#else					/* VMS */
char	*strncat	Params((char *s1, char *s2, int n));
int	strncmp		Params((char *s1, char *s2, int n));
char	*strncpy	Params((char *s1, char *s2, int n));
#endif					/* VMS */
#endif					/* MacGraph */
#endif                                  /* AMIGA && __SASC */

char	*ecvt		Params((double value, int count, int *dec, int* sign));
char	*gcvt		Params((double number,int ndigit,char *buf));
double	pow		Params((double x, double y));
#ifdef SystemFnc
#if AMIGA && __SASC
int	system		Params((const char *));
#else
int	system		Params((char *));
#endif                                  /* AMIGA && __SASC */
#endif					/* SystemFnc */

/****************************************   end ../h/dproto.h   */
#endif					/* ATARI_ST */

#if ARM
#include <stdlib.h>
#include <string.h>

/* Our verson of unlink, which will fail if the named file does not exist */
extern int unlink (const char *name);

/* Force a cast of the function parameter to qsort() */
#define	qsort(base,n,size,cmp) \
	(qsort)((base),(n),(size),(int (*) (const void *, const void *))(cmp))
#endif					/* ARM */


#if MACINTOSH
#if MPW || THINK_C
#include <stdlib.h>
#include <string.h>
char    *strchar	Params((char *s, int i));
char	*ecvt		Params((double value, int count, int *dec, int* sign));
char	*gcvt		Params((double number, int ndigit, char *buf));
#else					/* MPW || THINK_C */


/****************************************  from ../h/dproto.h:  */

/*
 * Temporary prototypes in the absence of system include files.
 */

#ifdef _Exit
novalue	_exit		Params((int));
#endif					/* _Exit */

#if AMIGA &&__SASC
novalue	abort		Params((noargs));
double	atof		Params((const char *));
long	atol		Params((const char *));
pointer	calloc		Params((unsigned,unsigned));
int	execv		Params((char *, char **));
int	execvp		Params((char *, char **));
novalue	exit		Params((int));
double	fmod		Params((double, double));
char	*getenv		Params((const char *));
void	*getmem		Params((unsigned));
char	*index		Params((char *s, int c));
pointer	malloc		Params((msize));
pointer	realloc		Params((pointer, unsigned));
char	*strchr		Params((const char *s, int i));
int	strcmp		Params((const char *s1, const char *s2));
char	*strcpy		Params((char *s1, const char *s2));
char	*strncat	Params((char *s1, const char *s2, size_t n));
int	strncmp		Params((const char *s1, const char *s2, size_t n));
char	*strncpy	Params((char *s1, const char *s2, size_t n));
#else                                  /* AMIGA && __SASC */

#ifndef MacGraph
novalue	abort		Params((noargs));
double	atof		Params((char *));
long	atol		Params((char *));
pointer	calloc		Params((unsigned,unsigned));
int	execv		Params((char *, char **));
int	execvp		Params((char *, char **));
novalue	exit		Params((int));
double	fmod		Params((double, double));
char	*getenv		Params((char *));
char	*getmem		Params((unsigned));
char	*index		Params((char *s, int c));
pointer	malloc		Params((msize));
pointer	realloc		Params((pointer, unsigned));
char	*strchr		Params((char *s, int i));
int	strcmp		Params((char *s1, char *s2));
char	*strcpy		Params((char *s1, char *s2));
#if VMS
#ifndef Graphics
char	*strncat	Params((char *s1, char *s2, int n));
int	strncmp		Params((char *s1, char *s2, int n));
char	*strncpy	Params((char *s1, char *s2, int n));
#endif					/* Graphics */
#else					/* VMS */
char	*strncat	Params((char *s1, char *s2, int n));
int	strncmp		Params((char *s1, char *s2, int n));
char	*strncpy	Params((char *s1, char *s2, int n));
#endif					/* VMS */
#endif					/* MacGraph */
#endif                                  /* AMIGA && __SASC */

char	*ecvt		Params((double value, int count, int *dec, int* sign));
char	*gcvt		Params((double number,int ndigit,char *buf));
double	pow		Params((double x, double y));
#ifdef SystemFnc
#if AMIGA && __SASC
int	system		Params((const char *));
#else
int	system		Params((char *));
#endif                                  /* AMIGA && __SASC */
#endif					/* SystemFnc */

/****************************************   end ../h/dproto.h   */
#endif					/* MPW || THINK_C */
#endif					/* MACINTOSH */

#if MSDOS || OS2
#if HIGHC_386
#include <stdlib.h>
#include <string.h>
int	brk		Params((pointer p));
pointer sbrk		Params((msize n));
#endif					/* HIGHC_386 */
#if INTEL_386
#include <dos.h>
#include <stdlib.h>
#include <string.h>
int	brk		Params((pointer p));
#endif					/* INTEL_386 */
#if OS2_32
/* C Set/2 has gcvt #defined */
#if CSET2
#ifdef IconGcvt
#undef gcvt			/* gets rid of warning message */
#include <stdlib.h>
#undef gcvt
#define gcvt icon_gcvt
#else					/* IconGcvt */
#include <stdlib.h>
#endif					/* IconGcvt */
#else					/* C Set/2 */
#include <stdlib.h>
#endif					/* C Set/2 */
#include <string.h>
#endif					/* OS2_32 */
#if MICROSOFT || TURBO || ZTC_386 || WATCOM || NT || BORLAND_286 || BORLAND_386 || SCCX_MX
#include <dos.h>
#ifdef StandardLib
#include <string.h>
#include <stdlib.h>
#else					/* StandardLib */


/****************************************  from ../h/dproto.h:  */

/*
 * Temporary prototypes in the absence of system include files.
 */

#ifdef _Exit
novalue	_exit		Params((int));
#endif					/* _Exit */

#if AMIGA &&__SASC
novalue	abort		Params((noargs));
double	atof		Params((const char *));
long	atol		Params((const char *));
pointer	calloc		Params((unsigned,unsigned));
int	execv		Params((char *, char **));
int	execvp		Params((char *, char **));
novalue	exit		Params((int));
double	fmod		Params((double, double));
char	*getenv		Params((const char *));
void	*getmem		Params((unsigned));
char	*index		Params((char *s, int c));
pointer	malloc		Params((msize));
pointer	realloc		Params((pointer, unsigned));
char	*strchr		Params((const char *s, int i));
int	strcmp		Params((const char *s1, const char *s2));
char	*strcpy		Params((char *s1, const char *s2));
char	*strncat	Params((char *s1, const char *s2, size_t n));
int	strncmp		Params((const char *s1, const char *s2, size_t n));
char	*strncpy	Params((char *s1, const char *s2, size_t n));
#else                                  /* AMIGA && __SASC */

#ifndef MacGraph
novalue	abort		Params((noargs));
double	atof		Params((char *));
long	atol		Params((char *));
pointer	calloc		Params((unsigned,unsigned));
int	execv		Params((char *, char **));
int	execvp		Params((char *, char **));
novalue	exit		Params((int));
double	fmod		Params((double, double));
char	*getenv		Params((char *));
char	*getmem		Params((unsigned));
char	*index		Params((char *s, int c));
pointer	malloc		Params((msize));
pointer	realloc		Params((pointer, unsigned));
char	*strchr		Params((char *s, int i));
int	strcmp		Params((char *s1, char *s2));
char	*strcpy		Params((char *s1, char *s2));
#if VMS
#ifndef Graphics
char	*strncat	Params((char *s1, char *s2, int n));
int	strncmp		Params((char *s1, char *s2, int n));
char	*strncpy	Params((char *s1, char *s2, int n));
#endif					/* Graphics */
#else					/* VMS */
char	*strncat	Params((char *s1, char *s2, int n));
int	strncmp		Params((char *s1, char *s2, int n));
char	*strncpy	Params((char *s1, char *s2, int n));
#endif					/* VMS */
#endif					/* MacGraph */
#endif                                  /* AMIGA && __SASC */

char	*ecvt		Params((double value, int count, int *dec, int* sign));
char	*gcvt		Params((double number,int ndigit,char *buf));
double	pow		Params((double x, double y));
#ifdef SystemFnc
#if AMIGA && __SASC
int	system		Params((const char *));
#else
int	system		Params((char *));
#endif                                  /* AMIGA && __SASC */
#endif					/* SystemFnc */

/****************************************   end ../h/dproto.h   */
#endif					/* StandardLib */
#endif					/* MICROSOFT || TURBO || ZTC_386 ... */
#endif					/* MSDOS || OS2 */

#if UNIX
#ifdef StandardLib
#include <stdlib.h>
#include <string.h>
/*
 * index() is not part of the standard library.  We use no prototype
 *  because various systems disagree on the details, and they complain.
 */
#ifndef index
char	*index	();
#endif					/* index */
#else					/* StandardLib */


/****************************************  from ../h/dproto.h:  */

/*
 * Temporary prototypes in the absence of system include files.
 */

#ifdef _Exit
novalue	_exit		Params((int));
#endif					/* _Exit */

#if AMIGA &&__SASC
novalue	abort		Params((noargs));
double	atof		Params((const char *));
long	atol		Params((const char *));
pointer	calloc		Params((unsigned,unsigned));
int	execv		Params((char *, char **));
int	execvp		Params((char *, char **));
novalue	exit		Params((int));
double	fmod		Params((double, double));
char	*getenv		Params((const char *));
void	*getmem		Params((unsigned));
char	*index		Params((char *s, int c));
pointer	malloc		Params((msize));
pointer	realloc		Params((pointer, unsigned));
char	*strchr		Params((const char *s, int i));
int	strcmp		Params((const char *s1, const char *s2));
char	*strcpy		Params((char *s1, const char *s2));
char	*strncat	Params((char *s1, const char *s2, size_t n));
int	strncmp		Params((const char *s1, const char *s2, size_t n));
char	*strncpy	Params((char *s1, const char *s2, size_t n));
#else                                  /* AMIGA && __SASC */

#ifndef MacGraph
novalue	abort		Params((noargs));
double	atof		Params((char *));
long	atol		Params((char *));
pointer	calloc		Params((unsigned,unsigned));
int	execv		Params((char *, char **));
int	execvp		Params((char *, char **));
novalue	exit		Params((int));
double	fmod		Params((double, double));
char	*getenv		Params((char *));
char	*getmem		Params((unsigned));
char	*index		Params((char *s, int c));
pointer	malloc		Params((msize));
pointer	realloc		Params((pointer, unsigned));
char	*strchr		Params((char *s, int i));
int	strcmp		Params((char *s1, char *s2));
char	*strcpy		Params((char *s1, char *s2));
#if VMS
#ifndef Graphics
char	*strncat	Params((char *s1, char *s2, int n));
int	strncmp		Params((char *s1, char *s2, int n));
char	*strncpy	Params((char *s1, char *s2, int n));
#endif					/* Graphics */
#else					/* VMS */
char	*strncat	Params((char *s1, char *s2, int n));
int	strncmp		Params((char *s1, char *s2, int n));
char	*strncpy	Params((char *s1, char *s2, int n));
#endif					/* VMS */
#endif					/* MacGraph */
#endif                                  /* AMIGA && __SASC */

char	*ecvt		Params((double value, int count, int *dec, int* sign));
char	*gcvt		Params((double number,int ndigit,char *buf));
double	pow		Params((double x, double y));
#ifdef SystemFnc
#if AMIGA && __SASC
int	system		Params((const char *));
#else
int	system		Params((char *));
#endif                                  /* AMIGA && __SASC */
#endif					/* SystemFnc */

/****************************************   end ../h/dproto.h   */
#endif					/* StandardLib */
#endif					/* UNIX */

#if VM || MVS
/* ****  TEMPORARY *** */
novalue abort           Params((noargs));
double  atof            Params((char *));
long    atol            Params((char *));
pointer calloc          Params((unsigned,unsigned));
novalue exit            Params((int));
char    *getenv         Params((char *));
pointer malloc          Params((msize));
pointer realloc         Params((pointer, unsigned));
#ifdef StandardC
#include <string.h>
#else                                   /* StandardC */
char    *strchr         Params((char *s, int i));
int     strcmp          Params((char *s1, char *s2));
char    *strcpy         Params((char *s1, char *s2));
char    *strncat        Params((char *s1, char *s2, int n));
int     strncmp         Params((char *s1, char *s2, int n));
char    *strncpy        Params((char *s1, char *s2, int n));
char	*ecvt		Params((double value, int count, int *dec, int* sign));
double	pow		Params((double x, double y));
#ifdef SystemFnc
int	system		Params((char *));
#endif					/* SystemFnc */
#endif                                  /* StandardC */
#endif                                  /* VM || MVS */

#if VMS


/****************************************  from ../h/dproto.h:  */

/*
 * Temporary prototypes in the absence of system include files.
 */

#ifdef _Exit
novalue	_exit		Params((int));
#endif					/* _Exit */

#if AMIGA &&__SASC
novalue	abort		Params((noargs));
double	atof		Params((const char *));
long	atol		Params((const char *));
pointer	calloc		Params((unsigned,unsigned));
int	execv		Params((char *, char **));
int	execvp		Params((char *, char **));
novalue	exit		Params((int));
double	fmod		Params((double, double));
char	*getenv		Params((const char *));
void	*getmem		Params((unsigned));
char	*index		Params((char *s, int c));
pointer	malloc		Params((msize));
pointer	realloc		Params((pointer, unsigned));
char	*strchr		Params((const char *s, int i));
int	strcmp		Params((const char *s1, const char *s2));
char	*strcpy		Params((char *s1, const char *s2));
char	*strncat	Params((char *s1, const char *s2, size_t n));
int	strncmp		Params((const char *s1, const char *s2, size_t n));
char	*strncpy	Params((char *s1, const char *s2, size_t n));
#else                                  /* AMIGA && __SASC */

#ifndef MacGraph
novalue	abort		Params((noargs));
double	atof		Params((char *));
long	atol		Params((char *));
pointer	calloc		Params((unsigned,unsigned));
int	execv		Params((char *, char **));
int	execvp		Params((char *, char **));
novalue	exit		Params((int));
double	fmod		Params((double, double));
char	*getenv		Params((char *));
char	*getmem		Params((unsigned));
char	*index		Params((char *s, int c));
pointer	malloc		Params((msize));
pointer	realloc		Params((pointer, unsigned));
char	*strchr		Params((char *s, int i));
int	strcmp		Params((char *s1, char *s2));
char	*strcpy		Params((char *s1, char *s2));
#if VMS
#ifndef Graphics
char	*strncat	Params((char *s1, char *s2, int n));
int	strncmp		Params((char *s1, char *s2, int n));
char	*strncpy	Params((char *s1, char *s2, int n));
#endif					/* Graphics */
#else					/* VMS */
char	*strncat	Params((char *s1, char *s2, int n));
int	strncmp		Params((char *s1, char *s2, int n));
char	*strncpy	Params((char *s1, char *s2, int n));
#endif					/* VMS */
#endif					/* MacGraph */
#endif                                  /* AMIGA && __SASC */

char	*ecvt		Params((double value, int count, int *dec, int* sign));
char	*gcvt		Params((double number,int ndigit,char *buf));
double	pow		Params((double x, double y));
#ifdef SystemFnc
#if AMIGA && __SASC
int	system		Params((const char *));
#else
int	system		Params((char *));
#endif                                  /* AMIGA && __SASC */
#endif					/* SystemFnc */

/****************************************   end ../h/dproto.h   */
#endif					/* VMS */

/*
 * End of operating-system specific code.
 */

#ifdef KeyboardFncs
int	getch		Params((noargs));
int	getche		Params((noargs));
int	kbhit		Params((noargs));
#endif					/* KeyboardFncs */

#ifdef MSWindows
#if BORLAND_286
#define lstrlen longstrlen
#include <ctype.h>
#endif
#endif


/****************************************  from ../h/mproto.h:  */

/*
 * mproto.h -- prototypes for functions common to several modules.
 */

char	*db_string	Params((noargs));
char	*makename	Params((char *dest,char *d,char *name,char *e));
char	*pathfind	Params((char *buf, char *path, char *name, char *extn));
char	*salloc	Params((char *s));
char	*spec_str	Params((char *s));
char	*str_install	Params((struct str_buf *sbuf));
int	cmp_pre	Params((char *pre1, char *pre2));
int	db_open	Params((char *s, char **lrgintflg));
int	db_tbl	Params((char *section, struct implement **tbl));
int	ppch	Params((noargs));
int	ppinit	Params((char *fname, int m4flag));
int	prt_i_str	Params((FILE *f, char *s, int len));
int	redirerr	Params((char *p));
int	smatch	Params((char *s,char *t));
int	tonum	Params((int c));
long	longwrite	Params((char *s,long len,FILE *file));
long	millisec	Params((noargs));
novalue clear_sbuf	Params((struct str_buf *sbuf));
novalue cset_init	Params((FILE *f, unsigned short *bv));
novalue	db_chstr	Params((char *s1, char *s2));
novalue	db_close	Params((noargs));
novalue	db_code	Params((struct implement *ip));
novalue	db_dscrd	Params((struct implement *ip));
novalue	db_err1	Params((int fatal, char *s1));
novalue	db_err2	Params((int fatal, char *s1, char *s2));
novalue free_stbl	Params((noargs));
novalue	getctime	Params((char *sbuf));
novalue	getitime	Params((struct cal_time *ct));
novalue	id_comment	Params((FILE *f));
novalue	init_sbuf	Params((struct str_buf *sbuf));
novalue	init_str	Params((noargs));
novalue	new_sbuf	Params((struct str_buf *sbuf));
novalue	nxt_pre Params((char *pre, char *nxt, int n));
novalue	ppdef	Params((char *name, char *value));
novalue	ppecho	Params((noargs));
pointer	alloc	Params((unsigned int n));
struct	fileparts *fparse	Params((char *s));
struct	il_code *new_il	Params((int il_type, int size));
struct	implement	*db_ilkup    Params((char *id, struct implement **tbl));
struct	implement	*db_impl     Params((int oper_typ));
unsigned short   *bitvect    Params((char *image, int len));

#ifndef SysMem
pointer	memcopy		Params((char *to, char* from, word n));
pointer	memfill		Params((char *to, int con, word n));
#endif					/* SysMem */

#ifndef SysOpt
#ifndef Linux
int	getopt	Params((int nargs, char **nargv, char *ostr));
#endif					/* Linux */
#endif					/* SysOpt */

#if IntBits == 16
long	lstrlen	Params((char *s));
novalue	lqsort	Params((char *base, int nel, int width, int (*cmp)()));
#endif					/* IntBits == 16 */

#define NewStruct(type)\
   (struct type *)alloc((unsigned int) sizeof (struct type))

/****************************************   end ../h/mproto.h   */

#ifdef ConsoleWindow
int Consolefprintf(FILE *file, char *format, ...);
int Consoleprintf(char *format, ...);
int Consoleputc(int c, FILE *file);
int Consolefflush(FILE *file);
#endif					/* ConsoleWindow */
/*
 * These must be after prototypes to avoid clash with system
 * prototypes.
 */

#if IntBits == 16
#define sbrk lsbrk
#define strlen lstrlen
#define qsort lqsort
#endif					/* IntBits == 16 */

/****************************************   end ../h/proto.h   */


/****************************************  from ../h/rproto.h:  */

/*
 * Prototypes for run-time functions.
 */

/*
 * Prototypes common to the compiler and interpreter.
 */

int	interp	Params((int fsig,dptr cargp));
novalue	EVInit	Params((noargs));
word	add	Params((word a,word b));
word	mul	Params((word a,word b));
word	sub	Params((word a,word b));
int	dp_pnmcmp	Params((struct pstrnm *pne,dptr dp));
int	getvar	Params((char *s,dptr vp));
word	neg	Params((word a));
int	pstrnmcmp	Params((struct pstrnm *a,struct pstrnm *b));
novalue	xmfree	Params((noargs));
novalue	icon_init	Params((char *name, int *argcp, char *argv[]));
novalue	inttrap	Params((noargs));
char	*alcstr			Params((char *s,word slen));
char	*findfile		Params((word *ipc));
char	*reserve		Params((int region, word nbytes));
int	activate	Params((dptr val, struct b_coexpr *ncp, dptr result));
int	anycmp			Params((dptr dp1,dptr dp2));
int	bfunc			Params((noargs));
int	co_chng	Params((struct b_coexpr *ncp, struct descrip *valloc, struct descrip *rsltloc, int swtch_typ, int first));
int	cnv_c_dbl		Params((dptr s, double *d));
int	cnv_c_int		Params((dptr s, C_integer *d));
int	cnv_c_str		Params((dptr s, dptr d));
int	cnv_cset		Params((dptr s, dptr d));
int	cnv_ec_int		Params((dptr s, C_integer *d));
int	cnv_eint		Params((dptr s, dptr d));
int	cnv_int			Params((dptr s, dptr d));
int	cnv_real		Params((dptr s, dptr d));
int	cnv_str			Params((dptr s, dptr d));
int	cnv_tcset		Params((struct b_cset *cbuf, dptr s, dptr d));
int	cnv_tstr		Params((char *sbuf, dptr s, dptr d));
int	coswitch		Params((word *old, word *new, int first));
int	cplist			Params((dptr dp1,dptr dp2,word i,word j));
novalue	cpslots			Params((dptr dp1,dptr slotptr,word i, word j));
int	cpset			Params((dptr dp1,dptr dp2,word size));
int	csetcmp			Params((unsigned int *cs1,unsigned int *cs2));
int	cssize			Params((dptr dp));
int	def_c_dbl		Params((dptr s, double df, double * d));
int	def_c_int		Params((dptr s, C_integer df, C_integer * d));
int	def_c_str		Params((dptr s, char * df, dptr d));
int	def_cset		Params((dptr s, struct b_cset * df, dptr d));
int	def_ec_int		Params((dptr s, C_integer df, C_integer * d));
int	def_eint		Params((dptr s, C_integer df, dptr d));
int	def_int			Params((dptr s, C_integer df, dptr d));
int	def_real		Params((dptr s, double df, dptr d));
int	def_str			Params((dptr s, dptr df, dptr d));
int	def_tcset Params((struct b_cset *cbuf,dptr s,struct b_cset *df,dptr d));
int	def_tstr		Params((char *sbuf, dptr s, dptr df, dptr d));
int	doasgn			Params((dptr dp1,dptr dp2));
int	doimage			Params((int c,int q));
int	equiv			Params((dptr dp1,dptr dp2));
int	err			Params((noargs));
int	findcol			Params((word *ipc));
int	findipc			Params((int line));
int	findline		Params((word *ipc));
int	findloc			Params((word *ipc));
int	idelay			Params((int n)); 
int	lexcmp			Params((dptr dp1,dptr dp2));
#ifdef MSWindows
#ifdef FAttrib
#if UNIX
char *  make_mode		Params((mode_t st_mode));
#endif					/* UNIX */
#if MSDOS
char *  make_mode		Params((unsigned short st_mode));
int	strcasecmp		Params((char *s1, char *s2));
int	strncasecmp		Params((char *s1, char *s2, int n));
#endif					/* MSDOS */
#endif					/* FAttrib */
#endif					/* MSWindows */
int	numcmp			Params((dptr dp1,dptr dp2,dptr dp3));
int	pushact		Params((struct b_coexpr *ce, struct b_coexpr *actvtr));
int	putstr			Params((FILE *f,dptr d));
int	qtos	Params((dptr dp,char *sbuf));
int     radix	Params((int sign, register int r, register char *s,
                       register char *end_s, union numeric *result));
novalue	addmem 	Params((struct b_set *ps,struct b_selem *pe, union block **pl));
novalue	c_exit			Params((int i));
novalue	co_init			Params((struct b_coexpr *sblkp));
novalue	coacttrace	Params((struct b_coexpr *ccp,struct b_coexpr *ncp));
novalue	cofailtrace	Params((struct b_coexpr *ccp,struct b_coexpr *ncp));
novalue	corettrace	Params((struct b_coexpr *ccp,struct b_coexpr *ncp));
novalue	datainit		Params((noargs));
novalue	deallocate		Params((union block *bp));
novalue	drunerr			Params((int n, double v));
novalue	dumpact			Params((struct b_coexpr *ce));
novalue	env_int	Params((char *name,word *variable,int non_neg, uword limit));
novalue	error			Params((char *s1, char *s2));
novalue	err_msg			Params((int n, dptr v));
novalue	fatalerr		Params((int n,dptr v));
novalue	fpetrap			Params((noargs));
novalue	iconhost		Params((char *hostname));
novalue	irunerr			Params((int n, C_integer v));
novalue	mksubs	Params((dptr var,dptr val,word i,word j, dptr result));
novalue	outimage		Params((FILE *f,dptr dp,int noimage));
#ifdef MultiThread
novalue	resolve			Params((struct progstate *pstate));
#else					/* MultiThread */
novalue	resolve			Params((noargs));
#endif					/* MultiThread */
novalue retderef		Params((dptr valp, word *low, word *high));
novalue	segvtrap		Params((noargs));
novalue	stkdump			Params((int));
novalue	syserr			Params((char *s));
struct	astkblk *alcactiv	Params((noargs));
struct	b_coexpr *popact	Params((struct b_coexpr *ce));
struct	b_coexpr *topact	Params((struct b_coexpr *ce));
struct	b_cset *alccset		Params((noargs));
struct	b_file *alcfile		Params((FILE *fd,int status,dptr name));
struct	b_lelem *alclstb	Params((uword nslots,uword first,uword nused));
struct	b_list *alclist		Params((uword size));
struct	b_real *alcreal		Params((double val));
struct	b_selem *alcselem	Params((dptr mbr,uword hn));
struct	b_slots *alcsegment	Params((word nslots));
struct	b_telem *alctelem	Params((noargs));
struct	b_tvtbl *alctvtbl	Params((dptr tbl,dptr ref,uword hashnum));
struct	b_proc	*bi_strprc	Params((dptr s, C_integer arity));
union block *alchash		Params((int tcode));
union block *hgfirst	Params((union block *bp, struct hgstate *state));
union block *hgnext	Params((union block*b,struct hgstate*s,union block *e));
union block *hmake	Params((int tcode,word nslots,word nelem));
union block **memb	Params((union block *pb,dptr x,uword hn, int *res));
union block **hchain		Params((union block *pb,uword hn));
uword	hash			Params((dptr dp));
word	cvpos			Params((long pos,long len));
word	longread		Params((char *s,int width,long len,FILE *fname));
word	prescan			Params((dptr d));

int	c_get		Params((struct b_list *hp, struct descrip *res));
void	c_put		Params((struct descrip *l, struct descrip *val));


#if !HIGHC_386
int	dup2		Params((int h1, int h2));
#endif					/* !HIGHC_386 */

char *qsearch	Params((char *key,char *base,int nel,int width, int (*cmp)()));

/*
 * Temporary fix
 */

#if ARM
FILE *popen
#endif					/* ARM */

#if ATARI_ST
char	*sbrk			Params((int incr));
#endif                                  /* ATARI_ST */

#if HIGHC_386
int	brk		Params((char *p));
#endif					/* HIGHC_386 */

#if MACINTOSH
#if MPW
char	*brk			Params((char *addr));
char	*sbrk			Params((int incr));
novalue	free			Params((char* addr));
#endif					/* MPW */
#endif					/* MACINTOSH */

#if MVS || VM
#if SASC
#define brk(x) sbrk(((char *)(x))-sbrk(0))
char    *sbrk                   Params((int incr));
#endif					/* SASC */
novalue free                    Params((void* addr));
#endif                                  /* MVS || VM */

#if UNIX || VMS
/*
 * We use old-style declarations instead of prototypes here to avoid conflicts
 *  with system definitions.  For example, some <stdio.h> files don't declare
 *  popen; some declare it with char * args; and some specify const char *.
 */
int	chdir	();
FILE	*popen	();
#ifdef ExecImages
char	*sbrk	();
#endif					/* ExecImages */
#endif                                  /* UNIX || VMS */

/* the following is just a stub in implementations without Coexpr */
novalue new_context		Params((int fsig, dptr cargp));

#ifdef Graphics
/*
 * portable graphics routines in rwindow.r and rwinrsc.r
 */
wcp	alc_context		Params((wbp w));
wbp	alc_wbinding		Params((noargs));
wsp	alc_winstate		Params((noargs));
int	atobool			Params((char *s));
void	c_push			Params((dptr l,dptr val));  /* in fstruct.r */
int	docircles		Params((wbp w, int argc, dptr argv, int fill));
novalue	drawCurve		Params((wbp w, XPoint *p, int n));
char	*evquesub		Params((wbp w, int i));
wsp	getactivewindow		Params((void));
novalue	genCurve		Params((wbp w, XPoint *p, int n, void (*h)()));
int	getpattern		Params((wbp w, char *answer));
struct	palentry *palsetup	Params((int p));
int	palnum			Params((dptr d));
int	parsecolor		Params((wbp w, char *s, long *r, long *g, long *b));
int	parsefont		Params((char *s, char *fam, int *sty, int *sz));
int	parsegeometry		Params((char *buf, SHORT *x, SHORT *y, SHORT *width, SHORT *height));
int	parsepattern		Params((char *s, int len, int *width, int *nbits, C_integer *bits));
novalue	qevent			Params((wsp ws, dptr e, int x, int y, uword t, long f));
int	readGIF			Params((char *fname, int p, struct imgdata *d));
int	rectargs		Params((wbp w, int argc, dptr argv, int i,
				   word *px, word *py, word *pw, word *ph));
char	*rgbkey			Params((int p, double r, double g, double b));
int	writeGIF		Params((wbp w, char *filename,
				  int x, int y, int width, int height));
int	setsize			Params((wbp w, char *s));
char	*si_i2s			Params((siptr sip, int i));
int	si_s2i			Params((siptr sip, char *s));
int	ulcmp			Params((pointer p1, pointer p2));
int	wattrib			Params((wbp w, char *s, long len, dptr answer, char *abuf));
int	wgetche			Params((wbp w, dptr res));
int	wgetchne		Params((wbp w, dptr res));
int	wgetevent		Params((wbp w, dptr res));
int	wgetstrg		Params((char *s, long maxlen, FILE *f));
novalue	wgoto			Params((wbp w, int row, int col));
int	wlongread		Params((char *s, int elsize, int nelem, FILE *f));
novalue	wputstr			Params((wbp w, char *s, int len));
int	xyrowcol		Params((dptr dx));

/*
 * graphics implementation routines supplied for each platform
 * (excluding those defined as macros for X-windows)
 */
int	SetPattern		Params((wbp w, char *name, int len));
int	SetPatternBits		Params((wbp w, int width, C_integer *bits, int nbits));
int	allowresize		Params((wbp w, int on));
int	blimage			Params((wbp w, int x, int y, int width, int hgt,
				  int ch, unsigned char *s, word len));
wcp	clone_context		Params((wbp w));
int	copyArea		Params((wbp w, wbp w2, int x, int y, int width, int height, int x2, int y2));
int	do_config		Params((wbp w, int status));
int	dumpimage		Params((wbp w, char *filename, unsigned int x, unsigned int y, unsigned int width, unsigned int height));
novalue	eraseArea		Params((wbp w, int x, int y, int width, int height));
novalue	fillrectangles		Params((wbp w, XRectangle *recs, int nrecs));
novalue	free_binding		Params((wbp w));
novalue	free_context		Params((wcp wc));
novalue	free_mutable		Params((wbp w, int mute_index));
int	free_window		Params((wsp ws));
novalue	freecolor		Params((wbp w, char *s));
char	*get_mutable_name	Params((wbp w, int mute_index));
novalue	getbg			Params((wbp w, char *answer));
novalue	getcanvas		Params((wbp w, char *s));
int	getdefault		Params((wbp w, char *prog, char *opt, char *answer));
novalue	getdisplay		Params((wbp w, char *answer));
novalue	getdrawop		Params((wbp w, char *answer));
novalue	getfg			Params((wbp w, char *answer));
novalue	getfntnam		Params((wbp w, char *answer));
novalue	geticonic		Params((wbp w, char *answer));
int	geticonpos		Params((wbp w, char *s));
int	getimstr		Params((wbp w, int x, int y, int width, int hgt,
				  struct palentry *ptbl, unsigned char *data));
novalue	getlinestyle		Params((wbp w, char *answer));
int	getpixel_init		Params((wbp w, struct imgmem *imem));
int	getpixel_term		Params((wbp w, struct imgmem *imem));
int	getpixel		Params((wbp w, int x, int y, long *rv, char *s, struct imgmem *imem));
novalue	getpointername		Params((wbp w, char *answer));
int	getpos			Params((wbp w));
int	getvisual		Params((wbp w, char *answer));
int	isetfg			Params((wbp w, int fg));
int	isetbg			Params((wbp w, int bg));
int	lowerWindow		Params((wbp w));
int	mutable_color		Params((wbp w, dptr argv, int ac, int *retval));
int	nativecolor		Params((wbp w, char *s, long *r, long *g, long *b));

#ifndef PresentationManager
/* Exclude those functions defined as macros */
int	pollevent		Params((noargs));
novalue wflush			Params((wbp w));
#endif					/* PresentationManager */

int	query_pointer		Params((wbp w, XPoint *pp));
int	query_rootpointer	Params((XPoint *pp));
int	raiseWindow		Params((wbp w));
int	readimage		Params((wbp w, char *filename, int x, int y, int *status));
int	rebind			Params((wbp w, wbp w2));
int	set_mutable		Params((wbp w, int i, char *s));
int	setbg			Params((wbp w, char *s));
int	setcanvas		Params((wbp w, char *s));
novalue	setclip			Params((wbp w));
int	setcursor		Params((wbp w, int on));
int	setdisplay		Params((wbp w, char *s));
int	setdrawop		Params((wbp w, char *val));
int	setfg			Params((wbp w, char *s));
int	setfillstyle		Params((wbp w, char *s));
int	setfont			Params((wbp w, char **s));
int	setgamma		Params((wbp w, double gamma));
int	setgeometry		Params((wbp w, char *geo));
int	setheight		Params((wbp w, SHORT new_height));
int	seticonicstate		Params((wbp w, char *s));
int	seticonlabel		Params((wbp w, char *val));
int	seticonpos		Params((wbp w, char *s));
int	setimage		Params((wbp w, char *val));
int	setleading		Params((wbp w, int i));
int	setlinestyle		Params((wbp w, char *s));
int	setlinewidth		Params((wbp w, LONG linewid));
int	setpointer		Params((wbp w, char *val));
int	setwidth		Params((wbp w, SHORT new_width));
int	setwindowlabel		Params((wbp w, char *val));
int	strimage		Params((wbp w, int x, int y, int width,
				  int height, struct palentry *e,
				  unsigned char *s, word len, int on_icon));
novalue	toggle_fgbg		Params((wbp w));
int	walert			Params((wbp w, int volume));
novalue	warpPointer		Params((wbp w, int x, int y));
int	wclose			Params((wbp w));
novalue	wflush			Params((wbp w));
int	wgetq			Params((wbp w, dptr res));
FILE	*wopen			Params((char *windowname, struct b_list *hp, dptr attr, int n, int *err_index));
int	wputc			Params((int ci, wbp w));
novalue	wsync			Params((wbp w));
novalue	xdis			Params((wbp w, char *s, int n));

#ifdef ConsoleWindow
FILE* OpenConsole		Params((void));
int   Consolefprintf		(FILE *file, char *format, ...);
int   Consoleputc		(int c, FILE *file);
int   Consolefflush		(FILE *file);
#endif					/* ConsoleWindow */

#ifdef MacGraph
/*
 * Implementation routines specific to Macintosh
 */
void hidecrsr (wsp ws);
void showcrsr (wsp ws);
void UpdateCursorPos(wsp ws, wcp wc);
void GetEvents (void);
void DoEvent (EventRecord *eventPtr);
void DoMouseUp (EventRecord *eventPtr);
void DoMouseDown (EventRecord *eventPtr);
void DoGrowWindow (EventRecord *eventPtr, WindowPtr whichWindow);
void GetLocUpdateRgn (WindowPtr whichWindow, RgnHandle localRgn);
void DoKey (EventRecord *eventPtr, WindowPtr whichWindow);
void EventLoop(void);
void HandleMenuChoice (long menuChoice);
void HandleAppleChoice (short item);
void HandleFileChoice (short item);
void HandleOptionsChoice (short item);
void DoUpdate (EventRecord *eventPtr);
void DoActivate (WindowPtr whichWindow, Boolean becomingActive);
void RedrawWindow (WindowPtr whichWindow);
const int ParseCmdLineStr (char *s, char *t, char **argv);
pascal OSErr SetDialogDefaultItem (DialogPtr theDialog, short newItem) = { 0x303C, 0x0304, 0xAA68 };
pascal OSErr SetDialogCancelItem (DialogPtr theDialog, short newItem) = { 0x303C, 0x0305, 0xAA68 };
pascal OSErr SetDialogTracksCursor (DialogPtr theDialog, Boolean tracks) = { 0x303C, 0x0306, 0xAA68 };

void drawarcs(wbinding *wb, XArc *arcs, int narcs);
void drawlines(wbinding *wb, XPoint *points, int npoints);  
void drawpoints(wbinding *wb, XPoint *points, int npoints);  
void drawrectangles(wbp wb, XRectangle *recs, int nrecs);
void drawsegments(wbinding *wb, XSegment *segs, int nsegs);
void fillarcs(wbp wb, XArc *arcs, int narcs);
void fillpolygon(wbp wb, XPoint *pts, int npts);  
#endif					/* MacGraph */

#ifdef XWindows
/*
 * Implementation routines specific to X-Windows
 */
novalue	unsetclip		Params((wbp w));
novalue	moveWindow		Params((wbp w, int x, int y));
int	moveResizeWindow	Params((wbp w, int x, int y, int width, int height));
int	resetfg			Params((wbp w));
int	setfgrgb		Params((wbp w, int r, int g, int b));
int	setbgrgb		Params((wbp w, int r, int g, int b));

XColor	xcolor			Params((wbp w, LinearColor clr));
LinearColor	lcolor		Params((wbp w, XColor color));
int	pixmap_open		Params((wbp w, dptr attribs, int argc));
int	pixmap_init		Params((wbp w));
int	remap			Params((wbp w, int x, int y));
int	seticonimage		Params((wbp w, dptr dp));
novalue	makeIcon		Params((wbp w, int x, int y));
int	translate_key_event	Params((XKeyEvent *k1, char *s, KeySym *k2));
int	handle_misc		Params((wdp display, wbp w));
wdp	alc_display		Params((char *s));
novalue	free_display		Params((wdp wd));
wfp	alc_font		Params((wbp w, char **s));
wfp	tryfont			Params((wbp w, char *s));
wclrp	alc_rgb			Params((wbp w, char *s, unsigned int r, unsigned int g, unsigned int b, int is_iconcolor));
int	alc_centry		Params((wdp wd));
wclrp	alc_color		Params((wbp w, char *s));
novalue	copy_colors		Params((wbp w1, wbp w2));
novalue	free_xcolor		Params((wbp w, unsigned long c));
novalue	free_xcolors		Params((wbp w, int extent));
int	go_virtual		Params((wbp w));
int	resizePixmap		Params((wbp w, int width, int height));
#endif					/* XWindows */

#ifdef MSWindows
/*
 * Implementation routines specific to MS Windows
 */
int playmedia			Params((wbp w, char *s));
char *nativecolordialog		Params((wbp w,long r,long g, long b,char *s));
int nativefontdialog		Params((wbp w, char *buf, int flags, int fheight));
char *nativeopendialog		Params((wbp w,char *s1,char *s2, char *s3,int i, int j));
char *nativeselectdialog	Params((wbp w,struct b_list *,char *s));
char *nativesavedialog		Params((wbp w,char *s1,char *s2, char *s3,int i, int j));
HFONT mkfont		Params((char *s));
int sysTextWidth	Params((wbp w, char *s, int n));
int sysFontHeight	Params((wbp w));
int mswinsystem		Params((char *s));
void UpdateCursorPos	Params((wsp ws, wcp wc));
LRESULT_CALLBACK WndProc	Params((HWND, UINT, WPARAM, LPARAM));
HDC CreateWinDC		Params((wbp));
HDC CreatePixDC		Params((wbp, HDC));
HBITMAP loadimage	Params((wbp wb, char *filename, unsigned int *width,
			unsigned int *height, int atorigin, int *status));
void wfreersc();
int getdepth(wbp w);
HBITMAP CreateBitmapFromData(char *data);
int resizePixmap(wbp w, int width, int height);
int textWidth(wbp w, char *s, int n);
int	seticonimage		Params((wbp w, dptr dp));
int devicecaps(wbp w, int i);
void fillarcs(wbp wb, XArc *arcs, int narcs);
void drawarcs(wbp wb, XArc *arcs, int narcs);
void drawlines(wbinding *wb, XPoint *points, int npoints);
void drawpoints(wbinding *wb, XPoint *points, int npoints);
void drawrectangles(wbp wb, XRectangle *recs, int nrecs);
void fillpolygon(wbp w, XPoint *pts, int npts);
void drawsegments(wbinding *wb, XSegment *segs, int nsegs);
void drawstrng(wbinding *wb, int x, int y, char *s, int slen);
novalue unsetclip(wbp w);

#endif					/* MSWindows */

#ifdef PresentationManager
/*
 * Implementation routines specific to OS/2 Presentation Manager
 */
wsp ObtainEvents(wsp ws, SHORT blockflag, ULONG messg, QMSG *msg);
void InterpThreadStartup(void *args);
void InterpThreadShutdown(void);
void DestroyWindow(wsp ws);
void LoadDefAttrs(wbinding *wb, wsp ws, wcp wc);
void ResizeBackingBitmap(wsp ws, SHORT x, SHORT y);
int  moveResizeWindow(wbp w,int x, int y, int width, int height);
novalue moveWindow(wbp w, int x, int y);
int  resizeWindow(wbp w,int width,int height);
int SetNewBitPattern(wcp wc, PBYTE bits);
int LoadFont(wbp wb, char *family, LONG attr, ULONG fontsize);
void FreeIdTable(void);
void FreeLocalID(LONG id);

/* -- not needed because of macro definitions
void SetCharContext(wbp wb, wsp ws, wcp wc);
void SetAreaContext(wbp wb, wsp ws, wcp wc);
void SetLineContext(wbp wb, wsp ws, wcp wc);
void SetImageContext(wbp wb, wsp ws, wcp wc);
   -- */

void SetClipContext(wbp wb, wsp ws, wcp wc);
void UnsetContext(wcp wc, void (*f)(wcp, wsp));
void UCharContext(wcp wc, wsp ws);
void ULineContext(wcp wc, wsp ws);
void UAreaContext(wcp wc, wsp ws);
void UImageContext(wcp wc, wsp ws);
void UClipContext(wcp wc, wsp ws);
void UAllContext(wcp wc, wsp ws);
void drawpoints(wbp wb, XPoint *pts, int npts);
void drawsegments(wbp wb, XSegment *segs, int nsegs);
void drawstrng(wbp wb, int x, int y, char *str, int slen);
void drawarcs(wbp w, XArc *arcs, int narcs);
void drawlines(wbp wb, XPoint *pts, int npts);
void drawrectangles(wbp wb, XRectangle *recs, int nrecs);
int dumpimage(wbp wb, char *filename, int x, int y, int width, int height);
void fillpolygon(wbp wb, XPoint *pts, int npts);
HBITMAP loadimage(wbp wb, char *filename, int *width, int *height);
void InitializeIdTable(void);
void InitializeColorTable(void);
void FreeColorTable(void);
LONG GetColorIndex(char *buf, double gamma);
void AddLocalIdToWindow(wsp ws, LONG id);
void ReleaseLocalId(LONG id);
void ReleaseColor(LONG indx);
void ColorInitPS(wbp wb);
void GetColorName(LONG indx, char *buf, int len);
void EnsureColorAvailable(LONG indx);
int GetTextWidth(wbp wb, char *text, int len);
int AddWindowDep(wsp ws, wcp wc);
int AddContextDep(wsp ws, wcp wc);
FILE *PMOpenConsole(void);
void UpdateCursorConfig(wsp ws, wcp wc);
void UpdateCursorPos(wsp ws, wcp wc);

#endif					/* PresentationManager */

#endif					/* Graphics */


#if UNIX
#ifdef KeyboardFncs
int getch(), getche(), kbhit();
#endif					/* KeyboardFncs */
#endif					/* UNIX */

#ifdef LargeInts
struct	b_bignum *alcbignum	Params((word n));
word	bigradix		Params((int sign, int r, char *s, char *x, union numeric *result));
double	bigtoreal		Params((dptr da));
int	realtobig		Params((dptr da, dptr dx));
int	bigtos			Params((dptr da, dptr dx));
novalue	bigprint		Params((FILE *f, dptr da));
int	cpbignum		Params((dptr da, dptr db));
int	bigadd			Params((dptr da, dptr db, dptr dx));
int	bigsub			Params((dptr da, dptr db, dptr dx));
int	bigmul			Params((dptr da, dptr db, dptr dx));
int	bigdiv			Params((dptr da, dptr db, dptr dx));
int	bigmod			Params((dptr da, dptr db, dptr dx));
int	bigneg			Params((dptr da, dptr dx));
int	bigpow			Params((dptr da, dptr db, dptr dx));
int	bigand			Params((dptr da, dptr db, dptr dx));
int	bigor			Params((dptr da, dptr db, dptr dx));
int	bigxor			Params((dptr da, dptr db, dptr dx));
int	bigshift		Params((dptr da, dptr db, dptr dx));
word	bigcmp			Params((dptr da, dptr db));
int	bigrand			Params((dptr da, dptr dx));
#endif					/* LargeInts */


/*
 * Prototypes for the run-time system.
 */

C_integer	iipow	Params((C_integer n1, C_integer n2));
int	bfunc	Params((noargs));
int	collect	Params((int region));
int	cvcset	Params((dptr dp,int * *cs,int *csbuf));
int	cvnum	Params((dptr dp,union numeric *result));
int	cvreal	Params((dptr dp,double *r));
int	eq	Params((dptr dp1,dptr dp2));
int	fixtrap	Params((noargs));
int	getimage	Params((dptr dp1, dptr dp2));
int	get_name	Params((dptr dp1, dptr dp2));
int	getstrg	Params((char *buf, int maxi, struct b_file *fbp));
int	mkreal	Params((double r,dptr dp));
int	nthcmp	Params((dptr d1,dptr d2));
void	nxttab	Params((C_integer *col, dptr *tablst, dptr endlst, C_integer *last, C_integer *interval));
int	order	Params((dptr dp));
int	printable	Params((int c));
int	ripow	Params((double r, C_integer n, dptr rslt));
int	sig_rsm	Params((noargs));
int	subs_asgn	Params((dptr dest, const dptr src));
int	trcmp3	Params((struct dpair *dp1,struct dpair *dp2));
int	trefcmp	Params((dptr d1,dptr d2));
int	tvalcmp	Params((dptr d1,dptr d2));
int	tvcmp4	Params((struct dpair *dp1,struct dpair *dp2));
long	ckadd	Params((long i, long j));
long	ckmul	Params((long i, long j));
long	cksub	Params((long i, long j));
novalue	cmd_line	Params((int argc, char **argv, dptr rslt));
novalue	cotrace	Params((struct b_coexpr *ccp, struct b_coexpr *ncp, int swtch_typ, dptr valloc));
novalue	deref	Params((dptr dp1, dptr dp2));
novalue	envset	Params((noargs));
novalue	hgrow	Params((union block *bp));
novalue	hshrink	Params((union block *bp));
novalue	init	Params((char *name, int *argcp, char *argv[], int trc_init));
novalue	rtos			Params((double n,dptr dp,char *s));
int	tvtbl_asgn		Params((dptr dest, const dptr src));
novalue	varargs	Params((dptr argp, int nargs, dptr rslt));
#ifdef MultiThread
struct	b_coexpr *alccoexp	Params((long icodesize, long stacksize));
#else					/* MultiThread */
struct	b_coexpr *alccoexp	Params((noargs));
#endif					/* MultiThread */
struct	b_coexpr *create   Params((continuation fnc, struct b_proc *p, int ntemps, int wrk_size));
struct	b_external *alcextrnl	Params((int n));
struct	b_record *alcrecd	Params((int nflds,union block *recptr));
struct	b_proc *strprc	Params((dptr s, C_integer arity));
struct	b_tvsubs *alcsubs	Params((word len,word pos,dptr var));

#ifdef EventMon
novalue EVAsgn	Params((dptr dx));
#endif					/* EventMon */

#ifdef MultiThread
struct b_coexpr *loadicode Params((char *name, struct b_file *theInput,
				   struct b_file *theOutput,
				   struct b_file *theError,
				   C_integer bs, C_integer ss, C_integer stk));
novalue actparent Params((int eventcode));
int mt_activate   Params((dptr tvalp, dptr rslt, struct b_coexpr *ncp));
#endif					/* MultiThread */

#if COMPILER
novalue	tracebk	Params((struct p_frame *lcl_pfp,dptr argp));
int	invoke	Params((int nargs,dptr args, dptr rslt, continuation cont));
int	xdisp	Params((struct p_frame *fp,dptr dp,int count, FILE *f));
novalue	atrace	Params((noargs));
novalue	ctrace	Params((noargs));
novalue	failtrace	Params((noargs));
novalue	rtrace	Params((noargs));
novalue	strace	Params((noargs));
novalue	initalloc	Params((noargs));
struct	b_refresh *alcrefresh	Params((int na,int nl, int nt, int wk_sz));
#else					/* COMPILER */

#define Fargs dptr cargp

novalue	tracebk	Params((struct pf_marker *lcl_pfp,dptr argp));
int	invoke	Params((int nargs, dptr *cargs, int *n));
int	xdisp	Params((struct pf_marker *fp,dptr dp,int count, FILE *f));

int	Obscan			Params((int nargs,Fargs));
int	Ocreate			Params((word *entryp,Fargs));
int	Oescan			Params((int nargs,Fargs));
int	Ofield			Params((int nargs,Fargs));
int	Olimit			Params((int nargs,Fargs));
int	Ollist			Params((int nargs,Fargs));
int	Omkrec			Params((int nargs,Fargs));
novalue	atrace	Params((dptr dp));
novalue	ctrace	Params((dptr dp, int nargs, dptr arg));
novalue	failtrace	Params((dptr dp));
novalue	rtrace	Params((dptr dp, dptr rval));
novalue	strace	Params((dptr dp, dptr rval));
#ifdef MultiThread
novalue	initalloc	Params((word codesize, struct progstate *p));
#else					/* MultiThread */
novalue	initalloc	Params((word codesize));
#endif					/* MultiThread */
struct	b_refresh *alcrefresh	Params((word *e, int nl, int nt));

#ifdef ExternalFunctions
dptr	extcall			Params((dptr x, int nargs, int *signal));
#endif					/* ExternalFunctions */

#endif					/* COMPILER */

/****************************************   end ../h/rproto.h   */
#endif					/* RT_DOT_H */

/****************************************   end ..\h/rt.h   */
