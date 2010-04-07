run : string.o
	g++ -o run string.o
string.o : string.cpp string.h
	g++ -c string.cpp
clean :
	rm run string.o
