INCLUDE_PATH =  -I"$(ISE_LIBRARY)/library/encoding/implementation/include" -I"$(ISE_LIBRARY)/library/time/spec/include" -I"$(ISE_LIBRARY)/library/vision2/spec/include" -I"$(ISE_LIBRARY)/library/vision2/implementation/gtk/Clib"  -D_REENTRANT -I/opt/local/include/gtk-2.0 -I/opt/local/lib/gtk-2.0/include -I/opt/local/include/pango-1.0 -I/opt/local/include/gio-unix-2.0/ -I/opt/local/include -I/opt/local/include/cairo -I/opt/local/include/atk-1.0 -I/opt/local/include/cairo -I/opt/local/include/pixman-1 -I/opt/local/include -I/opt/local/include/gdk-pixbuf-2.0 -I/opt/local/include/libpng16 -I/opt/local/include/pango-1.0 -I/opt/local/include/harfbuzz -I/opt/local/include -I/opt/local/include/pango-1.0 -I/opt/local/include/fribidi -I/opt/local/include -I/opt/local/include/ossp -I/opt/local/include/freetype2 -I/opt/local/include/libpng16 -I/opt/local/include -I/opt/local/include/glib-2.0 -I/opt/local/lib/glib-2.0/include -I/opt/local/include
SHELL = /bin/sh
CC = cc
CPP = c++
CFLAGS = -O0 -pipe -fno-common -fPIC -DEIF_THREADS -DEIF_POSIX_THREADS  -DWORKBENCH -I"/Applications/MacPorts/Eiffel_19.05/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fno-common -fPIC -DEIF_THREADS -DEIF_POSIX_THREADS  -DWORKBENCH -I"/Applications/MacPorts/Eiffel_19.05/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   
LDSHAREDFLAGS =   -dynamiclib -flat_namespace -undefined suppress -o
EIFLIB = "/Applications/MacPorts/Eiffel_19.05/studio/spec/macosx-x86-64/lib/libmtwkbench.a"
EIFTEMPLATES = /Applications/MacPorts/Eiffel_19.05/studio/config/macosx-x86-64/templates
LIBS = -lm -lpthread
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/Applications/MacPorts/Eiffel_19.05/studio/spec/macosx-x86-64/bin/x2c"
SHAREDLINK = cc
SHAREDLIBS = -lm
SHARED_SUFFIX = .dylib
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = bank.dylib 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C8_c.o 

OLDOBJECTS =  kl1199.o kl1199d.o ki1191.o ki1191d.o ki1198.o ki1198d.o ev1205.o \
	ev1205d.o ev1210.o ev1210d.o ki1192.o ki1192d.o ki1196.o ki1196d.o \
	ki1193.o ki1193d.o ev1206.o ev1206d.o ev1201.o ev1201d.o ev1208.o \
	ev1208d.o kl1190.o kl1190d.o kl1195.o kl1195d.o ev1203.o ev1203d.o \
	ev1204.o ev1204d.o ev1222.o ev1222d.o ev1221.o ev1221d.o ki1197.o \
	ki1197d.o ev1202.o ev1202d.o ev1200.o ev1200d.o uc1207.o uc1207d.o \
	kl1209.o kl1209d.o ev1220.o ev1220d.o kl1194.o kl1194d.o ev1219.o \
	ev1219d.o ev1218.o ev1218d.o ev1217.o ev1217d.o ev1216.o ev1216d.o \
	ev1215.o ev1215d.o ev1214.o ev1214d.o ev1213.o ev1213d.o ev1212.o \
	ev1212d.o ev1211.o ev1211d.o 

all: Cobj8.o

Cobj8.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj8.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

