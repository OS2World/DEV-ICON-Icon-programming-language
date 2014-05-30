
CFLAGS	= -Ge- -G5 -O
CC	= icc
MAKE=make

HDRS = ../h/define.h ../h/config.h ../h/typedefs.h ../h/monitor.h\
	  ../h/proto.h ../h/cstructs.h ../h/cpuconf.h ../h/grttin.h\
	  ../h/rmacros.h ../h/rexterns.h ../h/rstructs.h \
	  ../h/rproto.h ../h/mproto.h ../h/sys.h

GRAPHICSHDRS = ../h/graphics.h ../h/xwin.h

all:	stub.exe mticonx.exe mticonx.dll

####################################################################
#
# Make entries for iconx
#

XOBJS=	xcnv.obj xdata.obj xdef.obj xerrmsg.obj xextcall.obj xfconv.obj xfload.obj xfmath.obj \
	xfmisc.obj xfmonitr.obj xfscan.obj xfstr.obj xfstranl.obj xfstruct.obj xfsys.obj \
	xfwindow.obj ximain.obj ximisc.obj xinit.obj xinterp.obj xinvoke.obj \
	xistart.obj xkeyword.obj xlmisc.obj xoarith.obj xoasgn.obj xocat.obj xocomp.obj \
	xomisc.obj xoref.obj xoset.obj xovalue.obj xralc.obj xrcoexpr.obj xrcomp.obj \
	xrdebug.obj xrlocal.obj xrlrgint.obj xrmemmgt.obj xrmisc.obj xrstruct.obj xrsys.obj \
	xrwinrsc.obj xrgfxsys.obj xrwinsys.obj xrwindow.obj xfxtra.obj

COBJS=	../common/long.obj ../common/memory.obj ../common/time.obj ../common/save.obj \
	../common/rswitch.obj ../common/redirerr.obj ../common/xwindow.obj \
	../common/alloc.obj

ICOBJS= long.obj memory.obj time.obj save.obj rswitch.obj redirerr.obj xwindow.obj alloc.obj

OBJS=	$(XOBJS) $(COBJS)


mticonx.dll: $(OBJS)
    icc $(CFLAGS) -Ge- -Fe mticonx.dll $(OBJS) mticonx.def
    copy mticonx.dll ..\..\bin\mticonx.dll

mticonx.lib: mticonx.def
    implib mticonx.lib mticonx.def
    copy mticonx.lib ..\..\bin\mticonx.lib

mticonx.exe: mticonx.lib stub.c stub.def
    icc $(CFLAGS) -Fm -Fe mticonx.exe -Ge+ stub.c mticonx.lib stub.def
    copy mticonx.exe ..\..\bin

stub.exe: stub.c mticonx.lib # ..\..\bin\mticont.exe
    icc $(CFLAGS) -DOS2STUB=1 -Fm -Ge+ -Fe stub.exe stub.c mticonx.lib stub.def
    rc stub.rc ..\..\bin\mticont.exe

xcnv.obj: cnv.r $(HDRS)
	..\..\bin\rtt -x cnv.r
	$(CC) $(CFLAGS) -c xcnv.c
	del xcnv.c

xdata.obj: data.r $(HDRS) ../h/kdefs.h ../h/fdefs.h ../h/odefs.h
	..\..\bin\rtt -x data.r
	$(CC) $(CFLAGS) -c xdata.c
	del xdata.c

xdef.obj: def.r $(HDRS)
	..\..\bin\rtt -x def.r
	$(CC) $(CFLAGS) -c xdef.c
	del xdef.c

xerrmsg.obj: errmsg.r $(HDRS)
	..\..\bin\rtt -x errmsg.r
	$(CC) $(CFLAGS) -c xerrmsg.c
	del xerrmsg.c

xextcall.obj: extcall.r $(HDRS)
	..\..\bin\rtt -x extcall.r
	$(CC) $(CFLAGS) -c xextcall.c
	del xextcall.c

xfconv.obj: fconv.r $(HDRS)
	..\..\bin\rtt -x fconv.r
	$(CC) $(CFLAGS) -c xfconv.c
	del xfconv.c

xfload.obj: fload.r $(HDRS)
	..\..\bin\rtt -x fload.r
	$(CC) $(CFLAGS) -c xfload.c
	del xfload.c

xfmath.obj: fmath.r $(HDRS)
	..\..\bin\rtt -x fmath.r
	$(CC) $(CFLAGS) -c xfmath.c
	del xfmath.c

xfmisc.obj: fmisc.r $(HDRS)
	..\..\bin\rtt -x fmisc.r
	$(CC) $(CFLAGS) -c xfmisc.c
	del xfmisc.c

