# This file was generated automatically by configure.  Do not edit.
VPATH = .
links = 
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
CFLAGS_FOR_TARGET = 

CC_FOR_TARGET = ` \
  if [ -f $${rootme}/../../gcc/xgcc ] ; then \
    echo $${rootme}/../../gcc/xgcc -B$${rootme}/../../gcc/; \
  else \
    if [ "$(host_canonical)" = "$(target_canonical)" ] ; then \
      echo $(CC); \
    else \
      t='$(program_transform_name)'; echo gcc | sed -e '' $$t; \
    fi; \
  fi`

CXX = gcc
CXX_FOR_TARGET = ` \
  if [ -f $${rootme}/../../gcc/xgcc ] ; then \
    echo $${rootme}/../../gcc/xgcc -B$${rootme}/../../gcc/; \
  else \
    if [ "$(host_canonical)" = "$(target_canonical)" ] ; then \
      echo $(CXX); \
    else \
      t='$(program_transform_name)'; echo gcc | sed -e '' $$t; \
    fi; \
  fi`

#### host, target, and site specific Makefile frags come in here.

srcdir = .

all: bintest

bintest:        $(srcdir)/bintest.c
	$(CC_FOR_TARGET) $(CFLAGS_FOR_TARGET) $(CFLAGS) -g -o bintest $(srcdir)/bintest.c $(LDFLAGS)

clean:
	-rm -f *.o bintest *.diff *~ *.bad core m68k.gld

distclean:	clean
	-rm -f Makefile config.status nmtest.c

Makefile : $(srcdir)/Makefile.in $(host_makefile_frag) $(target_makefile_frag)
	$(SHELL) ./config.status

force:
