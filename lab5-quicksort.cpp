//Erin McFadden
//Lab 5
//Quicksort Algorithm

#include <iostream>
using namespace std;

long medianOfThree(long arr[], int low, int high) {
    int mid = low + (high - low) / 2;

    if (arr[low] > arr[mid]) std::swap(arr[low], arr[mid]);
    if (arr[mid] > arr[high]) std::swap(arr[mid], arr[high]);
    if (arr[low] > arr[mid]) std::swap(arr[low], arr[mid]);

    return arr[mid]; // the median as pivot
}

int partition(long arr[], int low, int high) {
    long pivot = medianOfThree(arr, low, high);

    int i = low - 1;
    int j = high + 1;

    while (true) {
        do { i++; } while (arr[i] < pivot);
        do { j--; } while (arr[j] > pivot);

        if (i >= j) return j;

        swap(arr[i], arr[j]);
    }
}

void quickSortRec(long arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSortRec(arr, low, pi);
        quickSortRec(arr, pi + 1, high);
    }
}

void quickSort(long arr[], int size) {
    quickSortRec(arr, 0, size - 1);
}






}








}