xfmonitr.obj: fmonitr.r $(HDRS)
	..\..\bin\rtt -x fmonitr.r
	$(CC) $(CFLAGS) -c xfmonitr.c
	del xfmonitr.c

xfscan.obj: fscan.r $(HDRS)
	..\..\bin\rtt -x fscan.r
	$(CC) $(CFLAGS) -c xfscan.c
	del xfscan.c

xfstr.obj: fstr.r $(HDRS)
	..\..\bin\rtt -x fstr.r
	$(CC) $(CFLAGS) -c xfstr.c
	del xfstr.c

xfstranl.obj: fstranl.r $(HDRS)
	..\..\bin\rtt -x fstranl.r
	$(CC) $(CFLAGS) -c xfstranl.c
	del xfstranl.c

xfstruct.obj: fstruct.r $(HDRS)
	..\..\bin\rtt -x fstruct.r
	$(CC) $(CFLAGS) -c xfstruct.c
	del xfstruct.c

xfsys.obj: fsys.r $(HDRS)
	..\..\bin\rtt -x fsys.r
	$(CC) $(CFLAGS) -c xfsys.c
	del xfsys.c

xfwindow.obj: fwindow.r $(HDRS) $(GRAPHICSHDRS)
	..\..\bin\rtt -x fwindow.r
	$(CC) $(CFLAGS) -c xfwindow.c
	del xfwindow.c

ximain.obj: imain.r $(HDRS)
	..\..\bin\rtt -x imain.r
	$(CC) $(CFLAGS) -c ximain.c
	del ximain.c

ximisc.obj: imisc.r $(HDRS)
	..\..\bin\rtt -x imisc.r
	$(CC) $(CFLAGS) -c ximisc.c
	del ximisc.c

xinit.obj: init.r $(HDRS) ../h/odefs.h ../h/version.h
	..\..\bin\rtt -x init.r
	$(CC) $(CFLAGS) -c xinit.c
	del xinit.c

xinterp.obj: interp.r $(HDRS)
	..\..\bin\rtt -x interp.r
	$(CC) $(CFLAGS) -c xinterp.c
	del xinterp.c

xinvoke.obj: invoke.r $(HDRS)
	..\..\bin\rtt -x invoke.r
	$(CC) $(CFLAGS) -c xinvoke.c
	del xinvoke.c

xistart.obj: istart.r $(HDRS)
	..\..\bin\rtt -x istart.r
	$(CC) $(CFLAGS) -c xistart.c
	del xistart.c


xkeyword.obj: keyword.r $(HDRS) ../h/features.h ../h/version.h
	..\..\bin\rtt -x keyword.r
	$(CC) $(CFLAGS) -c xkeyword.c
	del xkeyword.c

xlmisc.obj: lmisc.r $(HDRS)
	..\..\bin\rtt -x lmisc.r
	$(CC) $(CFLAGS) -c xlmisc.c
	del xlmisc.c

xoarith.obj: oarith.r $(HDRS)
	..\..\bin\rtt -x oarith.r
	$(CC) $(CFLAGS) -c xoarith.c
	del xoarith.c

xoasgn.obj: oasgn.r $(HDRS)
	..\..\bin\rtt -x oasgn.r
	$(CC) $(CFLAGS) -c xoasgn.c
	del xoasgn.c

xocat.obj: ocat.r $(HDRS)
	..\..\bin\rtt -x ocat.r
	$(CC) $(CFLAGS) -c xocat.c
	del xocat.c

xocomp.obj: ocomp.r $(HDRS)
	..\..\bin\rtt -x ocomp.r
	$(CC) $(CFLAGS) -c xocomp.c
	del xocomp.c

xomisc.obj: omisc.r $(HDRS)
	..\..\bin\rtt -x omisc.r
	$(CC) $(CFLAGS) -c xomisc.c
	del xomisc.c

xoref.obj: oref.r $(HDRS)
	..\..\bin\rtt -x oref.r
	$(CC) $(CFLAGS) -c xoref.c
	del xoref.c

xoset.obj: oset.r $(HDRS)
	..\..\bin\rtt -x oset.r
	$(CC) $(CFLAGS) -c xoset.c
	del xoset.c

xovalue.obj: ovalue.r $(HDRS)
	..\..\bin\rtt -x ovalue.r
	$(CC) $(CFLAGS) -c xovalue.c
	del xovalue.c

xralc.obj: ralc.r $(HDRS)
	..\..\bin\rtt -x ralc.r
	$(CC) $(CFLAGS) -c xralc.c
	del xralc.c

xrcoexpr.obj: rcoexpr.r $(HDRS)
	..\..\bin\rtt -x rcoexpr.r
	$(CC) $(CFLAGS) -c xrcoexpr.c
	del xrcoexpr.c

