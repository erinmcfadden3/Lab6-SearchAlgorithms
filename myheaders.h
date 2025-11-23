// DO NOT forget to add the prototypes for your ASort, BSort, and other functions below!


#include <string>
#include <unistd.h>
#define MAXSIZE 2100000 // MAXSIZE 1000001 is for the half; 2000000 was for the entire data set of 2 million

using namespace std;

void	printmenu();
void	printarray(long data[], long size);
int		readfile(string infilename, long data[]);
int		writefile(long data[], long size, string outfilename);
void	swap(long& x, long& y);

//longer sort algorithms (sort A-C)
void insertionSort(long int wData[], int sz);
void bubbleSort(long int arr[], int n);
void selectionSort(long int arr[], int n);

//faster sort algorithms (sort D-F)
void shellSort(long int arr[], int n);
void mergeSort(long int data[], int size);
void quickSort(long int arr[], int size);
