#pragma once
#ifndef MERGESORT_H
#define MERGESORT_H

class MergeSort
{
public:

	//Default Constructor
	MergeSort();

	//OverloadConstructor
	MergeSort(int*, int);
	
	//Destructor
	~MergeSort();

	//
	void printIt();

	void sortIt();



private:
	int _size;
	int wArray[10];
	void partition_merge(int, int);
	void merge(int, int, int);



};





#endif
