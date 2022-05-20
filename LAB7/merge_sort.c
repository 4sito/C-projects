#include "array.h"
#include <stdio.h>

void merge(int arr[], int l, int m, int r){


}

void mergeSort(int arr[], int l, int r){
    
    int m, mm, i;
    // 1. trovare il punto medio dell'array di partenza
    // if l (start) and r (end) then m (middle) = l+r/2
    
   if(l >= r )
       return;
    
    for (i = l; i < r; ++i)
        printf("%d ", arr[i]);
    

    printf("\n");

    m = (r+l)/2;
    mm = (r+l)/2;

    mergeSort(arr, l, m);
    mergeSort(arr, mm, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);

}


