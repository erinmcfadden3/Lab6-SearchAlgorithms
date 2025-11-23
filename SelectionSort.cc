#include "myheaders.h"

/* Sort function B: Selection Sort
 * Sorts an array of long integers in ascending order using the selection sort algorithm.
 * Here, for each position i in the array, we find the smallest element in the unsorted portion
 * arr[i...n-1] and swap it into position i. after i moves from 0 to n-1, the whole array
 * is sorted.
 */


void selectionSort(long int arr[], int n){
	//Move the boundary of the sorted portion from left to right.
	for(int i = 0; i < n - 1; i++){
		//Assume the first element of the unsorted region is the minimum.
		int minIndex = i;
		//Search the rest of the unsorted region for a smaller element.
		for(int j = i + 1; j < n; j++){
			if (arr[j] < arr[minIndex]){
				minIndex = j; //update index of currently known minimum
			}
		}
		//If a smaller element was found, swap it with the element at i
		//so that arr[0..i] is the sorted region.
		if (minIndex != i){
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}
