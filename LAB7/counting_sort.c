#include <stdio.h>
#include "array.h"

void counting_sort(int A[], int dim){

    int max, i, j = 0, counter;
    // trovare il massimo elemento;
    
    max = max_value(A, dim);
    
    // creiamo l'array che contiene le 'frequenze';

    int B[max_value(A, dim)+1];

    count_frequencies(A, dim, B, max+1);
    //stampaArray(B, max+1);

    // ordiniamo grazie all'array ottenuto;
    //copia_array(A, C, dim);

    for (i = 0; i < max+1; ++i) {
        counter = B[i];
        
        if(j < max){
        while(counter!=0){   
            //printf("%d %d ", i, j);
            A[j] = i;
            counter--;
            j++;
                }
            }

        }
    
}
