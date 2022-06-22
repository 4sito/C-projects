#include "pila.h"
#include <stdlib.h>
#include <stdio.h>

void print_pila(Pila p){

for (int i = 0; i < p.size; i++)
    printf("%d ", p.data[i]);

printf("\n");
}

void init(Pila* p){

    p->capacity = 1;
    p->size = 0;
    p->data = malloc(sizeof(int));
}

void push(Pila* p, int elem){


if(p->size == p->capacity){
    p->data=realloc(p->data, sizeof(int)*2*p->capacity);
    p->capacity *= 2;
}

p->data[p->size] = elem;
p->size++;

}

int pop(Pila* p){

    if(p->size > 0){
        p->size--;
        return p->data[p->size];
    }
    else 
        return 0;
}