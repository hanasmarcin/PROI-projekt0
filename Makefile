start : a.out
	./a.out
	rm -f *.o
	rm -f *.out


a.out: proj0.o
	g++ proj0.o 

glowny.o: proj0.cpp naglowek.h
	g++ -c -Wall -pedantic proj0.cpp
