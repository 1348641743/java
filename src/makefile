
LIBRARY   =       $(PUBDIR)/lib
BUILD     =       $(RUNDIR)/build
ESQL      =       esql
PROC      =       proc
CC        =       g++ -m64 -fPIC -g 
AR        =       ar
AUTOFLAGS =       -rv
RM        =       rm
MV        =       mv
CP        =       cp
ECHO      =       echo
SRC       =       $(SRCDIR)/api
AUTOOBJ   =       libsrc.a
.SUFFIXES:
.SUFFIXES: .o .cbs

DFIR = ltt
DSEC      =       /src/
OBJS	=	\
		crtcgysx.o \
		crtdancgysx.o \
		crtdgrkh.o \
		crtdgskh.o \
		crtdkaxx.o \
		crtdtykh.o \
		crtmzhye.o \
		crtzdkfh.o \
		getrand.o \
		tdpdq.o \
		tdphq.o \
		ttzkh.o 

COMPILE	:	$(OBJS)
.cbs.o :
	$(ECHO) $(SRC)/$(DFIR)$(DSEC)
	umask 022
	make -f $(SRCDIR)/cfg/apsmk $*.o
	$(AR)	$(AUTOFLAGS) $(LIBRARY)/$(AUTOOBJ) $*.o
	chmod 777 $(LIBRARY)/$(AUTOOBJ) 
