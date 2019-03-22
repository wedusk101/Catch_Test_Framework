suite: Number.o test.o
	g++ Number.o test.o -o suite -std=c++11

Number.o:
	g++ -c Number.cpp Number.h -std=c++11
	
test.o:
	g++ -c test.cpp catch.hpp Number.h -std=c++11	

clean:
	rm -f Number.o test.o Number.h.gch catch.hpp.gch