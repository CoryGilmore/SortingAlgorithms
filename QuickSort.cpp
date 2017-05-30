#include "stdafx.h"
#include "QuickSort.h"
#include "InsertionSort.h"
#include <iostream>

using namespace std;

QuickSort::QuickSort() {};

QuickSort::QuickSort(int arr[], int size) 
{
	_size = size;
	for (int i = 0; i < size; i++)
		wArray[i] = arr[i];
}

void QuickSort::swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

QuickSort::~QuickSort() {};

int QuickSort :: medianOfThreeIndex(int left, int mid, int right)
{
	if (wArray[left] < wArray[mid])
	{
		//left < mid
		if (wArray[mid] < wArray[right])
			//left < mid < right   *normal squeeze thm
			return mid;
		else   // right < mid
			if (wArray[left] < wArray[right])
				//left < right < mid
				return right;
			else
				//right < left < mid
				return left;
	}

	else
		//mid < left
		if (wArray[left] < wArray[right])
			//mid < left < right  normal squeeze thm
			return left;
		else
			//right < left
			if (wArray[mid] < wArray[right])
				//mid < right < left
				return right;
			else // right < mid
				 //right < mid < left
				return mid;
}

void QuickSort::sortIt()
{
	//Private method that carrys out the sorting algo
	continueSort(0, _size - 1);

	//now we pass our global array into the insertion sort class and allow this class to print the result
	InsertionSort sort(wArray, _size);
	sort.sortIt();
	sort.printArray();
}


void QuickSort::continueSort(int left, int right)
{
	if ((right - left) <= 3) //*stopping condition, if our subarrays are size 3 or smaller were done
		return;

	int mid = (right - left) / 2;
	
	//find the pivot and its index
	int pivotIndex = medianOfThreeIndex(left, mid, right);
	int pivot = wArray[pivotIndex];

	//Move pivot to the far right index
	swap(&wArray[pivotIndex], &wArray[right]);

	//set up pointers
	int leftP = left;
	int rightP = right - 1;

	/*
	leftP looks for an index greater than pivot while rightP looks for index less than pivot
	When they find these conditions they swap these elements in the array
	*/
	while (leftP < rightP)
	{
		while (wArray[leftP] < pivot)
			leftP++;
		while (wArray[rightP] > pivot)
			rightP--;
		if(leftP < rightP)
			swap(&wArray[leftP], &wArray[rightP]);
	}
	
	//Resotre Pivot
	swap(&wArray[leftP], &wArray[rightP]);

	//now everything left of the pivot is smaller, everything right of the pivot is larger
	continueSort(left, leftP - 1);
	continueSort(leftP + 1, right);

}
