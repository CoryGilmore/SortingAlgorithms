#pragma once
#ifndef QUICKSORT_H
#define QUICKSORT_H

class QuickSort
{
public:
	//Default Constructor
	QuickSort();

	//OverloadConstructor
	QuickSort(int[], int);

	//Destructor
	~QuickSort();

	//SortingAlgorithm
	void sortIt();

private:
	int wArray[10];
	int _size;
	void swap(int*, int*);
	int medianOfThreeIndex(int, int, int);
	void continueSort(int, int);
};
#endif