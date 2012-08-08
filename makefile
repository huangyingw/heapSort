run : heapSort.o
include ../GNU_makefile_template
heapSort.o : heapSort.cpp heapSort.h
	g++ -c heapSort.cpp
clean :
	rm run heapSort.o
