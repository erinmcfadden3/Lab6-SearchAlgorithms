//Erin McFadden
//Lab 5
//Quicksort Algorithm

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = low - 1;

	for (int j = 1; j < low; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i + 1], arr[high];
			return i + 1;
		}
	}
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}






}








}
