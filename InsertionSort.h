#pragma once
#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

class InsertionSort
{
public:
	//Default Constructor
	InsertionSort();

	//Overload Constructor
	InsertionSort(int*, int);

	//Destructor
	~InsertionSort();

	int* get_array();
	void swap(int*,int*);
	void printArray();
	void sortIt();

private:
	//Member Variables
	int* wArray;
	int _size;
};


#endif

