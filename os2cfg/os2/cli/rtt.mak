CC	= icc
# C Set/2 2.0 compiler bug requires -Ti or else runtime error.
CFLAGS	= -O -DRttx -DRTT -DTokDotH -G5

MAKE = make

ROBJS = rttparse.obj rttmain.obj rttlex.obj rttsym.obj rttnode.obj rttout.obj rttmisc.obj \
	  rttdb.obj rttinlin.obj rttilc.obj

PP_DIR = ../preproc/
P_DOT_H = $(PP_DIR)preproc.h $(PP_DIR)pproto.h ltoken.h ../h/mproto.h \
	../h/define.h ../h/config.h ../h/typedefs.h ../h/proto.h \
	../h/cstructs.h ../h/cpuconf.h

POBJS =  $(PP_DIR)pout.obj \
	 $(PP_DIR)pchars.obj \
	 $(PP_DIR)perr.obj   \
	 $(PP_DIR)pmem.obj   \
	 $(PP_DIR)bldtok.obj \
	 $(PP_DIR)macro.obj  \
	 $(PP_DIR)preproc.obj \
	 $(PP_DIR)evaluate.obj \
	 $(PP_DIR)files.obj    \
	 $(PP_DIR)gettok.obj   \
	 $(PP_DIR)pinit.obj

COBJS = ../common/getopt.obj ../common/time.obj ../common/filepart.obj \
	../common/memory.obj ../common/identify.obj ../common/strtbl.obj \
	../common/rtdb.obj ../common/mlocal.obj ../common/literals.obj	\
	../common/alloc.obj

ICOBJS= getopt.obj time.obj filepart.obj memory.obj identify.obj strtbl.obj rtdb.obj \
	  mlocal.obj literals.obj alloc.obj

OBJ = $(ROBJS) $(POBJS) $(COBJS)

rtt.exe: $(ROBJS)
	$(CC) -Fe rtt.exe $(OBJ) rtt.def
	copy rtt.exe  ..\..\bin

$(ROBJS): rtt.h rtt1.h rttproto.h $(P_DOT_H)

rttdb.obj: ../h/version.h
rttparse.obj: ../h/gsupport.h ../h/path.h ../h/config.h ../h/cstructs.h  \
	../h/proto.h ../h/typedefs.h ../h/cpuconf.h ../h/define.h
rttmain.obj: ../h/path.h












#
# The following entry is commented out because it is not normally
# necessary to recreate rttparse.c and ltoken.h unless the grammar
# in rttgram.y for the run-time langauge is changed. Recreating these
# files is not normally a part of the installation process. Note that
# on some systems, yacc may not have large enough internal tables to
# translate this grammar.
#
#rttparse.c ltoken.h: rttgram.y
#	yacc -d $(YFLAGS) rttgram.y
#	fgrep -v -x "extern char *malloc(), *realloc();" y.tab.c > rttparse.c
#	rm y.tab.c
#	mv y.tab.h ltoken.h
