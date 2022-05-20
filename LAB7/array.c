#include <stdio.h>
int i;


void copia_array(int A[], int B[], int dim){
// l'array B è una copia dell'array A;

if(dim <= 0){
    printf("Dimensione array non valida\n");
    return;}

for (i = 0; i < dim; ++i) {
    
    B[i] = A[i];

    }

}



void stampaArray(int A[], int dim){

if(dim <= 0){
    printf("Dimensione array non valida\n");
    return;
}

for (i = 0; i < dim; ++i) {

    printf("%d ", *(A+i));

}
printf("\n");
}

void inserisci_in_array(int A[], int dim, 
        int start_index, int end_index){

    int copia;

    if(dim < start_index){
        printf("Indici non validi\n");
        return;
    }

    copia = A[start_index];
    A[dim] = A[dim-1];

    for (i = dim-1; i > end_index; --i) {
    A[i] = A[i-1];        
    }

    A[end_index] = copia;
}

int max_value(int A[], int dim){
    int max;

    if(dim <= 0){
    printf("Dimensione array non valida\n");
    return 0;
    }
    
    max = A[0];

    for (i = 1; i < dim; ++i) {
        
        if(max < A[i]){
        max = A[i];
        }
    }

    return max;
}


void reset_array(int A[], int dim){

    if(dim <= 0){    
    printf("Dimensione array non valida\n");
    return;
    }
    
    for (i = 0; i < dim; ++i) {
        A[i] = 0;
    }

}

void scambia(int *a, int *b){

int t = *a;

*a = *b;

*b  = t;

}

void count_frequencies(int A[], int dim, int freq[], int dim_freq){
int j, counter;

if(dim_freq < max_value(A, dim)){
    printf("La dimensione dell'array frequenza deve essere maggiore dell'elemento massimo di A\n");

    return;
    }

for (i = 0; i < dim_freq; ++i) {
    counter = 0;
    for (j = 0; j < dim; ++j) {
    if(A[j] == i)
        counter++;

    }

    freq[i] = counter;
}   

}
