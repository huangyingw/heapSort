run : heapSort.o
	g++ -o run heapSort.o
heapSort.o : heapSort.cpp heapSort.h
	g++ -c heapSort.cpp
clean :
	rm run heapSort.o
