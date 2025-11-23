#include "myheaders.h"

/* Sort function A: Insertion Sort
 * Sorts an array of long integers in ascending order using the insertion sort algorithm.
 * Here, the array is conceptually split into a sorted part on the left and an unsorted part
 * on the right. For each element in the unsorted part, we insert it into the correct position
 * in the sorted part by shifting larger elements to the right.
 */


void insertionSort(long int wData[], int sz){
	int i, j;
	long key;

	//Walks through the array starting at index 1
	//treat wData[0..i-1] as the sorted region and insert wData[i]
	for (i = 1; i < sz; i++){
		//Save the value to be inserted and start comparing from the element just before it.
		key = wData[i];
		j = i - 1;

		//Shift elements that are greater than 'key' one position
		//to the right to make space for 'key'.
		while (j >= 0 && wData[j] > key){
			wData[j + 1] = wData[j];
			j--;
		}

		//place key into its correct position
		//where all elements to the left are <= key and all to the right are >= key.
		wData[j + 1] = key;
	}
}
