#include "myheaders.h"


//Sort function C: Bubble sort

void bubbleSort(long int arr[], int n) {
	int i, j; 	//Variables used for looping

	///Largest element is bubbled to sorted position at end of array
	for (i = 0; i < n-1; i++) { //Iterate through all elements
		//Compare and swap
		//Iterate from start to first unsorted element
		for (j = 0; j < n-1-i; j++) {
			//Compare elements next to each other- swap if out of order
			if (arr[j] > arr[j + 1]) {
				long int tmp = arr[j]; //Store larger value in tmp
				arr[j] = arr[j + 1];   //Swap positions- place the smaller element in the correct position
				arr[j + 1] = tmp;      //Place the larger value (stored in tmp) in correct position
			}
		}
	}
}
