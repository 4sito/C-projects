#include <stdio.h>
#include <time.h>
#include "counting_sort.h"
#include "quicksort.h"
#include "merge_sort.h"
#include "array.h"


#define SIZE_A 7
#define SIZE_X 25000


int main() {

    int A[SIZE_A] = {4,3,6,1,9,7,4}; 
    int B[SIZE_A];
    int C[max_value(A, SIZE_A)+1];
    int size = SIZE_A+1;
    //int x = 4, y = 5;
    int dim_freq = max_value(A, SIZE_A)+1;
    
    /*
    printf("prima: %d %d\n", x, y); 
    scambia(&x, &y);
    printf("dopo: %d %d\n", x, y); 
    */

    //stampaArray(A, SIZE_A);
    

    copia_array(A, B, SIZE_A);
    
    printf("Merge sort B:\n");
    mergeSort(B, 0, SIZE_A-1);
    stampaArray(B, SIZE_A);
    

    printf("Quicksort A:\n");
    quickSort(A, 0, SIZE_A-1);
    stampaArray(A, SIZE_A);


    /*
     * printf("merge sort\n");
     * mergeSort(A, 0, SIZE_A);
     * printf("fine merge sort\n");
    */
    
    /*
    inserisci_in_array(A, SIZE_A, 4, 1);
    stampaArray(A, size);
    */

        /*
    reset_array(B, SIZE_A);
    reset_array(A, size);

    stampaArray(B, SIZE_A);
    stampaArray(A, size);
    */
    //count_frequencies(A, size, C, dim_freq );
    //stampaArray(C, dim_freq);
    /*
    copia_array(A, B, SIZE_A);
    mergeSort(B, 0, SIZE_A-1);
    stampaArray(B, SIZE_A);

    quickSort(A, 0, SIZE_A-1);
    stampaArray(A, SIZE_A);
    */

}
