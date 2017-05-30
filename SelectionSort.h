#pragma once
#ifndef SELECTIONSORT_H
#define SECTIONSORT_H

class SelectionSort 
{
public:
	//Default Constructor
	SelectionSort();

	//Overload Constructor
	SelectionSort(int[], int);

	//SelectionSort Algorithm
	void sortIt();

	void printIt();

	

private:
	int unsortedArray[10];
	int _size;
	void swap(int*, int*);
};





#endif
