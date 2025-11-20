//============================================================================
// Name        : selectionSort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


void selectionSort(long int *arr, int n){
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


int main() {

	return 0;
}
