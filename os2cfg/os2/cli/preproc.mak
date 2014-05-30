CC	= icc
CFLAGS	= -O -G5
MAKE = make

POBJS = pout.obj pchars.obj perr.obj pmem.obj bldtok.obj macro.obj preproc.obj evaluate.obj \
	files.obj gettok.obj pinit.obj

COBJS= ../common/getopt.obj ../common/time.obj ../common/strtbl.obj ../common/alloc.obj

ICOBJS= getopt.obj time.obj strtbl.obj alloc.obj

OBJS= $(POBJS) $(COBJS)

DOT_H = preproc.h pproto.h ptoken.h ../h/define.h ../h/config.h\
	../h/typedefs.h ../h/proto.h ../h/mproto.h

all: $(OBJS)

pp.exe: pmain.obj $(OBJS)
	$(CC) -Fe pp.exe pmain.obj $(OBJS)

pmain.obj:	  $(DOT_H)
p_out.obj:	  $(DOT_H)
pchars.obj:	  $(DOT_H)
p_err.obj:	  $(DOT_H)
pmem.obj:	  $(DOT_H)
pstring.obj:	  $(DOT_H)
bldtok.obj:	  $(DOT_H)
macro.obj:	  $(DOT_H)
preproc.obj:	  $(DOT_H)
evaluate.obj:	  $(DOT_H)
files.obj:	  $(DOT_H)
gettok.obj:	  $(DOT_H)
p_init.obj:	  $(DOT_H)
