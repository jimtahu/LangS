CXX=distcc g++

LangS: LangS.tab.cpp LangS.yy.cpp
	$(CXX) -o $@ $^

LangS.tab.cpp LangS.tab.hpp: LangS.ypp
	bison -d LangS.ypp

LangS.yy.cpp: LangS.l
	flex -o LangS.yy.cpp LangS.l

clean:
	rm -f *.tab.cpp *.yy.cpp *.tab.hpp
