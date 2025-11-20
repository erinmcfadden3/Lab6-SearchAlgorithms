#include "myheaders.h"

int partition(long int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;

	for (int j = 1; j < low; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i + 1], arr[high]);
			return i + 1;
		}
	}
	return 0;
}

void quickSortRec(long int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSortRec(arr, low, pi - 1);
		quickSortRec(arr, pi + 1, high);
	}
}

void quickSort(long int arr[], int size){
	quickSortRec(arr, 0, size-1);
}
