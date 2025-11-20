//============================================================================
// Name        : Insertionsort.cpp
// Author      : 
// Version     :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

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

int main() {
	return 0;
}
