//============================================================================
// Name        : mergeSort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

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


int main() {

	return 0;
}
