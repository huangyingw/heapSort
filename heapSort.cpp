// HeapSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include "HeapSort.h"

void main() 
{
	HeapSort<int> *heapSort=new HeapSort<int>(20);
	heapSort->data[0]=6;  
	heapSort->data[1]=16;  
	heapSort->data[2]=15; 
	heapSort->data[3]=1;  
	heapSort->data[4]=12; 
	heapSort->data[5]=13; 
	heapSort->data[6]=2;  
	heapSort->data[7]=9;  
	heapSort->data[8]=10;  
	heapSort->data[9]=5;  
	heapSort->data[10]=3; 
	heapSort->data[11]=7; 
	heapSort->data[12]=10;
	heapSort->data[13]=11;
	heapSort->data[14]=14;
	heapSort->data[15]=17; 
	heapSort->data[16]=2; 
	heapSort->data[17]=18;
	heapSort->data[18]=20;
	heapSort->data[19]=19;
	heapSort->Sort();
	heapSort->Print();
}