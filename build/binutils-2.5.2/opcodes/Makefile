ARCHDEFS =  -DARCH_ss
BFD_MACHINES =  ss-dis.o ss-opc.o
# This file was generated automatically by configure.  Do not edit.
VPATH = .
links = sysdep.h
host_alias = i386-pc-linux
host_cpu = i386
host_vendor = pc
host_os = linux
host_canonical = i386-pc-linux
target_alias = sslittle-na-sstrix
target_cpu = sslittle
target_vendor = na
target_os = sstrix
target_canonical = sslittle-na-sstrix
target_makefile_frag = ./../bfd/config/sslittle-na-sstrix.mt
host_makefile_frag = ../bfd/config/i386linux.mh
#    Makefile template for Configure for the opcodes library.
#    Copyright (C) 1990, 1991, 1992 Free Software Foundation, Inc.
#    Written by Cygnus Support.
# 
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

srcdir = .

prefix = /home/vivek/projects/work/200/repos/pipeline_impl_hazard_detect_and_handling_simplescalar/simplescalar/build

exec_prefix = $(prefix)
bindir = $(exec_prefix)/bin
libdir = $(exec_prefix)/lib

datadir = $(prefix)/lib
mandir = $(prefix)/man
man1dir = $(mandir)/man1
man2dir = $(mandir)/man2
man3dir = $(mandir)/man3
man4dir = $(mandir)/man4
man5dir = $(mandir)/man5
man6dir = $(mandir)/man6
man7dir = $(mandir)/man7
man8dir = $(mandir)/man8
man9dir = $(mandir)/man9
infodir = $(prefix)/info
includedir = $(prefix)/include
oldincludedir =
docdir = $(srcdir)/doc

SHELL = /bin/sh

INSTALL = `cd $(srcdir)/..; pwd`/install.sh -c
INSTALL_PROGRAM = $(INSTALL)
INSTALL_DATA = $(INSTALL)

AR = ar
AR_FLAGS = qc
CFLAGS = -g
BISON = bison
MAKEINFO = makeinfo
RANLIB = ranlib

INCDIR = $(srcdir)/../include
BFDDIR = $(srcdir)/../bfd
CSEARCH = -I. -I$(srcdir) -I../bfd -I$(INCDIR) -I$(BFDDIR)
DEP = mkdep


TARGETLIB = libopcodes.a

# To circumvent a Sun make VPATH bug, each file listed here
# should also have a foo.o: foo.c line further along in this file.

ALL_MACHINES = a29k-dis.o alpha-dis.o h8300-dis.o h8500-dis.o \
	hppa-dis.o i386-dis.o i960-dis.o m68k-dis.o \
	m88k-dis.o mips-dis.o mips-opc.o ss-dis.o ss-opc.o \
	sh-dis.o sparc-dis.o \
	sparc-opc.o z8k-dis.o ns32k-dis.o ppc-dis.o ppc-opc.o \
	arm-dis.o

# BFD_MACHINES is set by configure.in.
OFILES = $(BFD_MACHINES) dis-buf.o disassemble.o

#### host and target dependent Makefile fragments come in here.
# Target: SimpleScalar running SSTRIX

DEFAULT_VECTOR=ss_coff_little_vec
SELECT_VECS=ss_coff_big_vec
SELECT_ARCHITECTURES=bfd_ss_arch

HDEFINES=-DTRAD_CORE
HDEPFILES=trad-core.o
# Apparently this is needed to build objdump in certain configurations.
EXTRALIBS=-lm
###

FLAGS_TO_PASS = \
	"against=$(against)" \
	"AR=$(AR)" \
	"AR_FLAGS=$(AR_FLAGS)" \
	"CC=$(CC)" \
	"CFLAGS=$(CFLAGS)" \
	"RANLIB=$(RANLIB)" \
	"MAKEINFO=$(MAKEINFO)" \
	"INSTALL=$(INSTALL)" \
	"INSTALL_DATA=$(INSTALL_DATA)" \
	"INSTALL_PROGRAM=$(INSTALL_PROGRAM)" \
	"BISON=$(BISON)"

.c.o:
	$(CC) -c $(CFLAGS) $(HDEFINES) $(TDEFINES) $(CSEARCH) $(CSWITCHES) $<


# C source files that correspond to .o's.
CFILES = i386-dis.c z8k-dis.c m68k-dis.c mips-dis.c ss-dis.c ns32k-dis.c ppc-dis.c

STAGESTUFF = $(TARGETLIB) $(OFILES)

all: $(TARGETLIB) 


.NOEXPORT:

installcheck check:

info:
clean-info:
install-info:
dvi:

# HDEPFILES comes from the host config; TDEPFILES from the target config.


