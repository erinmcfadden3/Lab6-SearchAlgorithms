#include <iostream>
using namespace std

void quickSort(long int arr[], int first, int last) {
	if (first >= last) {  //base case
		return;
	}
	int lower = first + 1;
	int upper = last;
	swap(arr[first], arr[(first + last)/2]);
	int bound = arr[first];
	while(lower <= upper) {
		while (bound > arr[lower]) {
			lower++;
		}
		while (bound < arr[upper]) {
			upper--;
		}
		if (lower < upper) {
			swap(arr[lower++], arr[upper--]);
		} else {
			lower++;
		}
	}
	swap(arr[upper], arr[first]);
	if (first < upper- 1) {
		quickSort(arr, first, upper - 1);
	}
	if (upper + 1 < last) {
		quickSort(arr, upper + 1, last);
	}
}

void quickSort(long int arr[], int n){
	int i, max;
	if (n < 2) {
		return;
	}
	for (i = 1; max = 0; i < n; i++) {
		if (arr[max] < arr[i]) {
			max = i;
		}
	}
	swap(arr[n-1], arr[max]);
	quickSort(arr, 0, n -2);
}

