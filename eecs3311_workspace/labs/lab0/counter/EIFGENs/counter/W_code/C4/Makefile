INCLUDE_PATH =  -I"$(ISE_LIBRARY)/library/time/spec/include"
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
SYSTEM_IN_DYNAMIC_LIB = counter.dylib 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C4_c.o 

OLDOBJECTS =  rx1064.o rx1064d.o rx1063.o rx1063d.o rx1062.o rx1062d.o ds1076.o \
	ds1076d.o ds1065.o ds1065d.o ds1088.o ds1088d.o ds1072.o ds1072d.o \
	kl1073.o kl1073d.o kl1086.o kl1086d.o ds1079.o ds1079d.o ds1067.o \
	ds1067d.o ds1082.o ds1082d.o kl1066.o kl1066d.o kl1085.o kl1085d.o \
	ds1070.o ds1070d.o ds1089.o ds1089d.o ds1071.o ds1071d.o ds1090.o \
	ds1090d.o kl1074.o kl1074d.o kl1087.o kl1087d.o ut1059.o ut1059d.o \
	in1075.o in1075d.o kl1068.o kl1068d.o kl1083.o kl1083d.o ds1069.o \
	ds1069d.o ds1084.o ds1084d.o uc1060.o uc1060d.o ki1077.o ki1077d.o \
	uc1061.o uc1061d.o uc1058.o uc1058d.o ds1080.o ds1080d.o ds1081.o \
	ds1081d.o ki1078.o ki1078d.o 

all: Cobj4.o

Cobj4.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj4.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