$(TARGETLIB): $(OFILES)
	 rm -f $(TARGETLIB)
	 $(AR) $(AR_FLAGS) $(TARGETLIB) $(OFILES)
	 $(RANLIB) $(TARGETLIB)

disassemble.o: disassemble.c $(INCDIR)/dis-asm.h
	$(CC) -c $(CFLAGS) $(ARCHDEFS) $(HDEFINES) $(TDEFINES) $(CSEARCH) $(CSWITCHES) $<

a29k-dis.o: a29k-dis.c $(INCDIR)/dis-asm.h $(INCDIR)/opcode/a29k.h
dis-buf.o: dis-buf.c $(INCDIR)/dis-asm.h
h8500-dis.o: h8500-dis.c h8500-opc.h $(INCDIR)/dis-asm.h
h8300-dis.o: h8300-dis.c $(INCDIR)/dis-asm.h $(INCDIR)/opcode/h8300.h
i386-dis.o: i386-dis.c $(INCDIR)/dis-asm.h
i960-dis.o: i960-dis.c $(INCDIR)/dis-asm.h
m68k-dis.o: m68k-dis.c $(INCDIR)/dis-asm.h $(INCDIR)/floatformat.h \
	$(INCDIR)/opcode/m68k.h
mips-dis.o: mips-dis.c $(INCDIR)/dis-asm.h $(INCDIR)/opcode/mips.h
mips-opc.o: mips-opc.c $(INCDIR)/opcode/mips.h
ss-dis.o: ss-dis.c $(INCDIR)/dis-asm.h $(INCDIR)/opcode/ss.h
ss-opc.o: ss-opc.c $(INCDIR)/opcode/ss.h
ppc-dis.o: ppc-dis.c $(INCDIR)/dis-asm.h $(INCDIR)/opcode/ppc.h
ppc-opc.o: ppc-opc.c $(INCDIR)/opcode/ppc.h
sparc-dis.o: sparc-dis.c $(INCDIR)/dis-asm.h $(INCDIR)/opcode/sparc.h
sparc-opc.o: sparc-opc.c $(INCDIR)/opcode/sparc.h
z8k-dis.o: z8k-dis.c z8k-opc.h $(INCDIR)/dis-asm.h
ns32k-dis.o: ns32k-dis.c $(INCDIR)/dis-asm.h $(INCDIR)/opcode/ns32k.h
sh-dis.o: sh-dis.c sh-opc.h $(INCDIR)/dis-asm.h
alpha-dis.o: alpha-dis.c alpha-opc.h $(INCDIR)/dis-asm.h
hppa-dis.o: hppa-dis.c $(INCDIR)/dis-asm.h $(INCDIR)/opcode/hppa.h
m88k-dis.o: m88k-dis.c $(INCDIR)/dis-asm.h $(INCDIR)/opcode/m88k.h
arm-dis.o: arm-dis.c arm-opc.h $(INCDIR)/dis-asm.h

tags etags: TAGS

TAGS: force
	etags $(INCDIR)/*.h $(srcdir)/*.h $(srcdir)/*.c

MOSTLYCLEAN = *.o core *.E *.p *.ip
mostlyclean:
	rm -rf $(MOSTLYCLEAN)
clean:
	rm -f *.a $(MOSTLYCLEAN)
distclean: clean
	rm -rf Makefile config.status sysdep.h TAGS
clobber realclean: distclean

# Mark everything as depending on config.status, since the timestamp on
# sysdep.h might actually move backwards if we reconfig and relink it
# to a different hosts/h-xxx.h file.  This will force a recompile anyway.
RECONFIG = config.status



# This target should be invoked before building a new release.
# 'VERSION' file must be present and contain a string of the form "x.y"
#
roll:
	@V=`cat VERSION`		; \
	MAJ=`sed 's/\..*//' VERSION`	; \
	MIN=`sed 's/.*\.//' VERSION`	; \
	V=$$MAJ.`expr $$MIN + 1`	; \
	rm -f VERSION			; \
	echo $$V >VERSION		; \
	echo Version $$V

# Dummy target to force execution of dependent targets.
#
force:

install:
	$(INSTALL_DATA) $(TARGETLIB) $(libdir)/libopcodes.a
	$(RANLIB) $(libdir)/libopcodes.a

Makefile: $(srcdir)/Makefile.in $(host_makefile_frag) $(target_makefile_frag)
	$(SHELL) ./config.status

dep: $(CFILES)
	mkdep $(CFLAGS) $?


# What appears below is generated by a hacked mkdep using gcc -MM.

# DO NOT DELETE THIS LINE -- mkdep uses it.
# DO NOT PUT ANYTHING AFTER THIS LINE, IT WILL GO AWAY.


# IF YOU PUT ANYTHING HERE IT WILL GO AWAY

