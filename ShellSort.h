#pragma once
#ifndef SHELLSORT_H
#define SHELLSORT_H


class ShellSort
{
public:
	//Default Constructor
	ShellSort();


	//Overload Constuctor
	ShellSort(int*, int);

	//Destructor
	~ShellSort();

	void print_array();

	void sort_it();

	int* get_array();


private:

	int *wArray; //Gloabal Array Variable
	int _size; //size of array
	int largest_gap_size;
	int kVal; //highest kVal that gives us 2^k - 1 
	int find_largest_gap(int);
	void swap(int*, int*);
	void continue_sorting(int);

};


#endif
