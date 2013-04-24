CXX=distcc g++
CFLAGS=-ggdb
CXXFLAGS=$(CFLAGS)

LangS: LangS.tab.o LangS.yy.o LangS.o
	$(CXX) -o $@ $^

LangS.tab.cpp LangS.tab.hpp: LangS.ypp
	bison -d LangS.ypp

LangS.yy.cpp: LangS.l
	flex -o LangS.yy.cpp LangS.l

clean:
	rm -f *.o *.tab.cpp *.yy.cpp *.tab.hpp
