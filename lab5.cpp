/*Group: Mikaela Antonia H. Oliver, Haile Tovar Romero, Erin McFadden
 * Course: ECE 2161- 001 C++, Data Structures and Algorithms
 * Date: 11//22/2025
 * Description: Lab 5 - The Running Time of Sorting Algorithms. Implement six sorting algorithms (Insertion,
 * Selection, Bubble, Shell, Merge, Quicksort) in a single program and record their execution times in seconds on a fixed, large data set.
 */

#include <iostream>
#include <ctime>
#include "myheaders.h"

using namespace std;


int main() {

	int		choice, sz;
	long	data[MAXSIZE], wData[MAXSIZE];
	double  begin_time, end_time, cpu_time_used;
	string  ifilename, ofilename;

	while (1) {

		printmenu();
		cin >> choice;

		switch (choice) {

			case 1: // Read input file and store data in arrays data1 and data2
                    // The function 'readfile' returns the size of the file that was read
					// If the file could not be read, 'readfile' returns -1

					ifilename = "lab5_input.txt";
					sz = readfile(ifilename, data);

					if (sz < 0)	 {
						 cerr << endl << "ERROR: Input File Not Found or File cannot be opened." <<endl;
						 cerr << "       Please check that the file exists, its path, and try again!" << endl << endl;
						 return 0;
					}
					else cout << endl << "File size is: " << sz << endl;

					break;

			case 2: //Sort function A: Insertion Sort

                    // First, copy the contents of the array 'data' to the working array 'wData'. Your program should sort 'wData' and not 'data'.
                	for (int i = 0; i < sz; ++i){
                		wData[i] = data[i];
                	}


					begin_time = clock();   // start cpu timer

					// Call your Sort function A (Insertion Sort) here to sort the array 'wData''
			        //  Note that 'wData' is of size 'sz' (see case 1).
					insertionSort(wData, sz);


					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "(A)Sort ran for " << cpu_time_used << " secs.";

					ofilename = "lab5_A_out.txt";
					writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						 cerr << endl << "ERROR: Output File could not be opened." <<endl;
						 cerr << "       Quitting Now!" << endl << endl;
						 return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;

					break;

			case 3: // Sort function B: Selection Sort

			        // First, copy the contents of the array 'data' to the working array 'wData'. Your program should sort 'wData' and not 'data'.
            		for (int i = 0; i < sz; i++){
            			wData[i] = data[i];
            		}

					begin_time = clock();   // start cpu timer

					// Call your Sort function B: Selection Sort here to sort the array 'wData'
			        //  Note that 'wDdata' is of size 'sz' (see case 1).
					selectionSort(wData, sz);

					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "(B)Sort ran for " << cpu_time_used << " secs.";

					ofilename = "lab5_B_out.txt";
					writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						 cerr << endl << "ERROR: Output File could not be opened." <<endl;
						 cerr << "       Quitting Now!" << endl << endl;
						 return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;

					break;

			case 4: // Sort function C: Bubble Sort

			        // First, copy the contents of the array 'data' to the working array 'wData'. Your program should sort 'wData' and not 'data'.
            		for (int i = 0; i < sz; i++){
            			wData[i] = data[i];
            		}


					begin_time = clock();   // start cpu timer

					// Call your Sort function C Bubble Sort here to sort the array 'wData'
			        //  Note that 'wDdata' is of size 'sz' (see case 1).
					bubbleSort(wData, sz);

					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "(B)Sort ran for " << cpu_time_used << " secs.";

					ofilename = "lab5_B_out.txt";
					writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						 cerr << endl << "ERROR: Output File could not be opened." <<endl;
						 cerr << "       Quitting Now!" << endl << endl;
						 return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;

					break;

			case 5: // Sort function D: Shell Sort

			        // First, copy the contents of the array 'data' to the working array 'wData'. Your program should sort 'wData' and not 'data'.
            		for (int i = 0; i < sz; i++){
            			wData[i] = data[i];
            		}


					begin_time = clock();   // start cpu timer

					// Call your Sort function D: Shell Sort here to sort the array 'wData'
			        //  Note that 'wDdata' is of size 'sz' (see case 1).
					shellSort(wData, sz);

					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "(B)Sort ran for " << cpu_time_used << " secs.";

					ofilename = "lab5_B_out.txt";
					writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						 cerr << endl << "ERROR: Output File could not be opened." <<endl;
						 cerr << "       Quitting Now!" << endl << endl;
						 return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;

					break;

			case 6: // Sort function E: Merge Sort

			        // First, copy the contents of the array 'data' to the working array 'wData'. Your program should sort 'wData' and not 'data'.
            		for (int i = 0; i < sz; i++){
            			wData[i] = data[i];
            		}


					begin_time = clock();   // start cpu timer

					// Call your Sort function E (merge sort) here to sort the array 'wData'
			        //  Note that 'wDdata' is of size 'sz' (see case 1).
					mergeSort(wData, sz);

					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "(B)Sort ran for " << cpu_time_used << " secs.";

					ofilename = "lab5_B_out.txt";
					writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						 cerr << endl << "ERROR: Output File could not be opened." <<endl;
						 cerr << "       Quitting Now!" << endl << endl;
						 return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;

					break;

			case 7: // Sort function F: Quick Sort

			        // First, copy the contents of the array 'data' to the working array 'wData'. Your program should sort 'wData' and not 'data'.
            		for (int i = 0; i < sz; i++){
            			wData[i] = data[i];
            		}


					begin_time = clock();   // start cpu timer

					// Call your Sort function F (quick sort) here to sort the array 'wData'
			        //  Note that 'wDdata' is of size 'sz' (see case 1).
					quickSort(wData, sz);

					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "(B)Sort ran for " << cpu_time_used << " secs.";

					ofilename = "lab5_B_out.txt";
					writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						 cerr << endl << "ERROR: Output File could not be opened." <<endl;
						 cerr << "       Quitting Now!" << endl << endl;
						 return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;

					break;

			case 0: // Exit Program

					cout << endl << "Received program exit command - I QUIT!" << endl << endl;

					return 0;

			default: // Error in selection

					cout << endl << "Incorrect selection, try again from the menu below." << endl;

		} // switch

	} // while

	return 0;
}
