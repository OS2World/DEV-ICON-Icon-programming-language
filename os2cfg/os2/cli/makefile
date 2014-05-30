ISRC = \icondev\src

foo:
	@echo make build to copy from here to $(ISRC)
	@echo make buildmt to copy from here to $(ISRC)
	@echo make all	 to copy from $(ISRC) to here
	@echo make allmt to copy from $(ISRC) to here
build:
	copy rswitch.asm $(ISRC)\common\rswitch.asm
	copy common.mak  $(ISRC)\common\makefile
	copy define.h	 $(ISRC)\h
	copy local.h	 $(ISRC)\h
	copy path.h	 $(ISRC)\h
	copy icont.mak	 $(ISRC)\icont\makefile
	copy preproc.mak $(ISRC)\preproc\makefile
	copy rtt.mak	 $(ISRC)\rtt\makefile
	copy iconx.def	 $(ISRC)\runtime\iconx.def
	copy stub.def	 $(ISRC)\runtime\stub.def
	copy stub.rc	 $(ISRC)\runtime\stub.rc
	copy iconx.mak	 $(ISRC)\runtime\makefile
buildmt:
	copy rswitch.asm   $(ISRC)\common\rswitch.asm
	copy common.mak    $(ISRC)\common\makefile
	copy define.hmt    $(ISRC)\h
	copy local.h	   $(ISRC)\h
	copy path.h	   $(ISRC)\h
	copy preproc.mak   $(ISRC)\preproc\makefile
	copy rtt.mak	   $(ISRC)\rtt\makefile
	copy stub.def	   $(ISRC)\runtime\stub.def
	copy stub.rc	   $(ISRC)\runtime\stub.rc
	copy mticonx.mak   $(ISRC)\runtime\makefile
	copy mticonx.def   $(ISRC)\runtime\mticonx.def
	copy mticont.mak   $(ISRC)\icont\makefile

all: rswitch.asm common.mak \
     define.h		    \
     local.h		    \
     path.h		    \
     icont.mak		    \
     rtt.mak		    \
     preproc.mak	    \
     iconx.def		    \
     stub.def		    \
     stub.rc		    \
     iconx.mak
allmt: rswitch.asm common.mak \
     define.hmt 	    \
     local.h		    \
     path.h		    \
     mticont.mak	    \
     rtt.mak		    \
     preproc.mak	    \
     mticonx.def	    \
     stub.def		    \
     stub.rc		    \
     mticonx.mak
#
# Files for COMMON
#
rswitch.asm: $(ISRC)\common\rswitch.asm
	copy $? $@
common.mak: $(ISRC)\common\makefile
	copy $? $@

#
# Files for H
#
define.h: $(ISRC)\h\define.h
	copy $? $@
define.hmt: $(ISRC)\h\define.h
	copy $? $@
local.h: $(ISRC)\h\local.h
	copy $? $@
path.h : $(ISRC)\h\path.h
	copy $? $@

#
# Files for ICONT
#
icont.mak: $(ISRC)\icont\makefile
	copy $? $@
mticont.mak: $(ISRC)\icont\makefile
	copy $? $@

#
# Files for RTT
#
rtt.mak: $(ISRC)\rtt\makefile
	copy $? $@

#
# Files for PREPROC
#
preproc.mak: $(ISRC)\preproc\makefile
	copy $? $@

#
# Files for RUNTIME
#
iconx.mak: $(ISRC)\runtime\makefile
	copy $? $@
mticonx.mak: $(ISRC)\runtime\makefile
	copy $? $@
iconx.def: $(ISRC)\runtime\iconx.def
	copy $? $@
mticonx.def: $(ISRC)\runtime\mticonx.def
	copy $? $@
stub.def: $(ISRC)\runtime\stub.def
	copy $? $@
stub.rc: $(ISRC)\runtime\stub.rc
	copy $? $@