xrcomp.obj: rcomp.r $(HDRS)
	..\..\bin\rtt -x rcomp.r
	$(CC) $(CFLAGS) -c xrcomp.c
	del xrcomp.c

xrdebug.obj: rdebug.r $(HDRS)
	..\..\bin\rtt -x rdebug.r
	$(CC) $(CFLAGS) -c xrdebug.c
	del xrdebug.c

xrlocal.obj: rlocal.r $(HDRS)
	..\..\bin\rtt -x rlocal.r
	$(CC) $(CFLAGS) -c xrlocal.c
	del xrlocal.c

xrlrgint.obj: rlrgint.r $(HDRS)
	..\..\bin\rtt -x rlrgint.r
	$(CC) $(CFLAGS) -c xrlrgint.c
	del xrlrgint.c

xrmemmgt.obj: rmemmgt.r $(HDRS)
	..\..\bin\rtt -x rmemmgt.r
	$(CC) $(CFLAGS) -c xrmemmgt.c
	del xrmemmgt.c

xrmisc.obj: rmisc.r $(HDRS)
	..\..\bin\rtt -x rmisc.r
	$(CC) $(CFLAGS) -c xrmisc.c
	del xrmisc.c

xrstruct.obj: rstruct.r $(HDRS)
	..\..\bin\rtt -x rstruct.r
	$(CC) $(CFLAGS) -c xrstruct.c
	del xrstruct.c

xrsys.obj: rsys.r $(HDRS)
	..\..\bin\rtt -x rsys.r
	$(CC) $(CFLAGS) -c xrsys.c
	del xrsys.c

xrwinrsc.obj: rwinrsc.r $(HDRS) $(GRAPHICSHDRS) rxrsc.ri
	..\..\bin\rtt -x rwinrsc.r
	$(CC) $(CFLAGS) -c xrwinrsc.c
	del xrwinrsc.c

xrgfxsys.obj: rgfxsys.r $(HDRS) $(GRAPHICSHDRS)
	..\..\bin\rtt -x rgfxsys.r
	$(CC) $(CFLAGS) -c xrgfxsys.c
	del xrgfxsys.c

xrwinsys.obj: rwinsys.r $(HDRS) $(GRAPHICSHDRS) rxwin.ri
	..\..\bin\rtt -x rwinsys.r
	$(CC) $(CFLAGS) -c xrwinsys.c
	del xrwinsys.c

xrwindow.obj: rwindow.r $(HDRS) $(GRAPHICSHDRS)
	..\..\bin\rtt -x rwindow.r
	$(CC) $(CFLAGS) -c xrwindow.c
	del xrwindow.c

xfxtra.obj: fxtra.r $(HDRS)
	..\..\bin\rtt -x fxtra.r
	$(CC) $(CFLAGS) -c xfxtra.c
	del xfxtra.c


####################################################################
#
# Make entries for the compiler library
#

comp_all:
	cd ../common; $(MAKE) $(ICOBJS) dlrgint.obj
	$(MAKE) db_lib

db_lib: rt.db rt.a

#
# if rt.db is missing or any header files have been updated, recreate
# rt.db from scratch along with the .obj files.
#
rt.db: $(HDRS)
	del -f rt.db rt.a
	..\..\bin\rtt cnv.r data.r def.r errmsg.r fconv.r fload.r fmath.r\
	  fmisc.r fmonitr.r fscan.r fstr.r fstranl.r fstruct.r\
	  fsys.r fwindow.r init.r invoke.r keyword.r\
	  lmisc.r oarith.r oasgn.r ocat.r ocomp.r omisc.r\
	  oref.r oset.r ovalue.r ralc.r rcoexpr.r rcomp.r\
	  rdebug.r rlrgint.r rlocal.r rmemmgt.r rmisc.r rstruct.r\
	  rsys.r rwinrsc.r rgfxsys.r rwinsys.r rwindow.r fxtra.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rt.a: ../common/rswitch.obj ../common/long.obj ../common/time.obj ../common/memory.obj \
      cnv.obj data.obj def.obj errmsg.obj fconv.obj fload.obj fmath.obj fmisc.obj fmonitr.obj \
      fscan.obj fstr.obj fstranl.obj fstruct.obj fsys.obj fwindow.obj init.obj invoke.obj \
      keyword.obj lmisc.obj oarith.obj oasgn.obj ocat.obj ocomp.obj omisc.obj oref.obj oset.obj \
      ovalue.obj ralc.obj rcoexpr.obj rcomp.obj rdebug.obj rlrgint.obj rlocal.obj rmemmgt.obj \
      rmisc.obj rstruct.obj rsys.obj rwinrsc.obj rgfxsys.obj rwinsys.obj fxtra.obj \
      rwindow.obj ../common/xwindow.obj ../common/alloc.obj
	del -f rt.a
	ar qc rt.a `sed 's/$$/.o/' rttfull.lst` ../common/rswitch.obj \
	    ../common/long.obj ../common/time.obj ../common/memory.obj \
	    ../common/xwindow.obj ../common/alloc.obj
	cp rt.a rt.db ../common/dlrgint.obj ../../bin
	-(test -f ../../NoRanlib) || (ranlib ../../bin/rt.a)

