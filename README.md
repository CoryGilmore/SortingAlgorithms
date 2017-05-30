# SortingAlgorithms
This repository contains six different sorting algorithms implemented using c++.

BUCKET_SORT
This algorithm uses two arrays, an array A, and an array temp whose size is equal to the largest value from array A. It then
performes the following steps:

-Iterate over each ELEMENT in array A and incriment the value at the INDEX in temp equal to the ELEMENT in A.
-Iterate over temp, for each index, print the index the appropriate amount of times given by the value at each index.
  
    Ex.
      Elements: 0 | 1 | 0 | 2 | 1
      Index:    0 | 1 | 2 | 3 | 4
      
      This would print:
      1,3,3,4

This algorithm has a complexity of O(n + m) however m can be n^2 or greater.
The most proper time to use this algorithm would be when the largest value of array A is <= n (number of elments in array A)

SELECTION_SORT
This algorithm starts at index 0 of an array and scans the array looking for the smallest element. It then
moves to the next index and continues this process untill all indexes have been visited.

This algorithm is O(n^2) on the average, best, and worst cases since it contains a for loop with another for loop
nested inside.

INSERTION_SORT
This algorithm starts at index x, where x is equal to 1. 
  -If the value at index x is < index x-1 the two elements are swapped and this process is repeated until the begining of the array is reached
  -X is then incrimented by 1 and this previous step repeats until all elements of the array are visited
  
This algorithm is O(n^2) on the average and worst case.
It can however imporve to O(n) if the set of numbers is already sorted, or near sorted.
Another way to express the complexity of this algorithm is O(n + i) where i is the number of inversions in the set of numbers

MERGE_SORT
This alogrithm takes in a set of numbers and divides this set into equal subsets, until each subset only contains one element.
It then merges these subsets together and sorts them.

Ex.

  2,12,4,5,34,11
  divide
  2,12,4 | 5,34,11
  divide
  2 | 12,4 | 5 | 34,11
  divide
  2 | 12 | 4 | 5 | 34 | 11
  
  merge
  2,12 | 4,5 | 11,34
  merge
  2,4,5,11,12,34
  
  This algorithm is O(nlgn) on the average, best and worst case because it always goes through the same overhead procedures regardless
  of the set of numbers that it recieves
  
 
 QUICK_SORT
 This algorithm takes in a set of numbers and continously applies these same procedures:
 
  -Select a pivot point using the median of the 0, n/2, and n elements (This is called median of three)
  -swap the pivot with the n - 1 index
  -create a pointer "left" to point to the 0 index, and a pointer right to point to the n - 2 index.
      - left will continue moving right along the array looking for something larger than the pivot,
         while right will continue moving left along the array looking for something smaller than the pivot.
      - when these conditions are found the values and "left" and "right" are swapped
      
 -Once left and right have crossed eachother on the array the pivot is placed back into the right - 1 position.
 
 Now we have two subarrays divided by the pivot point, where everything in the left subarray is less than the pivot,
 and everything in the right subarray is larger than the pivot.
 
 Ex.
  L E F T  S U B  A R R A Y | P | R I G H T  S U B  A R R A Y
 
 This quick sort process is then repeated in the left sub array an right subarray, untill all sub arrays are of size 3 or smaller.
 Then an insertion sort is executed to finalize the sort.
 
 This alogrithm is O(nlgn) in the average and best case scenario.
 It can however, degrade to O(n^2) when a poor pivot point is selected. 
 The best pivot point will divide the resulting sub arrays into equal amounts of elements.
 If the largest element or the smallest element in the array is continuously selected as the pivot this will
 cause the algorithm to degrade to O(n^2)
 
 
 
 SHELL_SORT
 
 This algorithm takes in a set of numbers and sorts every X elements, then X is decrimented and this is repeatedly performed until
 all the elements in the set have been sorted.
 
  -Shell purposed that the alogortihm should sort every {n/2, n/4, n/8 ... ,1} elements but research has shown that
  this sequence can yield a comlexity of O(n^2)
  
  -Hibbard then purposed the algorithm should sort every {2^(k-1), ... , 15, 7, 3, 1} elements. This has proven to have a worst
  case of O(n^3/2) 
  
  








