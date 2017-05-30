#include "stdafx.h"
#include "SelectionSort.h"
#include <iostream>

using namespace std;


SelectionSort::SelectionSort() {}


SelectionSort::SelectionSort(int arr[], int size)
{
	_size = size;
	for (int i = 0; i < size; i++)
	{
		unsortedArray[i] = arr[i];
	}
}

void SelectionSort::sortIt()
{
	for (int i = 0; i < _size; i++)
	{
		int smallest = unsortedArray[i];
		int smallestSpot = i;

		for (int j = i; j < _size; j++)
		{
			if (unsortedArray[j] < smallest)
			{
				smallest = unsortedArray[j];
				smallestSpot = j;
			}
		}

		if (smallestSpot != i)
			swap(&unsortedArray[i], &unsortedArray[smallestSpot]);
	}
}

void SelectionSort::swap(int *first, int *second) 
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

void SelectionSort::printIt()
{
	for (int i = 0; i < _size; i++)
		cout << unsortedArray[i] << ", ";
	cout << endl;
}
