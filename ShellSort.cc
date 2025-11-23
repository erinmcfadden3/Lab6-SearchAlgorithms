#include "myheaders.h"


/* Sort function D: Shell Sort
 * Sorts an array of long integers in ascending order. Here, Shell sort is a generalization of
 * insertion sort that allows the exchange of far-apart elements. It starts by comparing elements
 * that are 'gap' positions apart, gradually reducing the gap until it becomes 1. When gap == 1, the
 * algorithm is just insertion sort, but because the array is already partially sorted by larger gaps
 * the final pass is faster.
 */


void shellSort(long int arr[], int n)
{
    int  gap, i, j;
    long temp;

    //Start with a big gap, then reduce the gap
    //A common choice is to begin with n/2 and halve the gap each time.
    for (gap = n / 2; gap > 0; gap /= 2) {

        // do a gapped insertion sort for this gap size
        for (i = gap; i < n; i++) {
            temp = arr[i];   // element to insert
            j = i;

            // shift earlier gap-sorted elements up until the correct
            // location for temp is found
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            // Insert temp in its correct location for this gap
            arr[j] = temp;
        }
    }
}




