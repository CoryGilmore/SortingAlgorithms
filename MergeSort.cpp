#include "stdafx.h"
#include "MergeSort.h"
#include <iostream>

using namespace std;

MergeSort::MergeSort() {}

MergeSort::MergeSort(int *arr, int size)
{
	_size = size;
	for (int i = 0; i < size; i++)
		wArray[i] = arr[i];

}

MergeSort::~MergeSort() {}

void MergeSort::printIt()
{
	for (int i = 0; i < _size; i++)
		cout << wArray[i] << ", ";
}



void MergeSort::sortIt()
{
	partition_merge(0, _size - 1);
	printIt();
}

void MergeSort::partition_merge(int left, int right) {
	if (left < right) {
		int mid = (right + left) / 2;
		partition_merge(left, mid);
		partition_merge(mid + 1, right);
		merge(left, right, mid);
	}
}

void MergeSort::merge(int left, int right, int mid)
{
	int leftIndex, rightIndex, outputIndex, output[10];
	leftIndex = outputIndex = left;
	rightIndex = mid + 1;

	while (leftIndex <= mid && rightIndex <= right)
	{
		if (wArray[leftIndex] < wArray[rightIndex]) {
			output[outputIndex] = wArray[leftIndex];
			outputIndex++;
			leftIndex++;
		}
		else {
			output[outputIndex] = wArray[rightIndex];
			outputIndex++;
			rightIndex++;
		}
	}

	//Catching the remaining values
	while (leftIndex <= mid)
	{
		output[outputIndex] = wArray[leftIndex];
		outputIndex++;
		leftIndex++;
	}

	while (rightIndex <= right)
	{
		output[outputIndex] = wArray[rightIndex];
		outputIndex++;
		rightIndex++;
	}

	//Copy the output array back into wArray

	for (leftIndex = left; leftIndex < outputIndex; leftIndex++)
		wArray[leftIndex] = output[leftIndex];
}


