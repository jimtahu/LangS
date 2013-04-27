CXX=distcc clang++
#CFLAGS= -O2 -pipe -march=native
CFLAGS=-ggdb
CXXFLAGS=$(CFLAGS)
SRC= $(wildcard *.cpp)
OBJ= $(SRC:.cpp=.o) LangS.tab.o LangS.yy.o


all: LangS test

LangS: $(OBJ) 
	$(CXX) -o $@ $^

LangS.tab.cpp LangS.tab.hpp: LangS.ypp
	bison -d LangS.ypp

LangS.yy.cpp: LangS.l
	flex -o LangS.yy.cpp LangS.l

clean:
	rm -f *.o *.tab.cpp *.yy.cpp *.tab.hpp

.PHONY: build zip test clean all