cnv.obj: cnv.r $(HDRS)
	..\..\bin\rtt cnv.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

data.obj: data.r $(HDRS)
	..\..\bin\rtt data.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

def.obj: def.r $(HDRS)
	..\..\bin\rtt def.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

errmsg.obj: errmsg.r $(HDRS)
	..\..\bin\rtt errmsg.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

fconv.obj: fconv.r $(HDRS)
	..\..\bin\rtt fconv.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

fload.obj: fload.r $(HDRS)
	..\..\bin\rtt fload.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

fmath.obj: fmath.r $(HDRS)
	..\..\bin\rtt fmath.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

fmisc.obj: fmisc.r $(HDRS)
	..\..\bin\rtt fmisc.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

fmonitr.obj: fmonitr.r $(HDRS)
	..\..\bin\rtt fmonitr.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

fscan.obj: fscan.r $(HDRS)
	..\..\bin\rtt fscan.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

fstr.obj: fstr.r $(HDRS)
	..\..\bin\rtt fstr.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

fstranl.obj: fstranl.r $(HDRS)
	..\..\bin\rtt fstranl.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

fstruct.obj: fstruct.r $(HDRS)
	..\..\bin\rtt fstruct.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

fsys.obj: fsys.r $(HDRS)
	..\..\bin\rtt fsys.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

fwindow.obj: fwindow.r $(HDRS) $(GRAPHICSHDRS)
	..\..\bin\rtt fwindow.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

init.obj: init.r $(HDRS)
	..\..\bin\rtt init.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

invoke.obj: invoke.r $(HDRS)
	..\..\bin\rtt invoke.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

keyword.obj: keyword.r $(HDRS)
	..\..\bin\rtt keyword.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

lmisc.obj: lmisc.r $(HDRS)
	..\..\bin\rtt lmisc.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

oarith.obj: oarith.r $(HDRS)
	..\..\bin\rtt oarith.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

oasgn.obj: oasgn.r $(HDRS)
	..\..\bin\rtt oasgn.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

ocat.obj: ocat.r $(HDRS)
	..\..\bin\rtt ocat.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

ocomp.obj: ocomp.r $(HDRS)
	..\..\bin\rtt ocomp.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

omisc.obj: omisc.r $(HDRS)
	..\..\bin\rtt omisc.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

oref.obj: oref.r $(HDRS)
	..\..\bin\rtt oref.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

oset.obj: oset.r $(HDRS)
	..\..\bin\rtt oset.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

ovalue.obj: ovalue.r $(HDRS)
	..\..\bin\rtt ovalue.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

ralc.obj: ralc.r $(HDRS)
	..\..\bin\rtt ralc.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rcoexpr.obj: rcoexpr.r $(HDRS)
	..\..\bin\rtt rcoexpr.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rcomp.obj: rcomp.r $(HDRS)
	..\..\bin\rtt rcomp.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rdebug.obj: rdebug.r $(HDRS)
	..\..\bin\rtt rdebug.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rlrgint.obj: rlrgint.r $(HDRS)
	..\..\bin\rtt rlrgint.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rlocal.obj: rlocal.r $(HDRS)
	..\..\bin\rtt rlocal.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rmemmgt.obj: rmemmgt.r $(HDRS)
	..\..\bin\rtt rmemmgt.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rmisc.obj: rmisc.r $(HDRS)
	..\..\bin\rtt rmisc.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rstruct.obj: rstruct.r $(HDRS)
	..\..\bin\rtt rstruct.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rsys.obj: rsys.r $(HDRS)
	..\..\bin\rtt rsys.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rwinrsc.obj: rwinrsc.r $(HDRS) $(GRAPHICSHDRS)
	..\..\bin\rtt rwinrsc.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rgfxsys.obj: rgfxsys.r $(HDRS) $(GRAPHICSHDRS)
	..\..\bin\rtt rgfxsys.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rwinsys.obj: rwinsys.r $(HDRS) $(GRAPHICSHDRS)
	..\..\bin\rtt rwinsys.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

rwindow.obj: rwindow.r $(HDRS) $(GRAPHICSHDRS)
	..\..\bin\rtt rwindow.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`

fxtra.obj: fxtra.r $(HDRS)
	..\..\bin\rtt fxtra.r
	$(CC) $(CFLAGS) -c `sed 's/$$/.c/' rttcur.lst`
	del `sed 's/$$/.c/' rttcur.lst`
