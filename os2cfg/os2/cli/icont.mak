CFLAGS	= -DICONT -O -G5
CC	= icc

MAKE=make

TRANS=	trans.obj tcode.obj tlex.obj lnklist.obj tparse.obj tsym.obj tmem.obj tree.obj

LINKR=	link.obj lglob.obj lcode.obj llex.obj lmem.obj lsym.obj opcode.obj

OBJS=	tmain.obj util.obj tlocal.obj $(TRANS) $(LINKR)

COBJS=	../common/long.obj ../common/getopt.obj ../common/alloc.obj \
	../common/filepart.obj ../common/strtbl.obj ../common/ipp.obj

ICOBJS= long.obj getopt.obj alloc.obj filepart.obj strtbl.obj ipp.obj

PGMS=	icont.exe

all:		$(PGMS)

icont.exe:	$(OBJS)
		$(CC) -GM -Fe $@ $(OBJS) $(COBJS)
		copy icont.exe ..\..\bin

$(OBJS) ixhdr.obj: ../h/define.h ../h/config.h ../h/cpuconf.h ../h/gsupport.h \
		   ../h/proto.h ../h/mproto.h ../h/dproto.h \
		   ../h/typedefs.h ../h/cstructs.h tproto.h

$(COBJS):	../h/mproto.h

tmain.obj:	  tglobals.h ../h/path.h
util.obj:	  tglobals.h tree.h ../h/fdefs.h

# translator files
trans.obj:	  tglobals.h tsym.h ttoken.h tree.h ../h/version.h ../h/kdefs.h
lnklist.obj:	  lfile.h
tparse.obj:	  ../h/lexdef.h tglobals.h tsym.h tree.h keyword.h
tcode.obj:	  tglobals.h tsym.h ttoken.h tree.h
tlex.obj:	  ../h/lexdef.h ../h/parserr.h ttoken.h tree.h ../h/esctab.h \
		   ../common/lextab.h ../common/yylex.h ../common/error.h
tmem.obj:	  tglobals.h tsym.h tree.h
tree.obj:	  tree.h
tsym.obj:	  tglobals.h tsym.h ttoken.h lfile.h keyword.h ../h/kdefs.h

# linker files
$(LINKR):	link.h lfile.h ../h/rt.h ../h/sys.h ../h/monitor.h \
		   ../h/rstructs.h ../h/rmacros.h ../h/rexterns.h

link.obj:	  tglobals.h ../h/header.h hdr.h
lcode.obj:	  tglobals.h opcode.h keyword.h ../h/header.h \
			../h/opdefs.h ../h/version.h
lglob.obj:	  tglobals.h opcode.h ../h/opdefs.h ../h/version.h
llex.obj:	  tglobals.h opcode.h ../h/opdefs.h
lmem.obj:	  tglobals.h
lsym.obj:	  tglobals.h
opcode.obj:	  opcode.h ../h/opdefs.h

hdr.h:
	echo /**/ > hdr.h

#  The following sections are commented out because they do not need to be
#  performed unless changes are made to cgrammar.c, ../h/grammar.h,
#  ../common/tokens.txt, or ../common/op.txt.  Such changes involve
#  modifications to the syntax of Icon and are not part of the installation
#  process. However, if the distribution files are unloaded in a fashion
#  such that their dates are not set properly, the following sections would
#  be attempted.
#
#  Note that if any changes are made to the files mentioned above, the comment
#  characters at the beginning of the following lines should be removed.
#  icont must be on your search path for these actions to work.
#
#../common/lextab.h ../common/yacctok.h ../common/fixgram ../common/pscript: \
#			../common/tokens.txt ../common/op.txt
#		cd ../common; make gfiles
#
#tparse.c ttoken.h:	tgram.g trash ../common/pscript
## expect 218 shift/reduce conflicts
#		yacc -d tgram.g
#		./trash <y.tab.c | ../common/pscript >tparse.c
#		mv y.tab.h ttoken.h
#		rm -f y.tab.c
#
#tgram.g:	tgrammar.c ../h/define.h ../h/grammar.h \
#			../common/yacctok.h ../common/fixgram
#		$(CC) -E -C tgrammar.c | ../common/fixgram >tgram.g
#
#../h/kdefs.h keyword.h:	../runtime/keyword.r mkkwd
#		./mkkwd <../runtime/keyword.r
#
#trash: 	trash.icn
#		icont -s trash.icn
#
#mkkwd: 	mkkwd.icn
#		icont -s mkkwd.icn
