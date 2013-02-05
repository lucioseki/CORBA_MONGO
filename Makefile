CC=g++
LIBS=-lomniORB4 -lomnithread -lomniDynamic4 -pthread -lmongoclient -lboost_thread-mt -lboost_filesystem -lboost_program_options -lboost_system

all Server: CorbaTubeSK.o Server.cpp
	$(CC) Server.cpp CorbaTubeSK.o -g $(LIBS)

CorbaTubeSK.o: CorbaTubeSK.cc
	$(CC) CorbaTubeSK.cc -c

CorbaTubeSK.cc: CorbaTube.idl
	omniidl -bcxx CorbaTube.idl

clean:
	rm *.o
	rm a.out
