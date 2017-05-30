#include "stdafx.h" //**Important to include stdafx.h first!
#include "InsertionSort.h"
#include <iostream>


using namespace std;

//Default Constructor
InsertionSort::InsertionSort() {}

//Overload Constructor
InsertionSort::InsertionSort(int* array, int size)
{
	
	_size = size;
	wArray = array;
	sortIt();
}

//Destructor
InsertionSort::~InsertionSort() 
{}


/*
Okay... so big point to take away when passing by reference...
1.) Make sure you set up the parameters as pointers
2.) When refering to the parameters in the body of the method...
    make sure you include the "*" notation in front of them each time

	Now I read the body of this method like...
	-Create an int called temp and set it to the VALUE left is pointing at
	-set whatever the VALUE left is pointing to, to the VALUE right is pointing to
	-set the VALUE right is pointing to, to the value of temp
*/
void InsertionSort::swap(int *left, int *right)
{
	//setting up pointers
	int temp = *left;
	*left = *right;
	*right = temp;
}

void InsertionSort::printArray()
{
	for (int i = 0; i < _size; i++)
	{
		cout << wArray[i] << ", ";
	}
	cout << endl;
}

/*
Insertion sort
1.) go to 2nd element in array, unsortedArray[1], call this "i"
2.) compare this element with the element just before it
	-if current element is smaller than the one before it, swap these elements
3.) continue comparing this element with the one before it, untill you reach the start of array
4.)incriment "i" and repeat steps 2 - 4
*/
void InsertionSort::sortIt()
{
	for (int i = 1; i < _size; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			if (wArray[j] < wArray[j - 1])
				swap(&wArray[j], &wArray[j - 1]);
			
		}
	}
}

int* InsertionSort::get_array() { return wArray; }
