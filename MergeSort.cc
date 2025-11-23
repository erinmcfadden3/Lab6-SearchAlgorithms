#include "myheaders.h"

/*Sort function E: Merge sort
 * Here, given an array segment data[first..last] where the left half data[first..mid] and the right half
 * data[mid+1..last] are already sorted, this function merges the two  halves into a single sorted
 * segment back in data[first..last].
 */

//The parameters are: data - 'array' containing the two sorted halves. 'first' - starting index of the segment
//to merge. 'mid' - ending index of the left half (mid + 1 starts the right half). 'ast  - ending index of the
//right half.

void merge(long int data[], int first, int mid, int last)
{
	//Compute total number of elements in [first..last]
    int n = last - first + 1;
    //Temporary array to hold the merged result
    long int *temp = new long int[n];

    int i1 = first;     //left half pointer
    int i2 = mid + 1;   //right half pointer
    int i = 0;          //temp array pointer

    //Merge elements from both halves in sorted order
    while (i1 <= mid && i2 <= last) {
        if (data[i1] <= data[i2])
            temp[i++] = data[i1++];
        else
            temp[i++] = data[i2++];
    }

    //This copies any remaining elements from the left half
    while (i1 <= mid)
        temp[i++] = data[i1++];

    //This copies any remaining elements from the right half
    while (i2 <= last)
        temp[i++] = data[i2++];

    //This copies the merged result back into the original array segment
    for (int j = 0; j < n; j++)
        data[first + j] = temp[j];

    //Free the temporary array
    delete[] temp;
}

// Internal recursive function that performs merge sort on the portion
// data[first...last] of the array.
//The parameters of this function: data - array to be sorted, first - starting index of the current segment
//last - ending index of the current segment.

void mergeSortRec(long int data[], int first, int last)
{
    // Base condition: segment of size 0 or 1 is already sorted
    if (first < last) {
    	// find midpoint to split into left and right halves
        int mid = (first + last) / 2;

        //Recursively sort the left half [first..mid]
        mergeSortRec(data, first, mid);
        //Recursively sort the right half [mid+1..last]
        mergeSortRec(data, mid + 1, last);
        //Merge the two sorted halves into a single sorted segment
        merge(data, first, mid, last);
    }
}

//Sorts the entire array data[0..size-1] in ascending order by calling
//the internal recursive function mergeSortRec().
void mergeSort(long int data[], int size)
{
    mergeSortRec(data, 0, size - 1);
}
