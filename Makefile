FLAGS=-g
LIBS=-lomniORB4 -lomnithread -lomniDynamic4 -pthread -lmongoclient -lboost_thread-mt -lboost_filesystem -lboost_program_options -lboost_system
OBJS = CorbaTubeSK.o
all: CorbaTubeSK.o
	g++ Server.cpp $(OBJS) $(FLAGS) $(LIBS)

CorbaTubeSK.o: CorbaTube
	g++ CorbaTubeSK.cc -c

CorbaTube: CorbaTube.idl
	omniidl -bcxx CorbaTube.idl

