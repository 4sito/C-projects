#include "vector.h"
#include <stdlib.h>
#include <stdio.h>

void print_vector(Vector v){

for (int i = 0; i < v.size ; i++)
    printf("%d ", v.data[i]);

    printf("\n");


}

void init(Vector* v){

    v->capacity = 1;
    v->size = 0;
    v->data = malloc(sizeof(int));

}

int read(Vector v, unsigned int pos){

if(pos < 0 || pos > v.size )
    return -1;
else
    return v.data[pos];
}
void insert_element(Vector* v, int data, unsigned int pos){

    if(v->capacity == v->size){
        v->data = realloc(v->data, sizeof(v->data)*2*v->capacity);
        v->capacity *= 2;
    }
    for (int i = v->size; i > pos; i--)
    {
        v->data[i] = v->data[i-1];
    }
        
    v->data[pos] = data;
    v->size++;
}

void delete_element(Vector* v, unsigned int pos){

    for (int i = pos; i < v->size; i++)
        v->data[i] = v->data[i+1];

    v->size--;    
}