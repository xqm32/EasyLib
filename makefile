#
#	Author: xqm32	Date: 5/8/18
#	File: ./makefile
#

LGDIR=lib/libget
RDDIR=lib/librd
TSDIR=lib/libtsv
HDIR=lib

S1=main.cpp \
	$(LGDIR)/getafter.cpp $(LGDIR)/getbefore.cpp \
	$(LGDIR)/getignore.cpp $(LGDIR)/getrange.cpp \
	$(RDDIR)/rangedom.cpp $(TSDIR)/threadsv.cpp
S1H=$(HDIR)/libget.h $(HDIR)/librd.h $(HDIR)/libtsv.h \
	$(LGDIR)/getafter.h $(LGDIR)/getbefore.h \
	$(LGDIR)/getignore.h $(LGDIR)/getrange.h \
	$(RDDIR)/rangedom.h $(TSDIR)/threadsv.h
S2=main.o \
	getafter.o getbefore.o \
	getignore.o getrange.o \
	rangedom.o threadsv.o
S3=lib.a
S4=main

$(S4): $(S3)
	g++ -o main $(S3) -lpthread -std=c++17
$(S3): $(S2)
	ar -r $(S3) $(S2)
$(S2): $(S1) $(S1H)
	g++ -c $(S1)
	
.PHONY: clean install

clean:
	rm -f $(S2) $(S3) $(S4)
	
install: $(S3)
	ar -d lib.a main.o
	g++ -o main main.cpp lib.a -lpthread -std=c++17