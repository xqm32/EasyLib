#
#	Author: xqm32	Date: 5/8/18
#	File: ./makefile
#

LGDIR=lib/libget
RDDIR=lib/librd
TSDIR=lib/libtsv
HDIR=lib
MAIN=main

# S: Step
S1=$(MAIN).cpp \
	$(LGDIR)/getafter.cpp $(LGDIR)/getbefore.cpp \
	$(LGDIR)/getignore.cpp $(LGDIR)/getrange.cpp \
	$(RDDIR)/rangedom.cpp $(TSDIR)/threadsv.cpp
# H: Head File
S1H=$(HDIR)/libget.h $(HDIR)/librd.h $(HDIR)/libtsv.h \
	$(LGDIR)/getafter.h $(LGDIR)/getbefore.h \
	$(LGDIR)/getignore.h $(LGDIR)/getrange.h \
	$(RDDIR)/rangedom.h $(TSDIR)/threadsv.h
# N: No $(MAIN)
S1N=$(LGDIR)/getafter.cpp $(LGDIR)/getbefore.cpp \
	$(LGDIR)/getignore.cpp $(LGDIR)/getrange.cpp \
	$(RDDIR)/rangedom.cpp $(TSDIR)/threadsv.cpp
S2=$(MAIN).o \
	getafter.o getbefore.o \
	getignore.o getrange.o \
	rangedom.o threadsv.o
S2N=getafter.o getbefore.o \
	getignore.o getrange.o \
	rangedom.o threadsv.o
S3=lib.a
S3N=./lib.so
S4=$(MAIN)

$(S4): $(S3)
	g++ -o $(S4) $(S3)
$(S3): $(S2)
	ar -r $(S3) $(S2)
$(S2): $(S1) $(S1H)
	g++ -c $(S1) -lpthread -std=c++17

.PHONY: clean remake install reinstall static_lib shared_lib

clean:
	rm -f $(S2) $(S3) $(S3N) $(S4)

remake: $(S3)
	ar -d $(S3) $(MAIN).o
	g++ -c $(MAIN).cpp
	ar -r $(S3) $(MAIN).o
	g++ -o $(S4) $(S3)

install: $(S3N)
	g++ -o $(S4) $(MAIN).cpp $(S3N)
reinstall: $(S3N)
	rm -f $(S4)
	make install

$(S3N): $(S1)
	g++ -o $(S3N) $(S1) -shared -fPIC -lpthread -std=c++17

static_lib: $(S3)
shared_lib: $(S3N)