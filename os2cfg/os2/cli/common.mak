CC	= icc
CFLAGS	= -G5 -O
AS	= masm
ASFLAGS = /Ml

MAKE = make

OBJS=	long.obj getopt.obj memory.obj time.obj filepart.obj identify.obj strtbl.obj rtdb.obj \
	mlocal.obj literals.obj rswitch.obj alloc.obj long.obj getopt.obj memory.obj time.obj \
	save.obj rswitch.obj redirerr.obj xwindow.obj dlrgint.obj ipp.obj

all: $(OBJS)

common: 	doincl.obj patchstr.obj
		$(CC) $(LDFLAGS) -Fe doincl.exe doincl.obj
		$(CC) $(LDFLAGS) -Fe patchstr.exe patchstr.obj
		doincl -o ..\..\bin/rt.h ..\h/rt.h
		copy patchstr.exe ..\..\bin


$(OBJS): ../h/define.h ../h/config.h ../h/cstructs.h ../h/mproto.h  ../h/path.h\
	  ../h/typedefs.h ../h/proto.h ../h/cpuconf.h

identify.obj: ../h/version.h

ipp.obj: ../h/features.h

literals.obj: ../h/esctab.h

rtdb.obj: ../h/version.h icontype.h

dlrgint.obj: ../h/rproto.h ../h/rexterns.h ../h/rmacros.h ../h/rstructs.h

xwindow.obj: ../h/graphics.h ../h/xwin.h

rswitch.obj:	rswitch.asm
	$(AS) $(ASFLAGS) rswitch.asm;


#  The following section is needed if changes are made to the Icon grammar,
#  but it is not run as part of the normal installation process.  If it is
#  needed, it is run by changing ../icont/Makefile and/or ../iconc/Makefile;
#  see the comments there for details.	icont must be in the search path
#  for this section to work.

gfiles: 		lextab.h yacctok.h fixgram pscript

lextab.h yacctok.h:	tokens.txt op.txt mktoktab
			./mktoktab

mktoktab:		mktoktab.icn
			icont -s mktoktab.icn

fixgram:		fixgram.icn
			icont -s fixgram.icn

pscript:		pscript.icn
			icont -s pscript.icn



#  The following section is commented out because it does not need to be
#  performed unless changes are made to typespec.txt. Such changes
#  and are not part of the installation process.  However, if the
#  distribution files are unloaded in a fashion such that their dates
#  are not set properly, the following section would be attempted.
#
#  Note that if any changes are made to the file mentioned above, the
#  comment characters at the beginning of the following lines should be
#  removed.
#
#  Note that icont must be on your search path for this.
#
#
#icontype.h: typespec.txt typespec
#	typespec <typespec.txt >icontype.h
#
#typespec: typespec.icn
#	icont typespec
