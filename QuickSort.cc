#include "myheaders.h"


/*Sort function F: Quick sort
 * Here, this rearranges the elements of sub-array arr[low..high] around a pivot (the element we temporarily
 * choose as a reference point to split the array. This is so that all elements less than the pivot come before
 * it, all elements greater than or equal to the pivot come after it. It then returns the final index of the pivot
 * element.
 */

int partition(long int arr[], int low, int high) {
    long int pivot = arr[high];   // pivot value (last element)
    int i = low - 1;              // index of smaller element

    // go from low up to high - 1
    // Each time we find an element smaller than the pivot,
    // we expand the "smaller than pivot" region by moving it left.
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;				   // move boundary of smaller elements right
            swap(arr[i], arr[j]);  // move smaller element to the left side
        }
    }

    // place pivot in the correct position
    swap(arr[i + 1], arr[high]);
    return i + 1;                 // partition index
}

//Recursively applies the quicksort algorithm to sort the sub-array
//arr[low..high] in ascending order.

void quickSortRec(long int arr[], int low, int high) {
	//Base condition: if the subarray has 0 or 1 element, it is already sorted
    if (low < high) {
    	// Partition the array; pi is the index where the pivot ends up.
    	// Elements to the left of pi are < pivot, to the right are >= pivot.
        int pi = partition(arr, low, high);

        //Recursively sort the left part (elements smaller than pivot)
        quickSortRec(arr, low, pi - 1);
        //Recursively sort the right part (elements greater than or equal to pivot)
        quickSortRec(arr, pi + 1, high);
    }
}

//main function algorithm call for quick sort
void quickSort(long int arr[], int size) {
	//Start the recursive quicksort on the full range of the array
    quickSortRec(arr, 0, size - 1);
}
