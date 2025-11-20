/*
 * sortalgorithms.h
 *
 *  Created on: Nov 19, 2025
 *      Author: erin-mcfadden
 */

#ifndef SORTALGORITHMS_H_
#define SORTALGORITHMS_H_
#include <iostream>
using namespace std;

void printmenu(){
	cout << "Choose an option from the menu below: " << endl;
	cout << "(1) Read data from input file" << endl;
	cout << "(2) Sort data using Insertion Sort" << endl;
	cout << "(3) Sort data using Selection Sort" << endl;
	cout << "(4) Sort data using Bubble Sort" << endl;
	cout << "(5) Sort data using Shell Sort" << endl;
	cout << "(6) Sort data using Merge Sort" << endl;
	cout << "(7) Sort data using Quick Sort" << endl;
	cout << "(0) Exit" << endl;

}

void readfile()

// Sort function A: insertion sort
void insertionSortA(long wData[], int sz){
	int i, j;
	long key;

	// insertion sort algorithm
	for (i = 1; i < sz; i++){
		key = wData[i];
		j = i - 1;

		// this shifts larger elements one position to the right
		while (j >= 0 && wData[j] > key){
			wData[j + 1] = wData[j];
			j--;
		}

		// place key into its correct position
		wData[j + 1] = key;
	}
}

//Sort function B: merge sort
void merge(long int *arr, int left, int mid, int right){
	int n1 = mid - left + 1;
	int n2 = right - mid;

	long int *L = new long int[n1];
	long int *R = new long int[n2];

	for(int i = 0; i < n1; i++){
		L[i] = arr[left + i];
	}

	for(int j = 0; j < n2; j++){
		R[j] = arr[mid + 1 + j];
	}

	int i = 0;
	int j = 0;
	int k = left;

	while(i < n1 && j < n2){
		if(L[i] <= R[j]){
			arr[k++] = L[i++];
		} else{
			arr[k++] = R[j++];
		}
	}

	while(i < n1){
		arr[k++] = L[i++];
	}

	while(j < n2){
			arr[k++] = R[j++];
		}

	delete[] L;
	delete[] R;
}


void mergeSort(long int *arr, int left, int right){
	if(left < right){
		int mid = left + (right - left)/2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

//Sort function C: bubble sort
void bubbleSort(long int arr[], int n) {
	int i, j; 	//Variables used for looping

	///Largest element is bubbled to sorted position at end of array
	for (i = 0; i < n-1; i++) { //Iterate through all elements
		//Compare and swap
		for (j = 0; j < n-1-i; j++) { //Iterate from start to first unsorted element
			if (arr[j] > arr[j + 1]) { //Compare elements next to each other- swap if out of order
				long int tmp = arr[j]; //Store larger value in tmp
				arr[j] = arr[j + 1]; //Swap positions- place the smaller element in the correct position
				arr[j + 1] = tmp; //Place the larger value (stored in tmp) in correct position
			}
		}
	}
}

void selectionSort(long int arr[], int n){
	for(int i = 0; i < n - 1; i++){
		int minIndex = i;
		for(int j = i + 1; j < n; j++){
			if (arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		if (minIndex != i){
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}






#endif /* SORTALGORITHMS_H_ */
