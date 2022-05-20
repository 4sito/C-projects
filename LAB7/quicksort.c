#include "array.h"

int partition(int arr[], int low, int high){

    int pivot = arr[high];
    int i = (low-1);
    
    for (int j = low; j < high; ++j) {
        
       if ( arr[j] <= pivot){
        i++;    // l'indice dell'elemento più piccolo
        
        scambia(&arr[j], &arr[i]);
       } 
    }

    scambia(&arr[i+1], &arr[high]);

    return (i+1);
}


void quickSort(int A[], int low, int high){


if( low < high ){
    
    int pivot = partition(A, low, high);

    quickSort(A, low, pivot-1);
    quickSort(A, pivot+1, high);
    
    }

}

